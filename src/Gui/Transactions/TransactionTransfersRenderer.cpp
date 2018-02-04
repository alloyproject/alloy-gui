/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QPersistentModelIndex>

#include "TransactionTransfersRenderer.h"
#include "Settings/Settings.h"
#include "Gui/Common/RightAlignmentColumnDelegate.h"
#include "DrawableTransfersModel.h"
#include "Style/Style.h"
#include "Models/TransactionsModel.h"
#include "Models/TransfersModel.h"
#include "ui_TransactionTransfersRenderer.h"

namespace WalletGui {

namespace {

const int TREE_VIEW_ITEM_HEIGHT = 18;
const QString STYLE_SHEET_TEMPLATE =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--TransactionTransfersRenderer QTreeView {"
    "background: transparent;"
    "font-size: %fontSizeSmall%;"
  "}"

  "WalletGui--TransactionTransfersRenderer QTreeView::item {"
    "min-height: 18px;"
    "border-left: 5px solid transparent;"
    "border-right: 5px solid transparent;"
  "}";

}

TransactionTransfersRenderer::TransactionTransfersRenderer(ICryptoNoteAdapter* _cryptoNoteAdapter, IAddressBookManager* _addressBookManager,
  const QModelIndex& _transactionIndex, const QString& _walletAddress, QWidget* _parent) : QFrame(_parent), m_ui(new Ui::TransactionTransfersRenderer) {
  m_ui->setupUi(this);
  m_ui->m_transfersView->viewport()->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);

  QAbstractItemModel* model = new TransfersModel(_cryptoNoteAdapter, _transactionIndex, this);
  DrawableTransfersModel* drawableModel = new DrawableTransfersModel(_cryptoNoteAdapter, _addressBookManager, _walletAddress, this);
  bool showDetails = model->rowCount() <= 1 || _transactionIndex.data(TransactionsModel::ROLE_SHOW_TRANSFERS).toBool();
  drawableModel->showDetails(showDetails);
  drawableModel->setSourceModel(model);
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(STYLE_SHEET_TEMPLATE));
  m_ui->m_transfersView->setModel(drawableModel);
  m_ui->m_transfersView->setItemDelegateForColumn(TransfersModel::COLUMN_ADDRESS, new RightAlignmentColumnDelegate(false, this));
  m_ui->m_transfersView->header()->setSectionResizeMode(TransfersModel::COLUMN_ADDRESS, QHeaderView::Stretch);
  m_ui->m_transfersView->header()->setSectionResizeMode(TransfersModel::COLUMN_AMOUNT, QHeaderView::Fixed);
  m_ui->m_transfersView->header()->resizeSection(TransfersModel::COLUMN_AMOUNT, 110);
  m_ui->m_transfersView->setFixedHeight(drawableModel->rowCount() * TREE_VIEW_ITEM_HEIGHT);
}

TransactionTransfersRenderer::~TransactionTransfersRenderer() {
}

int TransactionTransfersRenderer::calculateItemHeight(quintptr _transferCount) {
  return _transferCount * TREE_VIEW_ITEM_HEIGHT + 10;
}

}

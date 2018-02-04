/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "NewTransactionDelegate.h"

#include "Gui/Common/MagicLabel.h"

#include "Models/TransactionsModel.h"

namespace WalletGui {

NewTransactionDelegate::NewTransactionDelegate(QObject* _parent) : QStyledItemDelegate(_parent) {
}

NewTransactionDelegate::~NewTransactionDelegate() {
}

QWidget* NewTransactionDelegate::createEditor(QWidget* _parent, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  MagicLabel* newTransactionLabel = new MagicLabel(1000, 7000, _parent);
  connect(newTransactionLabel, &MagicLabel::completedSignal, newTransactionLabel, &MagicLabel::deleteLater);
  newTransactionLabel->setObjectName("newTransactionLabel");
  return newTransactionLabel;
}

void NewTransactionDelegate::updateEditorGeometry(QWidget* _editor, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  _editor->setGeometry(_option.rect);
}

void NewTransactionDelegate::setEditorData(QWidget* _editor, const QModelIndex& _index) const {
  static_cast<MagicLabel*>(_editor)->start();
}

}

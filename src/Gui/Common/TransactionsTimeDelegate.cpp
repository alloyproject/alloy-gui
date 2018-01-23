/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QPainter>

#include "TransactionsTimeDelegate.h"
#include "Models/TransactionsModel.h"

namespace WalletGui {

TransactionsTimeDelegate::TransactionsTimeDelegate(QObject* _parent) : QStyledItemDelegate(_parent) {
}

TransactionsTimeDelegate::~TransactionsTimeDelegate() {
}

void TransactionsTimeDelegate::paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  CryptoNote::WalletTransactionState transactionState =
    static_cast<CryptoNote::WalletTransactionState>(_index.data(TransactionsModel::ROLE_STATE).value<quint8>());
  if (transactionState == CryptoNote::WalletTransactionState::SUCCEEDED) {
    QStyledItemDelegate::paint(_painter, _option, _index);
    return;
  }

  QString transactionStateString = "-";
  switch (transactionState) {
  case CryptoNote::WalletTransactionState::FAILED:
    transactionStateString = tr("Failed");
    break;
  case CryptoNote::WalletTransactionState::CANCELLED:
    transactionStateString = tr("Cancelled");
    break;
  default:
    break;
  }

  _painter->save();
  _painter->setRenderHints(QPainter::Antialiasing);
  QStyleOptionViewItem opt(_option);
  initStyleOption(&opt, _index);
  opt.widget->style()->drawPrimitive(QStyle::PE_PanelItemViewItem, &opt, _painter, opt.widget);
  if (_index.data(Qt::DecorationRole).isValid()) {
    QRect iconRect = opt.widget->style()->subElementRect(QStyle::SE_ItemViewItemDecoration, &opt, opt.widget);
    opt.widget->style()->drawItemPixmap(_painter, iconRect, _option.decorationAlignment, _index.data(Qt::DecorationRole).value<QPixmap>());
  }

  QRect textRect = opt.widget->style()->subElementRect(QStyle::SE_ItemViewItemText, &opt, opt.widget);
  _painter->setFont(opt.font);
  opt.widget->style()->drawItemText(_painter, textRect, opt.displayAlignment, opt.palette, opt.state & QStyle::State_Enabled, transactionStateString);
  _painter->restore();
}

}

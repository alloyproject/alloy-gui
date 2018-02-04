/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QLinearGradient>
#include <QPainter>

#include "TransactionsAmountDelegate.h"
#include "Settings/Settings.h"
#include "Models/TransactionsModel.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const int AMOUNT_DECIMAL_COUNT = 3;

}

TransactionsAmountDelegate::TransactionsAmountDelegate(bool _hideLongAmounts, QObject* _parent) : QStyledItemDelegate(_parent),
  m_hideLongAmounts(_hideLongAmounts), m_amountGradient(0, 0, 1, 0) {
  m_amountGradient.setCoordinateMode(QLinearGradient::ObjectBoundingMode);
  m_amountGradient.setColorAt(0, Qt::black);
  m_amountGradient.setColorAt(0.7, Qt::black);
  m_amountGradient.setColorAt(1, Settings::instance().getCurrentStyle().backgroundColorAlternate());
}

TransactionsAmountDelegate::~TransactionsAmountDelegate() {
}

void TransactionsAmountDelegate::paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  if (!_index.isValid()) {
    QStyledItemDelegate::paint(_painter, _option, _index);
    return;
  }

  _painter->save();
  _painter->setRenderHints(QPainter::Antialiasing);
  QStyleOptionViewItem opt(_option);
  initStyleOption(&opt, _index);
  opt.decorationPosition = QStyleOptionViewItem::Right;

  opt.widget->style()->drawPrimitive(QStyle::PE_PanelItemViewItem, &opt, _painter, opt.widget);
  if (_index.data(Qt::DecorationRole).isValid()) {
    QRect iconRect = opt.widget->style()->subElementRect(QStyle::SE_ItemViewItemDecoration, &opt, opt.widget);
    opt.widget->style()->drawItemPixmap(_painter, iconRect, _option.decorationAlignment, _index.data(Qt::DecorationRole).value<QPixmap>());
  }

  QString amountString = _index.data().toString();
  if (m_hideLongAmounts) {
    int dotPos = amountString.indexOf('.');
    int decimalDigitNumber = amountString.length() - 1 - dotPos;
    if (decimalDigitNumber < AMOUNT_DECIMAL_COUNT) {
      amountString.append(QString().fill('0', AMOUNT_DECIMAL_COUNT - decimalDigitNumber));
    }

    if (decimalDigitNumber > AMOUNT_DECIMAL_COUNT && ((opt.state & QStyle::State_MouseOver) == 0)) {
      amountString = amountString.left(amountString.length() - decimalDigitNumber + AMOUNT_DECIMAL_COUNT);
      QPen pen(m_amountGradient, 0);
      _painter->setPen(pen);
    }
  }

  QRect textRect = opt.widget->style()->subElementRect(QStyle::SE_ItemViewItemText, &opt, opt.widget);
  _painter->setFont(opt.font);
  opt.widget->style()->drawItemText(_painter, textRect, opt.displayAlignment, opt.palette, opt.state & QStyle::State_Enabled, amountString);
  _painter->restore();
}

}

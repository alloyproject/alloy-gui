/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "TransactionsHeaderView.h"
#include "Models/TransactionsModel.h"

namespace WalletGui {

TransactionsHeaderView::TransactionsHeaderView(QWidget* _parent) : QHeaderView(Qt::Horizontal, _parent) {
}

TransactionsHeaderView::~TransactionsHeaderView() {
}

void TransactionsHeaderView::paintSection(QPainter* _painter, const QRect& _rect, int _logicalIndex) const{
  if (_logicalIndex != TransactionsModel::COLUMN_AMOUNT) {
    QHeaderView::paintSection(_painter, _rect, _logicalIndex);
    return;
  }

  QRect rect(_rect);
  rect.setRight(_rect.right() - 24);
  QHeaderView::paintSection(_painter, rect, _logicalIndex);
}

}

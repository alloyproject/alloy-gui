/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "DonationColumnDelegate.h"
#include "Models/AddressBookModel.h"


namespace WalletGui {

DonationColumnDelegate::DonationColumnDelegate(QObject* _parent) : QStyledItemDelegate(_parent) {
}

DonationColumnDelegate::~DonationColumnDelegate() {
}

void DonationColumnDelegate::paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  if (_index.column() == AddressBookModel::COLUMN_DONATION) {
    QStyleOptionViewItem opt(_option);
    initStyleOption(&opt, _index);
    opt.widget->style()->drawPrimitive(QStyle::PE_PanelItemViewItem, &opt, _painter, opt.widget);
    opt.widget->style()->drawItemPixmap(_painter, _option.rect, opt.displayAlignment, _index.data(Qt::DecorationRole).value<QPixmap>());
    return;
  }

  QStyledItemDelegate::paint(_painter, _option, _index);
}

}

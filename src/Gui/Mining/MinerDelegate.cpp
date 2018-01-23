/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QAbstractItemView>

#include "MinerDelegate.h"
#include "Style/Style.h"
#include "Models/MinerModel.h"

namespace WalletGui {

MinerRemoveDelegate::MinerRemoveDelegate(QAbstractItemView* _view, QObject* _parent) : QStyledItemDelegate(_parent),
  m_view(_view) {
}

MinerRemoveDelegate::~MinerRemoveDelegate() {
}

void MinerRemoveDelegate::paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  if (_index.column() == MinerModel::COLUMN_REMOVE) {
    QStyleOptionViewItem opt(_option);
    if ((opt.state & QStyle::State_MouseOver) && opt.rect.contains(m_view->viewport()->mapFromGlobal(QCursor::pos()))) {
      initStyleOption(&opt, _index);
      QRect pixmapRect = opt.widget->style()->subElementRect(QStyle::SE_ItemViewItemDecoration, &opt, opt.widget);
      opt.widget->style()->drawPrimitive(QStyle::PE_PanelItemViewItem, &opt, _painter, opt.widget);
      opt.widget->style()->drawItemPixmap(_painter, pixmapRect, opt.displayAlignment, QPixmap(":icons/delete_pool_hover"));
      return;
    }
  }

  QStyledItemDelegate::paint(_painter, _option, _index);
}

}

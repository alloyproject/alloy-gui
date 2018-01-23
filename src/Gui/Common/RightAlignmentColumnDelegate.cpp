/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QPainter>
#include <QPalette>

#include "RightAlignmentColumnDelegate.h"

namespace WalletGui {

RightAlignmentColumnDelegate::RightAlignmentColumnDelegate(bool _isSelectable, QObject* _parent) : QStyledItemDelegate(_parent),
  m_isSelectable(_isSelectable) {
}

RightAlignmentColumnDelegate::~RightAlignmentColumnDelegate() {
}

void RightAlignmentColumnDelegate::paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  if (_index.isValid()) {
    QStyleOptionViewItem opt(_option);
    _painter->save();
    initStyleOption(&opt, _index  );
    _painter->setFont(opt.font);
    QFontMetrics fm(opt.font);
    QRect textRect = opt.widget->style()->subElementRect(QStyle::SE_ItemViewItemText, &opt, opt.widget);
    QString elidedText = fm.elidedText(opt.text, opt.textElideMode, textRect.width());
    opt.widget->style()->drawPrimitive(QStyle::PE_PanelItemViewItem, &opt, _painter, opt.widget);
    if (_index.data(Qt::DecorationRole).isValid()) {
      opt.decorationPosition = QStyleOptionViewItem::Right;
      QRect iconRect = opt.widget->style()->subElementRect(QStyle::SE_ItemViewItemDecoration, &opt, opt.widget);
      iconRect.moveLeft(iconRect.left() + iconRect.width() + 8);
      opt.widget->style()->drawItemPixmap(_painter, iconRect, _option.decorationAlignment, _index.data(Qt::DecorationRole).value<QPixmap>());
    }

    if (m_isSelectable && opt.state & QStyle::State_Selected) {
      _painter->setPen(Qt::white);
    } else {
      _painter->setPen(opt.palette.color(QPalette::Text));
    }

    opt.widget->style()->drawItemText(_painter, textRect, opt.displayAlignment, opt.palette, opt.state & QStyle::State_Enabled,
      elidedText);
    _painter->restore();
    return;
  }

  QStyledItemDelegate::paint(_painter, _option, _index);
}

}

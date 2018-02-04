/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QPainter>

#include "LinkLikeColumnDelegate.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

LinkLikeColumnDelegate::LinkLikeColumnDelegate(QObject* _parent) : QStyledItemDelegate(_parent) {
}

LinkLikeColumnDelegate::~LinkLikeColumnDelegate() {
}

void LinkLikeColumnDelegate::paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  if (_index.isValid()) {
    QStyleOptionViewItem opt(_option);
     _painter->save();
     initStyleOption(&opt, _index);
    if (opt.state & QStyle::State_MouseOver) {
      QColor textColor(Settings::instance().getCurrentStyle().fontColorBlueHover());
      _painter->setPen(textColor);
    } else {
      QColor textColor(Settings::instance().getCurrentStyle().fontColorBlueNormal());
      _painter->setPen(textColor);
    }

    _painter->setFont(opt.font);
    QFontMetrics fm(opt.font);
    QRect textRect = opt.widget->style()->subElementRect(QStyle::SE_ItemViewItemText, &opt, opt.widget);
    QString elidedText = fm.elidedText(opt.text, opt.textElideMode, textRect.width());
    opt.widget->style()->drawPrimitive(QStyle::PE_PanelItemViewItem, &opt, _painter, opt.widget);
    opt.widget->style()->drawItemText(_painter, textRect, opt.displayAlignment, opt.palette, opt.state & QStyle::State_Enabled, elidedText);
    _painter->restore();
    return;
  }

  QStyledItemDelegate::paint(_painter, _option, _index);
}

}

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

#include "CopyColumnDelegate.h"
#include "CopyMagicLabel.h"
#include "WalletTreeView.h"

namespace WalletGui {

CopyColumnDelegate::CopyColumnDelegate(QObject* _parent) : QStyledItemDelegate(_parent) {
}

CopyColumnDelegate::~CopyColumnDelegate() {
}

void CopyColumnDelegate::paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  if (_index.isValid()) {
    QStyleOptionViewItem opt(_option);
    _painter->save();
    initStyleOption(&opt, _index  );
    _painter->setFont(opt.font);
    QFontMetrics fm(opt.font);
    QRect textRect = opt.widget->style()->subElementRect(QStyle::SE_ItemViewItemText, &opt, opt.widget);
    textRect.setRight(textRect.right() - 20);
    QString elidedText = fm.elidedText(opt.text, opt.textElideMode, textRect.width());
    opt.widget->style()->drawPrimitive(QStyle::PE_PanelItemViewItem, &opt, _painter, opt.widget);
    _painter->setPen(opt.palette.color(QPalette::Text));
    opt.widget->style()->drawItemText(_painter, textRect, opt.displayAlignment, opt.palette, opt.state & QStyle::State_Enabled,
      elidedText);
    _painter->restore();
    return;
  }
}

QWidget* CopyColumnDelegate::createEditor(QWidget* _parent, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  Q_UNUSED(_option);
  Q_UNUSED(_index);
  CopyMagicLabel* copyLabel = new CopyMagicLabel(_parent);
  copyLabel->setText(tr("Copied!"));
  copyLabel->adjustSize();
  const WalletTreeView* walletTreeView = qobject_cast<const WalletTreeView*>(_option.widget);
  if (walletTreeView != nullptr) {
    int row = _index.row();
    connect(walletTreeView, &WalletTreeView::copyableItemClickedSignal, [row, copyLabel](const QModelIndex& _clickedIndex) {
      if (_clickedIndex.row() == row) {
        copyLabel->start();
      }
    });
  }

  return copyLabel;
}

void CopyColumnDelegate::updateEditorGeometry(QWidget* _editor, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  QRect editorRect(_editor->rect());
  QRect textRect = _option.widget->style()->subElementRect(QStyle::SE_ItemViewItemText, &_option, _option.widget);
  editorRect.moveCenter(_option.rect.center());
  editorRect.moveLeft(textRect.right() - 10);
  _editor->setGeometry(editorRect);
}

}

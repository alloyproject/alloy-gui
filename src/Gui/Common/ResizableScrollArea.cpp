/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "ResizableScrollArea.h"

namespace WalletGui {

ResizableScrollArea::ResizableScrollArea(QWidget* _parent) : QScrollArea(_parent) {
}

ResizableScrollArea::~ResizableScrollArea() {
}

QSize ResizableScrollArea::sizeHint() const {
  if (widget() == nullptr || widget()->height() == 0) {
    return QScrollArea::sizeHint();
  }

  QList<QWidget*> childList = widget()->findChildren<QWidget*>(QString(), Qt::FindDirectChildrenOnly);
  int height = 0;
  for (QWidget* widgetItem : childList) {
    height += widgetItem->height();
  }

  return QSize(width(), height + 2);
}

}

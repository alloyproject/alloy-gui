/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QDateTime>

#include "Gui/Common/WalletTreeView.h"

namespace WalletGui {

class PoolTreeView : public WalletTreeView {
  Q_OBJECT
  Q_DISABLE_COPY(PoolTreeView)

public:
  explicit PoolTreeView(QWidget* _parent);
  ~PoolTreeView();

  bool eventFilter(QObject* _object, QEvent* _event) override;

protected:
  void dragEnterEvent(QDragEnterEvent* _event) override;
  void dragMoveEvent(QDragMoveEvent* _event) override;
  void dropEvent(QDropEvent* _event) override;
  void mouseMoveEvent(QMouseEvent* _event) override;
  void mousePressEvent(QMouseEvent* _event) override;
  void mouseReleaseEvent(QMouseEvent* _event) override;

private:
  QDateTime m_pressedTime;
  QPoint m_pressedPosition;
  QModelIndex m_pressedIndex;
};

}

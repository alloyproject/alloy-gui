/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QApplication>
#include <QDrag>
#include <QDropEvent>
#include <QMimeData>

#include "PoolTreeView.h"
#include "Settings/Settings.h"
#include "Style/Style.h"
#include "Models/MinerModel.h"

namespace WalletGui {

namespace {

const char POOL_TREE_VIEW_STYLE_SHEET_TEMPLATE[] =
  "WalletGui--PoolTreeView::item:selected {"
    "color: %fontColorGray%;"
    "background: %backgroundColorAlternate%;"
  "}"

  "WalletGui--PoolTreeView::item:alternate:selected {"
    "color: %fontColorGray%;"
    "background: #ffffff;"
  "}"

  "WalletGui--PoolTreeView::item:!selected {"
    "color: #000000;"
    "background: %backgroundColorAlternate%;"
  "}"

  "WalletGui--PoolTreeView::item:alternate:!selected {"
    "color: #000000;"
    "background: #ffffff;"
  "}";

class CursorManager {
public:
  CursorManager(QAbstractItemView* _view, QEvent* _event, bool _isDragging = false) : m_view(_view),
    m_event(_event), m_isDragging(_isDragging) {
  }

  ~CursorManager() {
    switch (m_event->type()) {
    case QEvent::MouseMove:
      processMouseMoveEvent();
      break;
    default:
      break;
    }
  }

private:
  QAbstractItemView* m_view;
  QEvent* m_event;
  bool m_isDragging;

  void processMouseMoveEvent() {
    QMouseEvent* mouseEvent = reinterpret_cast<QMouseEvent*>(m_event);
    QModelIndex index = m_view->indexAt(mouseEvent->pos());
    if (!(mouseEvent->buttons() & Qt::LeftButton) && index.isValid() && index.column() != MinerModel::COLUMN_REMOVE) {
      m_view->setCursor(Qt::OpenHandCursor);
    }
  }
};

}

PoolTreeView::PoolTreeView(QWidget* _parent) : WalletTreeView(_parent) {
  QString styleSheetString = styleSheet();
  styleSheetString.append(POOL_TREE_VIEW_STYLE_SHEET_TEMPLATE);

  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(styleSheetString));
  setAcceptDrops(true);
  viewport()->installEventFilter(this);
}

PoolTreeView::~PoolTreeView() {
}

bool PoolTreeView::eventFilter(QObject* _object, QEvent* _event) {
  if (_object == viewport() && _event->type() == QEvent::Leave) {
    selectionModel()->clearSelection();
  }

  return WalletTreeView::eventFilter(_object, _event);
}

void PoolTreeView::dragEnterEvent(QDragEnterEvent* _event) {
  CursorManager cursorMan(this, _event);
  _event->accept();
}

void PoolTreeView::dragMoveEvent(QDragMoveEvent* _event) {
  CursorManager cursorMan(this, _event);
  _event->accept();
}

void PoolTreeView::dropEvent(QDropEvent* _event) {
  CursorManager cursorMan(this, _event);
  QModelIndex selectedIndex = selectionModel()->currentIndex();
  if (!selectedIndex.isValid()) {
    return;
  }

  QModelIndex destinationIndex = indexAt(_event->pos());
  if (!destinationIndex.isValid()) {
    return;
  }

  model()->moveRow(QModelIndex(), selectedIndex.row(), QModelIndex(), destinationIndex.row());
  repaint();
}

void PoolTreeView::mouseMoveEvent(QMouseEvent* _event) {
  CursorManager cursorMan(this, _event, state() == PoolTreeView::DraggingState);
  if (!(_event->buttons() & Qt::LeftButton)) {
    WalletTreeView::mouseMoveEvent(_event);
    QModelIndex index = indexAt(_event->pos());
    if (index.isValid() && index.column() != MinerModel::COLUMN_REMOVE) {
      selectionModel()->setCurrentIndex(index, QItemSelectionModel::ClearAndSelect | QItemSelectionModel::Rows);
    } else {
      selectionModel()->clearSelection();
    }

    return;
  }

  if (!m_pressedIndex.isValid()) {
    WalletTreeView::mouseMoveEvent(_event);
    return;
  }

  if ((_event->pos() - m_pressedPosition).manhattanLength() < QApplication::startDragDistance()) {
    WalletTreeView::mouseMoveEvent(_event);
    return;
  }

  if (m_pressedTime.msecsTo(QDateTime::currentDateTime()) < QApplication::startDragTime()) {
    WalletTreeView::mouseMoveEvent(_event);
    return;
  }

  startDrag(model()->supportedDragActions());
}

void PoolTreeView::mousePressEvent(QMouseEvent* _event) {
  CursorManager cursorMan(this, _event);
  m_pressedTime = QDateTime::currentDateTime();
  m_pressedPosition = _event->pos();
  m_pressedIndex = indexAt(m_pressedPosition);
  WalletTreeView::mousePressEvent(_event);
}

void PoolTreeView::mouseReleaseEvent(QMouseEvent* _event) {
  CursorManager cursorMan(this, _event);
  WalletTreeView::mouseReleaseEvent(_event);
}

}

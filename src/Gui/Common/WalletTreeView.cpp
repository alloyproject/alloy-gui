/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QMouseEvent>
#include <QScrollBar>
#include <QTimer>

#include "WalletTreeView.h"
#include "Settings/Settings.h"
#include "LinkLikeColumnDelegate.h"
#include "Style/Style.h"
#include "WalletWindowedItemModel.h"


namespace WalletGui {

namespace {

const char WALLET_VIEW_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletTreeView {"
    "border: none;"
    "font-size: %fontSizeNormal%;"
    "background-color: #ffffff;"
    "border-bottom: 1px solid transparent;"
  "}"

  "WalletGui--WalletTreeView[showBottomBorder=\"true\"] {"
    "border: none;"
    "border-bottom: 1px solid %borderColor%;"
  "}"

  "WalletGui--WalletTreeView > QHeaderView {"
    "min-height: 20px;"
    "max-height: 20px;"
    "background-color: #ffffff;"
    "border: none;"
    "border-bottom: 1px solid %borderColor%;"
  "}"

  "WalletGui--WalletTreeView > QHeaderView::section {"
    "font-size: %fontSizeSmall%;"
    "color: %fontColorGray%;"
    "background-color: #ffffff;"
    "border: none;"
    "border-left: 23px solid transparent;"
    "border-right: 20px solid transparent;"
  "}"

  "WalletGui--WalletTreeView::item {"
    "background: %backgroundColorAlternate%;"
    "min-height: %viewItemHeight%;"
    "max-height: %viewItemHeight%;"
    "border: none;"
    "border-left: 20px solid transparent;"
    "border-right: 20px solid transparent;"
  "}"

  "WalletGui--WalletTreeView::item:alternate {"
    "background: #ffffff;"
  "}"

  "WalletGui--WalletTreeView::item:selected {"
    "color: #ffffff;"
    "background: %selectionColor%;"
  "}"

  "WalletGui--WalletTreeView::item:hover[hoverIsVisible=\"true\"] {"
    "background: #e9eaec;"
    "alternate-background-color: #e9eaec;"
  "}";

}

WalletTreeView::WalletTreeView(QWidget* _parent) : QTreeView(_parent), m_linkLikeColumnDelegate(nullptr), m_autoUpdateRowCount(true) {
  setMouseTracking(true);
  setAlternatingRowColors(true);
  setTextElideMode(Qt::ElideMiddle);
  setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
  setUniformRowHeights(true);
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_VIEW_STYLE_SHEET_TEMPLATE));
  connect(this, &WalletTreeView::clicked, this, &WalletTreeView::itemClicked);
  setToolTipDuration(1000);
}

WalletTreeView::~WalletTreeView() {
}

void WalletTreeView::setLinkLikeColumnSet(const QSet<int>& _linkLikeColumnSet) {
  m_linkLikeColumnSet = _linkLikeColumnSet;
  if (!m_linkLikeColumnSet.isEmpty() && m_linkLikeColumnDelegate == nullptr) {
    m_linkLikeColumnDelegate = new LinkLikeColumnDelegate(this);
    for (int _column : m_linkLikeColumnSet) {
      setItemDelegateForColumn(_column, m_linkLikeColumnDelegate);
    }
  }
}

void WalletTreeView::setCopyableColumnSet(const QSet<int>& _copyableColumnSet) {
  m_copyableColumnSet = _copyableColumnSet;
}

void WalletTreeView::setHoverIsVisible(bool _hoverIsVisible) {
  setProperty("hoverIsVisible", _hoverIsVisible);
  style()->unpolish(this);
  style()->polish(this);
}

void WalletTreeView::setModel(QAbstractItemModel* _model) {
  QTreeView::setModel(_model);
  updateRowCount();
}

void WalletTreeView::updateRowCount() {
  if (verticalScrollBarPolicy() == Qt::ScrollBarAlwaysOff) {
    WalletWindowedItemModel* windowedModel = qobject_cast<WalletWindowedItemModel*>(model());
    if (windowedModel != nullptr) {
      int rows = calculateVisibleRowCount();
      windowedModel->setWindowSize(rows);
    }
  }
}

void WalletTreeView::setAutoUpdateRowCount(bool _autoUpdateRowCount) {
  m_autoUpdateRowCount = _autoUpdateRowCount;
}

void WalletTreeView::mouseMoveEvent(QMouseEvent* _event) {
  QPoint pos = _event->pos();
  QModelIndex index = indexAt(pos);
  if (index.isValid() && (m_linkLikeColumnSet.contains(index.column()) || m_copyableColumnSet.contains(index.column()))) {
    setCursor(Qt::PointingHandCursor);
  } else {
    setCursor(Qt::ArrowCursor);
  }

  QTreeView::mouseMoveEvent(_event);
}

void WalletTreeView::paintEvent(QPaintEvent* _event) {
  if (!property("showBottomBorder").toBool() && verticalScrollBar()->isVisible()) {
    setProperty("showBottomBorder", true);
    style()->unpolish(this);
    style()->polish(this);
  } else if (property("showBottomBorder").toBool() && !verticalScrollBar()->isVisible()) {
    setProperty("showBottomBorder", false);
    style()->unpolish(this);
    style()->polish(this);
  }

  QTreeView::paintEvent(_event);
}

void WalletTreeView::resizeEvent(QResizeEvent* _event) {
  QTreeView::resizeEvent(_event);
  if (!m_autoUpdateRowCount) {
    return;
  }

  const int viewItemHeight = Settings::instance().getCurrentStyle().viewItemHeight();
  if (model() != nullptr && (_event->size().height() < model()->rowCount() * viewItemHeight ||
    _event->size().height() >= model()->rowCount() * viewItemHeight + viewItemHeight)) {
    updateRowCount();
  }
}

void WalletTreeView::itemClicked(const QModelIndex& _index) {
  if (_index.isValid()) {
    if (m_linkLikeColumnSet.contains(_index.column())) {
      Q_EMIT doubleClicked(_index);
    } else if (m_copyableColumnSet.contains(_index.column())) {
      Q_EMIT copyableItemClickedSignal(_index);
    }
  }
}

int WalletTreeView::calculateVisibleRowCount() const {
  if (model() == nullptr) {
    return 0;
  }

  return viewport()->height() / Settings::instance().getCurrentStyle().viewItemHeight();
}

}

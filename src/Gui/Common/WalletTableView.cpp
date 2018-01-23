/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QHeaderView>
#include <QMouseEvent>
#include <QScrollBar>
#include <QTimer>

#include "WalletTableView.h"
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

  "WalletGui--WalletTableView {"
    "border: none;"
    "font-size: %fontSizeNormal%;"
    "background-color: #ffffff;"
    "border-bottom: 1px solid transparent;"
  "}"

  "WalletGui--WalletTableView[showBottomBorder=\"true\"] {"
    "border: none;"
    "border-bottom: 1px solid %borderColor%;"
  "}"

  "WalletGui--WalletTableView > QHeaderView {"
    "background-color: #ffffff;"
    "border: none;"
    "border-bottom: 1px solid %borderColor%;"
  "}"

  "WalletGui--WalletTableView > QHeaderView::section:horizontal {"
    "height: 20px;"
    "font-size: %fontSizeSmall%;"
    "color: %fontColorGray%;"
    "background-color: #ffffff;"
    "border: none;"
    "border-left: 23px solid transparent;"
    "border-right: 20px solid transparent;"
  "}"

  "WalletGui--WalletTableView::item {"
    "background: %backgroundColorAlternate%;"
    "border: none;"
    "border-left: 20px solid transparent;"
    "border-right: 20px solid transparent;"
  "}"

  "WalletGui--WalletTableView::item:alternate {"
    "background: #ffffff;"
  "}"

  "WalletGui--WalletTableView::item:selected {"
    "color: #ffffff;"
    "background: %selectionColor%;"
  "}"

  "WalletGui--WalletTableView[hoverIsVisible=\"true\"]::item:hover {"
    "background: #e9eaec;"
    "alternate-background-color: #e9eaec;"
  "}";

}

WalletTableView::WalletTableView(QWidget* _parent) : QTableView(_parent), m_linkLikeColumnDelegate(nullptr), m_autoUpdateRowCount(true) {
  setMouseTracking(true);
  setAlternatingRowColors(true);
  setTextElideMode(Qt::ElideMiddle);
  setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_VIEW_STYLE_SHEET_TEMPLATE));
  connect(this, &WalletTableView::clicked, this, &WalletTableView::itemClicked);
  setToolTipDuration(1000);
  verticalHeader()->setDefaultSectionSize(Settings::instance().getCurrentStyle().viewItemHeight());
}

WalletTableView::~WalletTableView() {
}

void WalletTableView::setLinkLikeColumnSet(const QSet<int>& _linkLikeColumnSet) {
  m_linkLikeColumnSet = _linkLikeColumnSet;
  if (!m_linkLikeColumnSet.isEmpty() && m_linkLikeColumnDelegate == nullptr) {
    m_linkLikeColumnDelegate = new LinkLikeColumnDelegate(this);
    for (int _column : m_linkLikeColumnSet) {
      setItemDelegateForColumn(_column, m_linkLikeColumnDelegate);
    }
  }
}

void WalletTableView::setCopyableColumnSet(const QSet<int>& _copyableColumnSet) {
  m_copyableColumnSet = _copyableColumnSet;
}

void WalletTableView::setHoverIsVisible(bool _hoverIsVisible) {
  setProperty("hoverIsVisible", _hoverIsVisible);
  style()->unpolish(this);
  style()->polish(this);
}

void WalletTableView::setModel(QAbstractItemModel* _model) {
  QTableView::setModel(_model);
  updateRowCount();
}

void WalletTableView::updateRowCount() {
  if (verticalScrollBarPolicy() == Qt::ScrollBarAlwaysOff) {
    WalletWindowedItemModel* windowedModel = qobject_cast<WalletWindowedItemModel*>(model());
    if (windowedModel != nullptr) {
      int rows = calculateVisibleRowCount();
      windowedModel->setWindowSize(rows);
    }
  }
}

void WalletTableView::setAutoUpdateRowCount(bool _autoUpdateRowCount) {
  m_autoUpdateRowCount = _autoUpdateRowCount;
}

void WalletTableView::mouseMoveEvent(QMouseEvent* _event) {
  QPoint pos = _event->pos();
  QModelIndex index = indexAt(pos);
  if (index.isValid() && (m_linkLikeColumnSet.contains(index.column()) || m_copyableColumnSet.contains(index.column()))) {
    setCursor(Qt::PointingHandCursor);
  } else {
    setCursor(Qt::ArrowCursor);
  }

  QTableView::mouseMoveEvent(_event);
}

void WalletTableView::paintEvent(QPaintEvent* _event) {
  if (!property("showBottomBorder").toBool() && verticalScrollBar()->isVisible()) {
    setProperty("showBottomBorder", true);
    style()->unpolish(this);
    style()->polish(this);
  } else if (property("showBottomBorder").toBool() && !verticalScrollBar()->isVisible()) {
    setProperty("showBottomBorder", false);
    style()->unpolish(this);
    style()->polish(this);
  }

  QTableView::paintEvent(_event);
}

void WalletTableView::resizeEvent(QResizeEvent* _event) {
  QTableView::resizeEvent(_event);
  if (!m_autoUpdateRowCount) {
    return;
  }

  const int viewItemHeight = Settings::instance().getCurrentStyle().viewItemHeight();
  if (model() != nullptr && (_event->size().height() < model()->rowCount() * viewItemHeight ||
    _event->size().height() >= model()->rowCount() * viewItemHeight + viewItemHeight)) {
    updateRowCount();
  }
}

void WalletTableView::itemClicked(const QModelIndex& _index) {
  if (_index.isValid()) {
    if (m_linkLikeColumnSet.contains(_index.column())) {
      Q_EMIT doubleClicked(_index);
    } else if (m_copyableColumnSet.contains(_index.column())) {
      Q_EMIT copyableItemClickedSignal(_index);
    }
  }
}

int WalletTableView::calculateVisibleRowCount() const {
  if (model() == nullptr) {
    return 0;
  }

  return viewport()->height() / Settings::instance().getCurrentStyle().viewItemHeight();
}

}

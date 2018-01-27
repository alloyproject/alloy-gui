/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "WalletWindowedItemModel.h"

namespace WalletGui {

WalletWindowedItemModel::WalletWindowedItemModel(int _filterRole, QObject* _parent) : QSortFilterProxyModel(_parent),
  m_filterRole(_filterRole), m_windowSize(0), m_windowBegin(0) {
}

WalletWindowedItemModel::~WalletWindowedItemModel() {
}

quint32 WalletWindowedItemModel::getWindowSize() const {
  return m_windowSize;
}

quint32 WalletWindowedItemModel::getWindowBegin() const {
  return m_windowBegin;
}

void WalletWindowedItemModel::setWindowSize(quint32 _windowSize) {
  if (m_windowSize != _windowSize) {
    m_windowSize = _windowSize;
    invalidateFilter();
  }
}

void WalletWindowedItemModel::setWindowBegin(quint32 _windowBegin) {
  if (m_windowBegin != _windowBegin) {
    m_windowBegin = _windowBegin;
    invalidateFilter();
  }
}

bool WalletWindowedItemModel::filterAcceptsRow(int _sourceRow, const QModelIndex &_sourceParent) const {
  if (getWindowSize() == 0) {
    return false;
  }

  if (m_filterRole == -1) {
    return _sourceRow >= m_windowBegin && _sourceRow < m_windowBegin + m_windowSize;
  }

  QModelIndex sourceIndex = sourceModel()->index(_sourceRow, 0, _sourceParent);
  return sourceIndex.data(m_filterRole).toUInt() >= m_windowBegin &&
    sourceIndex.data(m_filterRole).toUInt() < m_windowBegin + m_windowSize;
}

}

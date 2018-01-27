/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "FilteredByPeriodTransactionsModel.h"
#include "Models/TransactionsModel.h"

namespace WalletGui {

FilteredByPeriodTransactionsModel::FilteredByPeriodTransactionsModel(QObject* _parent) : QSortFilterProxyModel(_parent),
  m_begin(), m_end() {
  setDynamicSortFilter(true);
}

FilteredByPeriodTransactionsModel::~FilteredByPeriodTransactionsModel() {
}

void FilteredByPeriodTransactionsModel::setFilter(const QDateTime& _begin, const QDateTime& _end) {
  if (m_begin != _begin || m_end != _end) {
    m_begin = _begin;
    m_end = _end;
    invalidateFilter();
  }
}

bool FilteredByPeriodTransactionsModel::filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const {
  QModelIndex index = sourceModel()->index(_sourceRow, 0, _sourceParent);
  QDateTime transactionTime = index.data(TransactionsModel::ROLE_TIME).toDateTime();
  if (transactionTime.isNull()) {
    transactionTime = QDateTime::currentDateTime();
  }

  if (!m_begin.isNull() && transactionTime < m_begin) {
    return false;
  }

  if (!m_end.isNull() && transactionTime > m_end) {
    return false;
  }

  return true;
}

}

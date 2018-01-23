/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QDateTime>

#include "FilteredByAgeTransactionsModel.h"
#include "Models/TransactionsModel.h"

namespace WalletGui {

FilteredByAgeTransactionsModel::FilteredByAgeTransactionsModel(QObject* _parent) : QSortFilterProxyModel (_parent),
  m_filter(FILTER_ALL) {
  setDynamicSortFilter(true);
}

FilteredByAgeTransactionsModel::~FilteredByAgeTransactionsModel() {
}

void FilteredByAgeTransactionsModel::setFilter(FilteredByAgeTransactionsModel::Filter _filter) {
  if (m_filter != _filter) {
    m_filter = _filter;
    invalidateFilter();
  }
}

bool FilteredByAgeTransactionsModel::filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const {
  if (m_filter == FILTER_CUSTOM || m_filter == FILTER_ALL) {
    return true;
  }

  QModelIndex index = sourceModel()->index(_sourceRow, 0, _sourceParent);
  QDateTime transactionTime = index.data(TransactionsModel::ROLE_TIME).toDateTime();
  if (transactionTime.isNull()) {
    transactionTime = QDateTime::currentDateTime();
  }

  QDateTime currentDateTime(QDateTime::currentDateTime());
  switch(m_filter) {
  case FILTER_LAST_HOUR:
    return (transactionTime.secsTo(currentDateTime) <= 3600);
    break;
  case FILTER_LAST_DAY:
    return (currentDateTime.addDays(-1) <= transactionTime);
    break;
  case FILTER_LAST_WEEK:
    return (currentDateTime.addDays(-7) <= transactionTime);
    break;
  case FILTER_LAST_MONTH:
    return (currentDateTime.addMonths(-1) <= transactionTime);
    break;
  case FILTER_LAST_YEAR:
    return (currentDateTime.addYears(-1) <= transactionTime);
    break;
  default:
    return false;
  }

  return false;
}

}

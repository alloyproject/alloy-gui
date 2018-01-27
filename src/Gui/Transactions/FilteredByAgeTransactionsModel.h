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

#include <QSortFilterProxyModel>

namespace WalletGui {

class FilteredByAgeTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(FilteredByAgeTransactionsModel)

public:
  enum Filter {
    FILTER_ALL = 0, FILTER_LAST_HOUR, FILTER_LAST_DAY, FILTER_LAST_WEEK, FILTER_LAST_MONTH, FILTER_LAST_YEAR,
    FILTER_CUSTOM
  };

  explicit FilteredByAgeTransactionsModel(QObject* _parent);
  ~FilteredByAgeTransactionsModel();

  void setFilter(Filter _filter);

protected:
  virtual bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;

private:
  Filter m_filter;
};

}

/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QDateTime>
#include <QSortFilterProxyModel>

namespace WalletGui {

class FilteredByPeriodTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(FilteredByPeriodTransactionsModel)

public:
  explicit FilteredByPeriodTransactionsModel(QObject* _parent);
  ~FilteredByPeriodTransactionsModel();

  void setFilter(const QDateTime& _begin, const QDateTime& _end);

protected:
  virtual bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;

private:
  QDateTime m_begin;
  QDateTime m_end;
};

}

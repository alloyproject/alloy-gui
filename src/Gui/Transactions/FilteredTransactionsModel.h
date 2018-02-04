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
#include <QSortFilterProxyModel>

namespace WalletGui {

class FilteredTransactionsModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(FilteredTransactionsModel)

public:
  explicit FilteredTransactionsModel(QObject* _parent);
  ~FilteredTransactionsModel();

  QVariant headerData(int _section, Qt::Orientation _orientation, int _role = Qt::DisplayRole) const override;

protected:
  bool filterAcceptsColumn(int _source_column, const QModelIndex& _sourceParent) const override;
};


}

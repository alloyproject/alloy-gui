/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class TransactionsBlockModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionsBlockModel)

public:
  TransactionsBlockModel(QAbstractItemModel* _blockChainModel, QObject* _parent);
  ~TransactionsBlockModel();

  QVariant data(const QModelIndex &_index, int _role = Qt::DisplayRole) const override;
  void setBlockIndex(const QModelIndex &_index);

protected:
  bool filterAcceptsRow(int _sourceRow, const QModelIndex &_sourceParent) const override;
  bool filterAcceptsColumn(int _sourceColumn, const QModelIndex &_sourceParent) const override;
  bool lessThan(const QModelIndex &_left, const QModelIndex &_right) const override;

private:
  QPersistentModelIndex m_blockIndex;
};

}

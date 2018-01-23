/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "FilteredByHashTransactionsModel.h"
#include "Models/TransactionsModel.h"

namespace WalletGui {

FilteredByHashTransactionsModel::FilteredByHashTransactionsModel(QObject* _parent) : QSortFilterProxyModel(_parent),
  m_hash() {
  setDynamicSortFilter(true);
  setFilterRole(TransactionsModel::ROLE_HASH);
}

FilteredByHashTransactionsModel::~FilteredByHashTransactionsModel() {
}

void FilteredByHashTransactionsModel::setFilter(const QString& _hash) {
  if (m_hash.compare(_hash, Qt::CaseInsensitive)) {
    if (_hash.isEmpty()) {
      beginResetModel();
      m_hash = _hash;
      endResetModel();
    } else {
      m_hash = _hash;
      invalidateFilter();
    }
  }
}

bool FilteredByHashTransactionsModel::filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const {
  if(m_hash.isEmpty()) {
    return true;
  }

  QModelIndex index = sourceModel()->index(_sourceRow, 0, _sourceParent);
  QString transactionHash = index.data(TransactionsModel::ROLE_HASH).toByteArray().toHex();
  return transactionHash.startsWith(m_hash, Qt::CaseInsensitive);
}

}

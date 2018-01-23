/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "FilteredByAddressTransactionsModel.h"
#include "Models/TransactionsModel.h"

Q_DECLARE_METATYPE(QList<CryptoNote::WalletTransfer>)

namespace WalletGui {

FilteredByAddressTransactionsModel::FilteredByAddressTransactionsModel(QObject* _parent) : QSortFilterProxyModel(_parent),
  m_address() {
  setDynamicSortFilter(true);
}

FilteredByAddressTransactionsModel::~FilteredByAddressTransactionsModel() {
}

void FilteredByAddressTransactionsModel::setFilter(const QString& _address) {
  if (m_address.compare(_address, Qt::CaseInsensitive)) {
    if (_address.isEmpty()) {
      beginResetModel();
      m_address = _address;
      endResetModel();
    } else {
      m_address = _address;
      invalidateFilter();
    }
  }
}

bool FilteredByAddressTransactionsModel::filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const {
  if(m_address.isEmpty()) {
    return true;
  }

  QModelIndex index = sourceModel()->index(_sourceRow, 0, _sourceParent);
  QList<CryptoNote::WalletTransfer> transfers = index.data(TransactionsModel::ROLE_TRANSFERS).value<QList<CryptoNote::WalletTransfer>>();
  if (transfers.isEmpty()) {
    return false;
  }

  for (const CryptoNote::WalletTransfer& transfer : transfers) {
    if (QString::fromStdString(transfer.address).startsWith(m_address, Qt::CaseInsensitive)) {
      return true;
    }
  }

  return false;
}

}

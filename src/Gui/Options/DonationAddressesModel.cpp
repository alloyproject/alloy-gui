/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "DonationAddressesModel.h"
#include "Models/AddressBookModel.h"

namespace WalletGui {

DonationAddressesModel::DonationAddressesModel(QAbstractItemModel* _sourceModel, QObject* _parent) : QSortFilterProxyModel(_parent) {
  setSourceModel(_sourceModel);
  setDynamicSortFilter(true);
}

DonationAddressesModel::~DonationAddressesModel() {
}

QVariant DonationAddressesModel::data(const QModelIndex& _index, int _role) const {
  if (_role == Qt::DisplayRole) {
    return QString("%1 (%2)").arg(_index.data(AddressBookModel::ROLE_LABEL).toString()).
      arg(_index.data(AddressBookModel::ROLE_ADDRESS).toString());
  }

  return QSortFilterProxyModel::data(_index, _role);
}

bool DonationAddressesModel::filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const {
  QModelIndex sourceIndex = sourceModel()->index(_sourceRow, 0, _sourceParent);
  return sourceIndex.data(AddressBookModel::ROLE_IS_DONATION_ADDRESS).toBool();
}

bool DonationAddressesModel::filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const {
  return _sourceColumn == AddressBookModel::COLUMN_LABEL;
}

}

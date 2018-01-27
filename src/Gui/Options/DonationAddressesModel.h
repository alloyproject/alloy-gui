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

class DonationAddressesModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(DonationAddressesModel)

public:
  DonationAddressesModel(QAbstractItemModel* _sourceModel, QObject* _parent);
  ~DonationAddressesModel();

  virtual QVariant data(const QModelIndex& _index, int _role) const override;

protected:
  virtual bool filterAcceptsRow(int _sourceRow, const QModelIndex& _sourceParent) const override;
  virtual bool filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const override;
};

}

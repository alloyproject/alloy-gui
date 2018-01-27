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

#include <QAbstractItemModel>
#include <QJsonObject>

#include "IAddressBookManager.h"

namespace WalletGui {

class IAddressBookManager;

class AddressBookModel : public QAbstractItemModel, public IAddressBookManagerObserver {
  Q_OBJECT
  Q_DISABLE_COPY(AddressBookModel)
  Q_ENUMS(Columns)
  Q_ENUMS(Roles)

public:
  enum Columns {
    COLUMN_LABEL = 0, COLUMN_ADDRESS, COLUMN_DONATION, COLUMN_ACTION
  };

  enum Roles {
    ROLE_LABEL = Qt::UserRole, ROLE_ADDRESS, ROLE_IS_DONATION_ADDRESS, ROLE_COLUMN, ROLE_ROW
  };

  explicit AddressBookModel(IAddressBookManager* _addressBookManager, QObject* _parent);
  ~AddressBookModel();

  int columnCount(const QModelIndex& _parent = QModelIndex()) const override;
  QVariant data(const QModelIndex& _index, int _role = Qt::DisplayRole) const override;
  Qt::ItemFlags flags(const QModelIndex& _index) const override;
  QVariant headerData(int _section, Qt::Orientation _orientation, int _role = Qt::DisplayRole) const override;
  QModelIndex index(int _row, int _column, const QModelIndex& _parent = QModelIndex()) const override;
  QModelIndex	parent(const QModelIndex& _index) const override;
  int rowCount(const QModelIndex& _parent = QModelIndex()) const override;

  // IAddressBookManagerObserver
  Q_SLOT virtual void addressBookOpened() override;
  Q_SLOT virtual void addressBookClosed() override;
  Q_SLOT virtual void addressAdded(quintptr _addressIndex) override;
  Q_SLOT virtual void addressEdited(quintptr _addressIndex) override;
  Q_SLOT virtual void addressRemoved(quintptr _addressIndex) override;

private:
  IAddressBookManager* m_addressBookManager;
  const int m_columnCount;
  quintptr m_rowCount;

  QVariant getDisplayRole(const QModelIndex& _index) const;
  QVariant getDecorationRole(const QModelIndex& _index) const;
  QVariant getUserRole(const QModelIndex& _index, int _role) const;
};

}

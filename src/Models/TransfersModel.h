/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QAbstractItemModel>

namespace WalletGui {

class ICryptoNoteAdapter;

class TransfersModel : public QAbstractItemModel {
  Q_OBJECT
  Q_DISABLE_COPY(TransfersModel)
  Q_ENUMS(Columns)

public:
  enum Columns {
    COLUMN_ADDRESS = 0, COLUMN_AMOUNT
  };

  enum Roles {
    ROLE_ADDRESS = Qt::UserRole, ROLE_AMOUNT, ROLE_TYPE, ROLE_ICON, ROLE_IS_DONATION_TRANSFER
  };

  TransfersModel(ICryptoNoteAdapter* _cryptoNoteAdapter, const QModelIndex& _transactionIndex, QObject* _parent);
  ~TransfersModel();

  // QAbstractItemModel
  Qt::ItemFlags flags(const QModelIndex& _index) const override;
  int columnCount(const QModelIndex& _parent = QModelIndex()) const override;
  int rowCount(const QModelIndex& _parent = QModelIndex()) const override;
  QVariant headerData(int _section, Qt::Orientation _orientation, int _role = Qt::DisplayRole) const override;
  QVariant data(const QModelIndex& _index, int _role = Qt::DisplayRole) const override;
  QModelIndex index(int _row, int _column, const QModelIndex& _parent = QModelIndex()) const override;
  QModelIndex parent(const QModelIndex& _index) const override;

private:
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  QPersistentModelIndex m_transactionIndex;
  const int m_columnCount;

  QVariant getDisplayRole(const QModelIndex& _index) const;
  QVariant getDecorationRole(const QModelIndex& _index) const;
  QVariant getToolTipRole(const QModelIndex& _index) const;
  QVariant getUserRole(const QModelIndex& _index, int _role) const;
};

}

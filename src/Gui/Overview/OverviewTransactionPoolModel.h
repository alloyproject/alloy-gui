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

class ICryptoNoteAdapter;

class OverviewTransactionPoolModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(OverviewTransactionPoolModel)

public:
  explicit OverviewTransactionPoolModel(ICryptoNoteAdapter* _cryptoNoteAdapter, QObject* _parent);
  ~OverviewTransactionPoolModel();

  virtual QVariant data(const QModelIndex& _index, int _role) const override;
  virtual int rowCount(const QModelIndex& _parent) const override;

protected:
  virtual bool filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const override;

private:
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
};

}

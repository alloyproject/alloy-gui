/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QAbstractProxyModel>

namespace WalletGui {

class IAddressBookManager;
class ICryptoNoteAdapter;

class DrawableTransfersModel : public QAbstractProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(DrawableTransfersModel)

public:
  DrawableTransfersModel(ICryptoNoteAdapter* _cryptoNoteAdapter, IAddressBookManager* _addressBookManager,
    const QString& _walletAddress, QObject* _parent);
  ~DrawableTransfersModel();

  void showDetails(bool _show);

  // QAbstractItemModel
  virtual Qt::ItemFlags flags(const QModelIndex& _index) const override;
  virtual int columnCount(const QModelIndex& _parent = QModelIndex()) const override;
  virtual int rowCount(const QModelIndex& _parent = QModelIndex()) const override;
  virtual QVariant data(const QModelIndex& _index, int _role = Qt::DisplayRole) const override;
  virtual QModelIndex index(int _row, int _column, const QModelIndex& _parent = QModelIndex()) const override;
  virtual QModelIndex parent(const QModelIndex& _index) const override;

  // QAbstractProxyModel
  virtual QModelIndex mapFromSource(const QModelIndex& _sourceIndex) const override;
  virtual QModelIndex mapToSource(const QModelIndex& _proxyIndex) const override;
  virtual void setSourceModel(QAbstractItemModel* _sourceModel) override;

private:
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  IAddressBookManager* m_addressBookManager;
  const QString m_walletAddress;
  bool m_showDetails;

  QVariant getDisplayRole(const QModelIndex& _index) const;
  QVariant getDecorationRole(const QModelIndex& _index) const;
  QVariant getTextColorRole(const QModelIndex& _index) const;
  QVariant getAggregatedDisplayRole(const QModelIndex& _index) const;
  QVariant getAggregateTextAlignmentRole(const QModelIndex& _index) const;
  QVariant getAggregateTextColorRole(const QModelIndex& _index) const;
  qint64 getAmountSum() const;
};

}

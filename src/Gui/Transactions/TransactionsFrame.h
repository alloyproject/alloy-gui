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

#include <QFrame>

#include "Application/IWalletUiItem.h"

class QPropertyAnimation;

namespace Ui {
class TransactionsFrame;
}

namespace WalletGui {

class TransactionsFrame : public QFrame, public IWalletUiItem {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionsFrame)

public:
  explicit TransactionsFrame(QWidget* _parent);
  ~TransactionsFrame();

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;
  virtual void setAddressBookManager(IAddressBookManager* _addressBookManager) override;
  virtual void setMainWindow(QWidget* _mainWindow) override;
  virtual void setWalletStateModel(QAbstractItemModel* _model) override;
  virtual void setTransactionsModel(QAbstractItemModel* _model) override;
  virtual void setSortedTransactionsModel(QAbstractItemModel* _model) override;

private:
  QScopedPointer<Ui::TransactionsFrame> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  IAddressBookManager* m_addressBookManager;
  QWidget* m_mainWindow;
  QAbstractItemModel* m_transactionsModel;
  QAbstractItemModel* m_walletStateModel;
  QAbstractItemModel* m_filterByAgeModel;
  QAbstractItemModel* m_filterByPeriodModel;
  QAbstractItemModel* m_filterByHashModel;
  QAbstractItemModel* m_filterByAddressModel;
  QPropertyAnimation* m_animation;

  void rowsInserted(const QModelIndex& _parent, int _first, int _last);
  void resetFilter();

  Q_SLOT void exportToCsv();
  Q_SLOT void transactionDoubleClicked(const QModelIndex& _index);
  Q_SLOT void transactionClicked(const QModelIndex& _index);
  Q_SLOT void filterChanged(int _index);
  Q_SLOT void filterPeriodChanged(const QDateTime& _dateTime);
  Q_SLOT void filterHashChanged(const QString& _hash);
  Q_SLOT void filterAddressChanged(const QString& _hash);
  Q_SLOT void showFilter(bool _on);
  Q_SLOT void resetClicked();
};

}

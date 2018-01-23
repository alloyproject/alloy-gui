/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QStatusBar>

#include "ICryptoNoteAdapter.h"
#include "INodeAdapter.h"
#include "IWalletAdapter.h"
#include "Application/IWalletUiItem.h"

class QLabel;

namespace WalletGui {

class WalletStatusBar : public QStatusBar, public IWalletUiItem, public IWalletAdapterObserver,
  public ICryptoNoteAdapterObserver {
  Q_OBJECT
  Q_DISABLE_COPY(WalletStatusBar)

public:
  explicit WalletStatusBar(QWidget* _parent);
  ~WalletStatusBar();

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;
  virtual void setNodeStateModel(QAbstractItemModel* _model) override;
  virtual void updateStyle() override;

  // IWalletAdapterObserver
  Q_SLOT virtual void walletOpened() override;
  Q_SLOT virtual void walletOpenError(int _initStatus) override;
  Q_SLOT virtual void walletClosed() override;
  Q_SLOT virtual void passwordChanged() override;
  Q_SLOT virtual void synchronizationProgressUpdated(quint32 _current, quint32 _total) override;
  Q_SLOT virtual void synchronizationCompleted() override;
  Q_SLOT virtual void balanceUpdated(quint64 _actualBalance, quint64 _pendingBalance) override;
  Q_SLOT virtual void externalTransactionCreated(quintptr _transactionId, const FullTransactionInfo& _transaction) override;
  Q_SLOT virtual void transactionUpdated(quintptr _transactionId, const FullTransactionInfo& _transaction) override;

  // ICryptoNoteAdapterObserver
  Q_SLOT virtual void cryptoNoteAdapterInitCompleted(int _status) override;
  Q_SLOT virtual void cryptoNoteAdapterDeinitCompleted() override;

protected:
  virtual void timerEvent(QTimerEvent* _event) override;

private:
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  QAbstractItemModel* m_nodeStateModel;
  QLabel* m_syncStatusLabel;
  QLabel* m_syncStatusIconLabel;
  QLabel* m_encryptionStatusIconLabel;
  QLabel* m_peerCountLabel;
  QMovie* m_syncMovie;
  bool m_walletIsSynchronized;
  int m_checkSyncStateTimerId;

  void nodeStateChanged(const QModelIndex& _topLeft, const QModelIndex& _bottomRight, const QVector<int>& _roles);
  void updateStatusDescription();
  void updateSyncState(bool _isSynchronized);
  void updateEncryptedState(bool _isEncrypted);
};

}

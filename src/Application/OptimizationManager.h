/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QObject>

#include "IOptimizationManager.h"
#include "ICryptoNoteAdapter.h"
#include "IWalletAdapter.h"

namespace WalletGui {

class OptimizationManager : public QObject, public IOptimizationManager, public IWalletAdapterObserver,
  public ICryptoNoteAdapterObserver {
  Q_OBJECT
  Q_DISABLE_COPY(OptimizationManager)

public:
  OptimizationManager(ICryptoNoteAdapter* _cryptoNoteAdapter, QObject *_parent);
  ~OptimizationManager();

  // IOptimizationManager
  virtual bool isOptimizationEnabled() const override;
  virtual bool isFusionTransactionsVisible() const override;
  virtual bool isOptimizationTimeSetManually() const override;
  virtual quint64 getOptimizationThreshold() const override;
  virtual quint64 getOptimizationMixin() const override;
  virtual quint64 getOptimizationInterval() const override;
  virtual QTime getOptimizationStartTime() const override;
  virtual QTime getOptimizationStopTime() const override;

  virtual void setOptimizationEnabled(bool _on) override;
  virtual void setFusionTransactionsVisible(bool _isVisible) override;
  virtual void setOptimizationTimeSetManually(bool _on) override;
  virtual void setOptimizationThreshold(quint64 _threshold) override;
  virtual void setOptimizationMixin(quint64 _mixin) override;
  virtual void setOptimizationInterval(quint64 _interval) override;
  virtual void setOptimizationStartTime(const QTime& _startTime) override;
  virtual void setOptimizationStopTime(const QTime& _stopTime) override;

  virtual void addObserver(IOptimizationManagerObserver* _observer) override;
  virtual void removeObserver(IOptimizationManagerObserver* _observer) override;

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
  int m_checkTimerId;
  int m_optimizationTimerId;
  quint64 m_currentOptimizationInterval;
  bool m_isSynchronized;

  void checkOptimization();
  void optimize();
  void ensureStarted();
  void ensureStopped();

Q_SIGNALS:
  void fusionTransactionsVisibilityChangedSignal(bool _isVisible);
};

}

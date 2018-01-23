/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QFrame>

#include "Application/IWalletUiItem.h"
#include "ICryptoNoteAdapter.h"
#include "IMiningManager.h"
#include "INodeAdapter.h"

class QDataWidgetMapper;
class QSortFilterProxyModel;

namespace Ui {
  class OverviewHeaderFrame;
}

namespace WalletGui {

class OverviewHeaderGlassFrame;

class OverviewHeaderFrame : public QFrame, public IWalletUiItem, public IMinerManagerObserver,
  public ICryptoNoteAdapterObserver {
  Q_OBJECT
  Q_DISABLE_COPY(OverviewHeaderFrame)

public:
  explicit OverviewHeaderFrame(QWidget* _parent);
  ~OverviewHeaderFrame();

  // QObject
  virtual bool eventFilter(QObject* _object, QEvent* _event) override;

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;
  virtual void setMiningManager(IMiningManager *_miningManager) override;
  virtual void setMainWindow(QWidget *_mainWindow) override;
  virtual void setNodeStateModel(QAbstractItemModel* _model) override;
  virtual void setWalletStateModel(QAbstractItemModel* _model) override;
  virtual void setTransactionPoolModel(QAbstractItemModel *_model) override;
  virtual void setMinerModel(QAbstractItemModel *_model) override;

  // ICryptoNoteAdapterObserver
  Q_SLOT virtual void cryptoNoteAdapterInitCompleted(int _status) override;
  Q_SLOT virtual void cryptoNoteAdapterDeinitCompleted() override;

  // IMinerManagerObserver
  Q_SLOT virtual void minersLoaded() override;
  Q_SLOT virtual void minersUnloaded() override;
  Q_SLOT virtual void miningStarted() override;
  Q_SLOT virtual void miningStopped() override;
  Q_SLOT virtual void activeMinerChanged(quintptr _minerIndex) override;
  Q_SLOT virtual void schedulePolicyChanged(int _schedulePolicy) override;
  Q_SLOT virtual void cpuCoreCountChanged(quint32 _cpuCoreCount) override;
  Q_SLOT virtual void minerAdded(quintptr _minerIndex) override;
  Q_SLOT virtual void minerRemoved(quintptr _minerIndex) override;
  Q_SLOT virtual void stateChanged(quintptr _minerIndex, int _newState) override;
  Q_SLOT virtual void hashRateChanged(quintptr _minerIndex, quint32 _hashRate) override;
  Q_SLOT virtual void alternateHashRateChanged(quintptr _minerIndex, quint32 _hashRate) override;
  Q_SLOT virtual void difficultyChanged(quintptr _minerIndex, quint32 _difficulty) override;
  Q_SLOT virtual void goodShareCountChanged(quintptr _minerIndex, quint32 _goodShareCount) override;
  Q_SLOT virtual void goodAlternateShareCountChanged(quintptr _minerIndex, quint32 _goodShareCount) override;
  Q_SLOT virtual void badShareCountChanged(quintptr _minerIndex, quint32 _badShareCount) override;
  Q_SLOT virtual void connectionErrorCountChanged(quintptr _minerIndex, quint32 _connectionErrorCount) override;
  Q_SLOT virtual void lastConnectionErrorTimeChanged(quintptr _minerIndex, const QDateTime& _lastConnectionErrorTime) override;

private:
  QScopedPointer<Ui::OverviewHeaderFrame> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  IMiningManager* m_miningManager;
  QWidget* m_mainWindow;
  QAbstractItemModel* m_nodeStateModel;
  QAbstractItemModel* m_walletStateModel;
  QAbstractItemModel* m_transactionPoolModel;
  QSortFilterProxyModel* m_overViewTransactionPoolModel;
  QDataWidgetMapper* m_miningMapper;
  QMovie* m_syncMovie;
  OverviewHeaderGlassFrame* m_balancesGlassFrame;
  OverviewHeaderGlassFrame* m_miningStatsGlassFrame;
  OverviewHeaderGlassFrame* m_transactionPoolGlassFrame;

  void copyAvailableBalance();
  void copyLockedBalance();
  void copyTotalBalance();
  void transactionPoolChanged();
  void walletStateModelDataChanged(const QModelIndex& _topLeft, const QModelIndex& _bottomRight, const QVector<int>& _roles);

  Q_SLOT void poolTransactionClicked(const QModelIndex& _index);
  Q_SLOT void startMiningClicked(bool _on);
};

}

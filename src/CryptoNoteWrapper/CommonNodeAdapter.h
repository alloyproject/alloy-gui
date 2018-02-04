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

#include <QObject>
#include <QMap>
#include <QMetaObject>

#include "INodeAdapter.h"

namespace WalletGui {

class CommonNodeAdapter : public QObject, public INodeAdapter, public INodeAdapterObserver {
  Q_OBJECT
  Q_DISABLE_COPY(CommonNodeAdapter)

public:
  explicit CommonNodeAdapter(QObject* _parent);
  virtual ~CommonNodeAdapter();

  // INodeAdapter
  virtual void init() override;
  virtual void deinit() override;
  virtual NodeType getNodeType() const override;
  virtual quintptr getPeerCount() const override;
  virtual quint32 getKnownBlockCount() const override;
  virtual quint32 getLocalBlockCount() const override;
  virtual CryptoNote::BlockHeaderInfo getLastLocalBlockInfo() const override;
  virtual void addObserver(INodeAdapterObserver* _observer) override;
  virtual void removeObserver(INodeAdapterObserver* _observer) override;
  virtual IBlockChainExplorerAdapter* getBlockChainExplorerAdapter() override;
  virtual IWalletAdapter* getWalletAdapter() override;

  // INodeAdapterObserver
  Q_SLOT virtual void initCompleted(int _status) override;
  Q_SLOT virtual void deinitCompleted() override;
  Q_SLOT virtual void peerCountUpdated(quintptr _count) override;
  Q_SLOT virtual void localBlockchainUpdated(CryptoNote::BlockHeaderInfo _lastLocalBlockinfo) override;
  Q_SLOT virtual void lastKnownBlockHeightUpdated(quint32 _height) override;
  Q_SLOT virtual void connectionStatusUpdated(bool _connected) override;

protected:
  virtual INodeAdapter* createWorker() const = 0;

private:
  QThread* m_workerThread;
  INodeAdapter* m_worker;
  IBlockChainExplorerAdapter* m_blockChainExplorerAdapter;
  IWalletAdapter* m_walletAdapter;
  QMap<INodeAdapterObserver*, QList<QMetaObject::Connection>> m_observerConnections;

Q_SIGNALS:
  void initCompletedSignal(int _status);
  void deinitCompletedSignal();
  void peerCountUpdatedSignal(quintptr _count);
  void localBlockchainUpdatedSignal(CryptoNote::BlockHeaderInfo _lastLocalBlockinfo);
  void lastKnownBlockHeightUpdatedSignal(quint32 _height);
  void connectionStatusUpdatedSignal(bool _connected);
};

}

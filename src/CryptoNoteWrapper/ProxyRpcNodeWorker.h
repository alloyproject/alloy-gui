/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QMap>
#include <QMetaObject>

#include "INodeAdapter.h"
#include "INode.h"
#include "NodeRpcProxy/NodeRpcProxy.h"

namespace Logging {
  class ILogger;
}

namespace CryptoNote {
  class Currency;
  class NodeRpcProxy;
}

namespace WalletGui {

class ProxyRpcNodeWorker : public QObject, public INodeAdapter, public CryptoNote::INodeObserver,
  public CryptoNote::INodeRpcProxyObserver {
  Q_OBJECT
  Q_DISABLE_COPY(ProxyRpcNodeWorker)

public:
  ProxyRpcNodeWorker(const CryptoNote::Currency& _currency, Logging::ILogger& _loggerManager, Logging::ILogger& _walletLogger,
    const QString& _nodeHost, quint16 _nodePort, QObject* _parent);
  virtual ~ProxyRpcNodeWorker();

  // ICryptoNoteAdapter
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

  // CryptoNote::INodeObserver
  virtual void peerCountUpdated(size_t _count) override;
  virtual void localBlockchainUpdated(uint32_t _height) override;
  virtual void lastKnownBlockHeightUpdated(uint32_t _height) override;

  // INodeRpcProxyObserver
  virtual void connectionStatusUpdated(bool _connected) override;

private:
  const CryptoNote::Currency& m_currency;
  Logging::ILogger& m_loggerManager;
  Logging::ILogger& m_walletLogger;
  const QString m_nodeHost;
  const quint16 m_nodePort;
  QScopedPointer<CryptoNote::NodeRpcProxy> m_node;
  QMap<INodeAdapterObserver*, QList<QMetaObject::Connection>> m_observerConnections;

  Q_INVOKABLE void initImpl();
  Q_INVOKABLE void deinitImpl();

Q_SIGNALS:
  void initCompletedSignal(int _status);
  void deinitCompletedSignal();
  void peerCountUpdatedSignal(quintptr _count);
  void localBlockchainUpdatedSignal(CryptoNote::BlockHeaderInfo _lastLocalBlockInfo);
  void lastKnownBlockHeightUpdatedSignal(quint32 _height);
  void connectionStatusUpdatedSignal(bool _connected);
};

}

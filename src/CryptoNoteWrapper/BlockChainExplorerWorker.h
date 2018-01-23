/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QCache>
#include <QObject>
#include <QMap>
#include <QMetaObject>
#include <QReadWriteLock>
#include <QSemaphore>

#include "IBlockChainExplorerAdapter.h"

#include "BlockchainExplorer/BlockchainExplorer.h"

namespace Logging {
  class ILogger;
}

namespace CryptoNote {
  class IDataBase;
  class INode;
}

namespace WalletGui {

class SemaphoreLocker;

class BlockChainExplorerWorker : public QObject, public IBlockChainExplorerAdapter, public CryptoNote::IBlockchainObserver {
  Q_OBJECT
  Q_DISABLE_COPY(BlockChainExplorerWorker)

public:
  BlockChainExplorerWorker(CryptoNote::INode& _node, Logging::ILogger& _loggerManager, QObject* _parent);
  virtual ~BlockChainExplorerWorker();

  // IBlockChainExplorerAdapter
  virtual InitStatus init() override;
  virtual void deinit() override;
  virtual CryptoNote::BlockDetails* getBlock(quint32 _blockIndex) override;
  virtual PreloadBlocksStatus preloadBlocks(quint32 _minBlockIndex, quint32 _maxBlockIndex, quint32* _minLoadedBlockIndex, quint32* _maxLoadedBlockIndex) override;
  virtual PreloadBlocksStatus preloadBlocks(const QVector<quint32>& _blockIndexes, quint32* _minLoadedBlockIndex, quint32* _maxLoadedBlockIndex) override;
  virtual PreloadBlocksStatus preloadBlocks(const QDateTime& _timestampBegin, const QDateTime& _timestampEnd, quint32* _minLoadedBlockIndex, quint32* _maxLoadedBlockIndex) override;
  virtual PreloadBlocksStatus preloadBlocks(const QVector<Crypto::Hash>& _blockHashes, quint32* _minLoadedBlockIndex, quint32* _maxLoadedBlockIndex) override;
  virtual GetPoolStatus getPoolState(QVector<CryptoNote::TransactionDetails>& _transactions) override;
  virtual bool isBlockchainSynchronized() override;
  virtual void addObserver(IBlockChainExplorerAdapterObserver* _observer) override;
  virtual void removeObserver(IBlockChainExplorerAdapterObserver* _observer) override;

  // CryptoNote::IBlockchainObserver
  virtual void blockchainUpdated(const std::vector<CryptoNote::BlockDetails>& _newBlocks,
    const std::vector<CryptoNote::BlockDetails>& _orphanedBlocks) override;
  virtual void poolUpdated(const std::vector<CryptoNote::TransactionDetails>& _newTransactions,
    const std::vector<std::pair<Crypto::Hash, CryptoNote::TransactionRemoveReason>>& _removedTransactions) override;
  virtual void blockchainSynchronized(const CryptoNote::BlockDetails& _topBlock) override;

private:
  CryptoNote::BlockchainExplorer m_blockChainExplorer;
  QReadWriteLock m_cacheLock;
  QSemaphore m_preloadSemaphore;
  QCache<quint32, CryptoNote::BlockDetails> m_blocksCache;
  QMap<IBlockChainExplorerAdapterObserver*, QList<QMetaObject::Connection>> m_observerConnections;

  Q_INVOKABLE void initImpl();
  Q_INVOKABLE void preloadBlocksImpl(quint32 _minBlockIndex, quint32 _maxBlockIndex);
  Q_INVOKABLE void preloadBlocksImpl(const QVector<quint32>& _blockIndexes);
  Q_INVOKABLE void preloadBlocksImpl(const QDateTime& _timestampBegin, const QDateTime& _timestampEnd);
  Q_INVOKABLE void preloadBlocksImpl(const QVector<Crypto::Hash>& _blockHashes);
  Q_INVOKABLE void getPoolStateImpl();

Q_SIGNALS:
  void blockChainUpdatedSignal(const QVector<CryptoNote::BlockDetails>& _newBlocks,
    const QVector<CryptoNote::BlockDetails>& _orphanedBlocks);
  void poolUpdatedSignal(const QVector<CryptoNote::TransactionDetails>& _newTransactions,
    const QVector<Crypto::Hash>& _removedTransactions);
  void blockchainSynchronizedSignal(const CryptoNote::BlockDetails& _topBlock);
  void initCompletedSignal(int _status);
  void blocksPreloadCompletedSignal(int _status, quint32 _minBlockIndex, quint32 _maxBlockIndex);
  void getPoolStateCompleted(int _status, const QVector<CryptoNote::TransactionDetails>& _transactions);
};

}

Q_DECLARE_TYPEINFO(CryptoNote::BlockDetails, Q_MOVABLE_TYPE);

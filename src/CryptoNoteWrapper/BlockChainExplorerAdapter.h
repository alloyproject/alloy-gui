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

#include "IBlockChainExplorerAdapter.h"

namespace Logging {
  class ILogger;
}

namespace CryptoNote {
  class IDataBase;
  class INode;
}

namespace WalletGui {

class BlockChainExplorerAdapter : public QObject, public IBlockChainExplorerAdapter, public IBlockChainExplorerAdapterObserver {
  Q_OBJECT
  Q_DISABLE_COPY(BlockChainExplorerAdapter)

public:
  BlockChainExplorerAdapter(CryptoNote::INode& _node, Logging::ILogger& _loggerManager, QObject* _parent);
  virtual ~BlockChainExplorerAdapter();

  // IBlockChainExplorerAdapter
  virtual InitStatus init() override;
  virtual void deinit() override;
  virtual CryptoNote::BlockDetails* getBlock(quint32 _blockIndex) override;
  virtual PreloadBlocksStatus preloadBlocks(quint32 _minBlockIndex, quint32 _maxBlockIndex, quint32* _minLoadedBlockIndex = nullptr, quint32* _maxLoadedBlockIndex = nullptr) override;
  virtual PreloadBlocksStatus preloadBlocks(const QVector<quint32>& _blockIndexes, quint32* _minLoadedBlockIndex = nullptr, quint32* _maxLoadedBlockIndex = nullptr) override;
  virtual PreloadBlocksStatus preloadBlocks(const QDateTime& _timestampBegin, const QDateTime& _timestampEnd, quint32* _minLoadedBlockIndex = nullptr, quint32* _maxLoadedBlockIndex = nullptr) override;
  virtual PreloadBlocksStatus preloadBlocks(const QVector<Crypto::Hash>& _blockHashes, quint32* _minLoadedBlockIndex = nullptr, quint32* _maxLoadedBlockIndex = nullptr) override;
  virtual GetPoolStatus getPoolState(QVector<CryptoNote::TransactionDetails>& _transactions) override;
  virtual bool isBlockchainSynchronized() override;

  virtual void addObserver(IBlockChainExplorerAdapterObserver* _observer) override;
  virtual void removeObserver(IBlockChainExplorerAdapterObserver* _observer) override;

  // IBlockChainExplorerAdapterObserver
  Q_SLOT virtual void blockChainUpdated(const QVector<CryptoNote::BlockDetails>& _newBlocks,
    const QVector<CryptoNote::BlockDetails>& _orphanedBlocks) override;
  Q_SLOT virtual void poolUpdated(const QVector<CryptoNote::TransactionDetails>& _newTransactions,
    const QVector<Crypto::Hash>& _removedTransactions) override;
  Q_SLOT virtual void blockchainSynchronized(const CryptoNote::BlockDetails& _topBlock) override;

private:
  QThread* m_workerThread;
  IBlockChainExplorerAdapter* m_worker;

Q_SIGNALS:
  void blockChainUpdatedSignal(const QVector<CryptoNote::BlockDetails>& _newBlocks,
    const QVector<CryptoNote::BlockDetails>& _orphanedBlocks);
  void poolUpdatedSignal(const QVector<CryptoNote::TransactionDetails>& _newTransactions,
    const QVector<Crypto::Hash>& _removedTransactions);
  void blockchainSynchronizedSignal(const CryptoNote::BlockDetails& _topBlock);
};

}

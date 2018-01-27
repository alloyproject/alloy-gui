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

class QDateTime;

namespace Crypto {
  struct Hash;
}

namespace CryptoNote {
  struct BlockDetails;
  struct TransactionDetails;
}

namespace WalletGui {

class IBlockChainExplorerAdapterObserver {
public:
  virtual ~IBlockChainExplorerAdapterObserver() {}
  virtual void blockChainUpdated(const QVector<CryptoNote::BlockDetails>& _newBlocks,
    const QVector<CryptoNote::BlockDetails>& _orphanedBlocks) = 0;
  virtual void poolUpdated(const QVector<CryptoNote::TransactionDetails>& _newTransactions,
    const QVector<Crypto::Hash>& _removedTransactions) = 0;
  virtual void blockchainSynchronized(const CryptoNote::BlockDetails& _topBlock) = 0;
};

class IBlockChainExplorerAdapter {
public:
  enum InitStatus {
    INIT_SUCCESS = 0, INIT_FAIL
  };

  enum PreloadBlocksStatus {
    PRELOAD_SUCCESS = 0, PRELOAD_FAIL
  };

  enum GetPoolStatus {
    POOL_SUCCESS = 0, POOL_FAIL
  };

  virtual ~IBlockChainExplorerAdapter() {}

  virtual InitStatus init() = 0;
  virtual void deinit() = 0;

  virtual CryptoNote::BlockDetails* getBlock(quint32 _blockIndex) = 0;
  virtual PreloadBlocksStatus preloadBlocks(quint32 _minBlockIndex, quint32 _maxBlockIndex, quint32* _minLoadedBlockIndex = nullptr, quint32* _maxLoadedBlockIndex = nullptr) = 0;
  virtual PreloadBlocksStatus preloadBlocks(const QVector<quint32>& _blockIndexes, quint32* _minLoadedBlockIndex = nullptr, quint32* _maxLoadedBlockIndex = nullptr) = 0;
  virtual PreloadBlocksStatus preloadBlocks(const QDateTime& _timestampBegin, const QDateTime& _timestampEnd, quint32* _minLoadedBlockIndex = nullptr, quint32* _maxLoadedBlockIndex = nullptr) = 0;
  virtual PreloadBlocksStatus preloadBlocks(const QVector<Crypto::Hash>& _blockHashes, quint32* _minLoadedBlockIndex = nullptr, quint32* _maxLoadedBlockIndex = nullptr) = 0;
  virtual GetPoolStatus getPoolState(QVector<CryptoNote::TransactionDetails>& _transactions) = 0;
  virtual bool isBlockchainSynchronized() = 0;

  virtual void addObserver(IBlockChainExplorerAdapterObserver* _observer) = 0;
  virtual void removeObserver(IBlockChainExplorerAdapterObserver* _observer) = 0;
};

}

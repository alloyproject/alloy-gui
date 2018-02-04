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

#include <QAbstractItemModel>

#include "ICryptoNoteAdapter.h"
#include "INodeAdapter.h"

namespace WalletGui {

class NodeStateModel : public QAbstractItemModel, public INodeAdapterObserver, public ICryptoNoteAdapterObserver {
  Q_OBJECT
  Q_DISABLE_COPY(NodeStateModel)
  Q_ENUMS(Columns)

public:
  enum Columns {
    COLUMN_NODE_TYPE = 0, COLUMN_PEER_COUNT, COLUMN_CONNECTION_STATE, COLUMN_LOCAL_BLOCK_COUNT, COLUMN_KNOWN_BLOCK_COUNT,
     COLUMN_LAST_LOCAL_BLOCK_TIMESTAMP, COLUMN_LAST_LOCAL_BLOCK_DIFFICULTY, COLUMN_NETWORK_HASHRATE
  };

  enum Roles {
    ROLE_NODE_TYPE = Qt::UserRole, ROLE_PEER_COUNT, ROLE_CONNECTION_STATE, ROLE_LOCAL_BLOCK_COUNT, ROLE_KNOWN_BLOCK_COUNT,
    ROLE_LAST_LOCAL_BLOCK_TIMESTAMP, ROLE_LAST_LOCAL_BLOCK_DIFFICULTY, ROLE_NETWORK_HASHRATE
  };

  NodeStateModel(ICryptoNoteAdapter* _cryptoNoteAdapter, QObject* _parent);
  ~NodeStateModel();

  // QAbstractItemModel
  Qt::ItemFlags flags(const QModelIndex& _index) const override;
  int columnCount(const QModelIndex& _parent = QModelIndex()) const override;
  int rowCount(const QModelIndex& _parent = QModelIndex()) const override;
  QVariant headerData(int _section, Qt::Orientation _orientation, int _role = Qt::DisplayRole) const override;
  QVariant data(const QModelIndex& _index, int _role = Qt::DisplayRole) const override;
  QModelIndex index(int _row, int _column, const QModelIndex& _parent = QModelIndex()) const override;
  QModelIndex parent(const QModelIndex& _index) const override;

  // INodeAdapterObserver
  Q_SLOT virtual void initCompleted(int _status) override;
  Q_SLOT virtual void deinitCompleted() override;
  Q_SLOT virtual void peerCountUpdated(quintptr _count) override;
  Q_SLOT virtual void localBlockchainUpdated(CryptoNote::BlockHeaderInfo _lastLocalBlockInfo) override;
  Q_SLOT virtual void lastKnownBlockHeightUpdated(quint32 _height) override;
  Q_SLOT virtual void connectionStatusUpdated(bool _connected) override;

  // ICryptoNoteAdapterObserver
  Q_SLOT virtual void cryptoNoteAdapterInitCompleted(int _status) override;
  Q_SLOT virtual void cryptoNoteAdapterDeinitCompleted() override;

private:
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  const int m_columnCount;
  NodeType m_nodeType;
  bool m_isConnected;
  quintptr m_peerCount;
  quint32 m_knownBlockCount;
  CryptoNote::BlockHeaderInfo m_lastLocalBlockInfo;

  QVariant getDisplayRole(const QModelIndex& _index) const;
  QVariant getUserRole(int _role) const;
  void reset();
  static QString formatHashRate(quint64 _hashRate);
};

}

/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QMetaEnum>
#include <QPixmap>

#include "TransfersModel.h"
#include "ICryptoNoteAdapter.h"
#include "INodeAdapter.h"
#include "IWallet.h"
#include "IWalletAdapter.h"
#include "TransactionsModel.h"

Q_DECLARE_METATYPE(QList<CryptoNote::WalletTransfer>)

namespace WalletGui {

namespace {

QPixmap getTransferPixmap(const CryptoNote::WalletTransfer& _transfer) {
  if (_transfer.type == CryptoNote::WalletTransferType::DONATION) {
    return QPixmap(":icons/donation_confirmed");
  } else if (_transfer.amount < 0) {
    return QPixmap(":icons/out_confirmed");
  }

  return QPixmap(":icons/inp_confirmed");
}

}

TransfersModel::TransfersModel(ICryptoNoteAdapter* _cryptoNoteAdapter, const QModelIndex& _transactionIndex, QObject* _parent) :
  QAbstractItemModel(_parent), m_cryptoNoteAdapter(_cryptoNoteAdapter), m_transactionIndex(_transactionIndex),
  m_columnCount(TransfersModel::staticMetaObject.enumerator(TransfersModel::staticMetaObject.indexOfEnumerator("Columns")).keyCount()) {
}

TransfersModel::~TransfersModel() {
}

Qt::ItemFlags TransfersModel::flags(const QModelIndex& _index) const {
  return Qt::ItemIsEnabled | Qt::ItemNeverHasChildren | Qt::ItemIsSelectable;
}

int TransfersModel::columnCount(const QModelIndex& _parent) const {
  return m_columnCount;
}

int TransfersModel::rowCount(const QModelIndex& _parent) const {
  return m_transactionIndex.data(TransactionsModel::ROLE_TRANSFER_COUNT).toInt();
}

QVariant TransfersModel::headerData(int _section, Qt::Orientation _orientation, int _role) const {
  if (_role == Qt::DisplayRole) {
    switch (_section) {
    case COLUMN_ADDRESS:
      return tr("Address");
    case COLUMN_AMOUNT:
      return tr("Amount");
    }
  } else if (_role == Qt::TextAlignmentRole) {
    return static_cast<int>(Qt::AlignVCenter | Qt::AlignRight);
  }

  return QVariant();
}

QVariant TransfersModel::data(const QModelIndex& _index, int _role) const {
  if (!_index.isValid()) {
    return QVariant();
  }

  switch (_role) {
  case Qt::DisplayRole:
    return getDisplayRole(_index);
  case Qt::DecorationRole:
    return getDecorationRole(_index);
  case Qt::TextAlignmentRole:
    return headerData(_index.column(), Qt::Horizontal, _role);
  case Qt::ToolTipRole:
    return getToolTipRole(_index);
  default:
    break;
  }

  return getUserRole(_index, _role);
}

QModelIndex TransfersModel::index(int _row, int _column, const QModelIndex& _parent) const {
  if (!hasIndex(_row, _column, _parent)) {
    return QModelIndex();
  }

  return createIndex(_row, _column, _row);
}

QModelIndex TransfersModel::parent(const QModelIndex& _index) const {
  return QModelIndex();
}

QVariant TransfersModel::getDisplayRole(const QModelIndex& _index) const {
  switch (_index.column()) {
  case COLUMN_ADDRESS:
    return _index.data(ROLE_ADDRESS);
  case COLUMN_AMOUNT:
    return m_cryptoNoteAdapter->formatAmountToShort(_index.data(ROLE_AMOUNT).toLongLong());
  default:
    break;
  }

  return QVariant();
}

QVariant TransfersModel::getDecorationRole(const QModelIndex& _index) const {
  if (_index.column() == COLUMN_AMOUNT) {
    CryptoNote::WalletTransfer transfer = m_transactionIndex.data(TransactionsModel::ROLE_TRANSFERS).
      value<QList<CryptoNote::WalletTransfer>>()[_index.row()];
    return getTransferPixmap(transfer);
  }

  return QVariant();
}

QVariant TransfersModel::getToolTipRole(const QModelIndex& _index) const {
  if (_index.column() == COLUMN_ADDRESS) {
    return tr("Click to copy");
  }

  return QVariant();
}

QVariant TransfersModel::getUserRole(const QModelIndex& _index, int _role) const {
  CryptoNote::WalletTransfer transfer = m_transactionIndex.data(TransactionsModel::ROLE_TRANSFERS).
    value<QList<CryptoNote::WalletTransfer>>()[_index.row()];
  switch (_role) {
  case ROLE_ADDRESS:
    return QString::fromStdString(transfer.address);
  case ROLE_AMOUNT:
    return static_cast<qint64>(transfer.amount);
  case ROLE_TYPE:
    return static_cast<int>(transfer.type);
  case ROLE_ICON:
    return getTransferPixmap(transfer);
  case ROLE_IS_DONATION_TRANSFER: {
    CryptoNote::WalletTransfer transfer = m_transactionIndex.data(TransactionsModel::ROLE_TRANSFERS).
      value<QList<CryptoNote::WalletTransfer>>()[_index.row()];
    if (transfer.type == CryptoNote::WalletTransferType::DONATION) {
      return true;
    }

    return false;
  }
  default:
    break;
  }

  return QVariant();
}

}

/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QSize>

#include "FilteredTransactionsModel.h"
#include "Models/TransactionsModel.h"

namespace WalletGui {

FilteredTransactionsModel::FilteredTransactionsModel(QObject* _parent) : QSortFilterProxyModel(_parent) {
}

FilteredTransactionsModel::~FilteredTransactionsModel() {
}

QVariant FilteredTransactionsModel::headerData(int _section, Qt::Orientation _orientation, int _role) const {
  if (_orientation != Qt::Horizontal) {
    return QVariant();
  }

  if (_section == TransactionsModel::COLUMN_AMOUNT && _role == Qt::SizeHintRole) {
    return QSize(200, 20);
  }

  return QSortFilterProxyModel::headerData(_section, _orientation, _role);
}

bool FilteredTransactionsModel::filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const {
  int originColumn = sourceModel()->headerData(_sourceColumn, Qt::Horizontal, TransactionsModel::ROLE_COLUMN).toInt();
  return originColumn == TransactionsModel::COLUMN_NEW_TRANSACTION || originColumn == TransactionsModel::COLUMN_TIME ||
    originColumn == TransactionsModel::COLUMN_AMOUNT || originColumn == TransactionsModel::COLUMN_HASH ||
    originColumn == TransactionsModel::COLUMN_TRANSFERS || originColumn == TransactionsModel::COLUMN_SHOW_TRANSFERS;
}

}

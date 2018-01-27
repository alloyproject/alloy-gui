/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QFont>

#include "OverviewTransactionPoolModel.h"
#include "Settings/Settings.h"
#include "ICryptoNoteAdapter.h"
#include "Models/TransactionPoolModel.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const int AMOUNT_DECIMAL_COUNT = 3;

}

OverviewTransactionPoolModel::OverviewTransactionPoolModel(ICryptoNoteAdapter* _cryptoNoteAdapter, QObject* _parent) :
  QSortFilterProxyModel(_parent), m_cryptoNoteAdapter(_cryptoNoteAdapter) {
}

OverviewTransactionPoolModel::~OverviewTransactionPoolModel() {
}

QVariant OverviewTransactionPoolModel::data(const QModelIndex& _index, int _role) const {
  int originColumn = QSortFilterProxyModel::data(_index, TransactionPoolModel::ROLE_COLUMN).toInt();
  switch (_role) {
  case Qt::DisplayRole: {
    if (originColumn == TransactionPoolModel::COLUMN_AMOUNT) {
      QString amountString = QSortFilterProxyModel::data(_index, _role).toString();
      int dotPos = amountString.indexOf('.');
      int decimalDigitNumber = amountString.length() - 1 - dotPos;
      if (decimalDigitNumber < AMOUNT_DECIMAL_COUNT) {
        amountString.append(QString().fill('0', AMOUNT_DECIMAL_COUNT - decimalDigitNumber));
      } else if (decimalDigitNumber > AMOUNT_DECIMAL_COUNT) {
        amountString = amountString.left(amountString.length() - decimalDigitNumber + AMOUNT_DECIMAL_COUNT);
      }

      amountString.append(QString(" %1").arg(m_cryptoNoteAdapter->getCurrencyTicker().toUpper()));
      return amountString;
    }

    break;
  }

  case Qt::FontRole: {
    QFont font;
    font.setPixelSize(Style::FONT_NORMAL);
    return font;
  }

  case Qt::TextColorRole: {
    if (originColumn == TransactionPoolModel::COLUMN_HASH) {
      return QColor(Settings::instance().getCurrentStyle().fontColorBlueNormal());
    } else if (originColumn == TransactionPoolModel::COLUMN_AMOUNT) {
      return QColor(Settings::instance().getCurrentStyle().fontColorGray());
    }

    break;
  }

  case Qt::TextAlignmentRole: {
    if (originColumn == TransactionPoolModel::COLUMN_HASH) {
      return static_cast<int>(Qt::AlignVCenter | Qt::AlignLeft);
    } if (originColumn == TransactionPoolModel::COLUMN_AMOUNT) {
      return static_cast<int>(Qt::AlignVCenter | Qt::AlignRight);
    }

    break;
  }


  default:
    break;
  }

  return QSortFilterProxyModel::data(_index, _role);
}

int OverviewTransactionPoolModel::rowCount(const QModelIndex& _parent) const {
  if (sourceModel() == nullptr) {
    return 0;
  } else if (sourceModel()->rowCount() > 3) {
    return 3;
  }

  return sourceModel()->rowCount();
}

bool OverviewTransactionPoolModel::filterAcceptsColumn(int _sourceColumn, const QModelIndex& _sourceParent) const {
  return _sourceColumn == TransactionPoolModel::COLUMN_HASH || _sourceColumn == TransactionPoolModel::COLUMN_AMOUNT;
}

}

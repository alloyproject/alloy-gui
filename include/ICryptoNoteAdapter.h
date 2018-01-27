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

#include "INodeAdapter.h"

namespace WalletGui {

class ICryptoNoteAdapterObserver {
public:
  virtual ~ICryptoNoteAdapterObserver() {}
  virtual void cryptoNoteAdapterInitCompleted(int _status) = 0;
  virtual void cryptoNoteAdapterDeinitCompleted() = 0;
};

class ICryptoNoteAdapter {
public:
  virtual ~ICryptoNoteAdapter() {}

  virtual int init(ConnectionMethod _connectionMethod, quint16 _localDaemonPort, const QUrl& _remoteDaemonUrl) = 0;
  virtual void deinit() = 0;

  virtual INodeAdapter* getNodeAdapter() const = 0;
  virtual bool isValidAddress(const QString& _address) const = 0;
  virtual bool isValidPaymentId(const QString& _paymentId) const = 0;
  virtual QString getCurrencyTicker() const = 0;
  virtual quint64 getMinimalFee() const = 0;
  virtual quint64 getTargetTime() const = 0;
  virtual QString formatAmount(qint64 _amount) const = 0;
  virtual QString formatUnsignedAmount(quint64 _amount) const = 0;
  virtual QString formatAmountToShort(qint64 _amount) const = 0;
  virtual qint64 parseAmount(const QString& _amountString) const = 0;
  virtual quint64 parseUnsignedAmount(const QString& _amountString) const = 0;
  virtual std::string convertPaymentToExtra(const QString& _paymentIdString) const = 0;
  virtual QString extractPaymentIdFromExtra(const std::string& _extra) const = 0;
  virtual void addObserver(ICryptoNoteAdapterObserver* _observer) = 0;
  virtual void removeObserver(ICryptoNoteAdapterObserver* _observer) = 0;
};

}

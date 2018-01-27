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

namespace WalletGui {

class IPoolClientObserver {
public:
  virtual ~IPoolClientObserver() {}
  virtual void started() = 0;
  virtual void stopped() = 0;
  virtual void socketError() = 0;
  virtual void difficultyChanged(quint32 _difficulty) = 0;
  virtual void goodShareCountChanged(quint32 _goodShareCount) = 0;
  virtual void badShareCountChanged(quint32 _badShareCount) = 0;
  virtual void connectionErrorCountChanged(quint32 _connectionErrorCount) = 0;
  virtual void lastConnectionErrorTimeChanged(const QDateTime& _connectionErrorTime) = 0;
};

class IPoolClient {
public:
  virtual ~IPoolClient() {}

  virtual void start() = 0;
  virtual void stop() = 0;

  virtual QString getLogin() const = 0;
  virtual QString getPoolHost() const = 0;
  virtual quint16 getPoolPort() const = 0;
  virtual quint32 getDifficulty() const = 0;
  virtual quint32 getGoodShareCount() const = 0;
  virtual quint32 getBadShareCount() const = 0;
  virtual quint32 getConnectionErrorCount() const = 0;
  virtual QDateTime getLastConnectionErrorTime() const = 0;

  virtual void addObserver(IPoolClientObserver* _observer) = 0;
  virtual void removeObserver(IPoolClientObserver* _observer) = 0;
};

}

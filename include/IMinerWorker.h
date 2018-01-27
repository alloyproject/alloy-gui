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

struct Job {
  QString jobId;
  quint32 target;
  QByteArray blob;
};

class IMinerWorkerObserver {
public:
  virtual ~IMinerWorkerObserver() {}
  virtual void shareFound(const QString& _jobId, quint32 _nonce, const QByteArray& _result) = 0;
};

class IMinerWorker {
public:
  virtual ~IMinerWorker() {}

  virtual void start() = 0;
  virtual void stop() = 0;
  virtual void addObserver(IMinerWorkerObserver* _observer) = 0;
  virtual void removeObserver(IMinerWorkerObserver* _observer) = 0;
  virtual void addAlternateObserver(IMinerWorkerObserver* _observer) = 0;
  virtual void removeAlternateObserver(IMinerWorkerObserver* _observer) = 0;
};

}

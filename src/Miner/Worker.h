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

#include <QMap>
#include <QMetaObject>
#include <QMutex>
#include <QObject>

#include <atomic>

#include "IMinerWorker.h"

class QReadWriteLock;

namespace Crypto {
  struct Hash;
  class cn_context;
}

namespace WalletGui {

class Worker : public QObject, public IMinerWorker {
  Q_OBJECT
  Q_DISABLE_COPY(Worker)

public:
  Worker(Job& _mainJob, Job& _alternateJob, QReadWriteLock& _mainJobLock, QReadWriteLock& _alternateJobLock,
    std::atomic<quint32>& _mainNonce, std::atomic<quint32>& _alternateNonce, std::atomic<quint32>& _alternateProbability,
    std::atomic<quint32>& _hashCounter, std::atomic<quint32>& _alternateHashCounter, QObject* _parent);
  ~Worker();

  virtual void start() override;
  virtual void stop() override;
  virtual void addObserver(IMinerWorkerObserver* _observer) override;
  virtual void removeObserver(IMinerWorkerObserver* _observer) override;
  virtual void addAlternateObserver(IMinerWorkerObserver* _observer) override;
  virtual void removeAlternateObserver(IMinerWorkerObserver* _observer) override;

private:
  Job& m_mainJob;
  Job& m_alternateJob;
  QReadWriteLock& m_mainJobLock;
  QReadWriteLock& m_alternateJobLock;
  std::atomic<quint32>& m_mainNonce;
  std::atomic<quint32>& m_alternateNonce;
  std::atomic<quint32>& m_hashCounter;
  std::atomic<quint32>& m_alternateHashCounter;
  std::atomic<quint32>& m_alternateProbability;
  std::atomic<bool> m_isStopped;
  QMutex m_alternateObserverMutex;
  QMap<IMinerWorkerObserver*, QList<QMetaObject::Connection>> m_observerConnections;
  QMap<IMinerWorkerObserver*, QList<QMetaObject::Connection>> m_alternateObserverConnections;

  Q_INVOKABLE void run();
  void mainJobMiningRound(Job& _localJob, quint32& _localNonce, Crypto::Hash& _hash, Crypto::cn_context& _context);
  void alternateJobMiningRound(Job& _localJob, quint32& _localNonce, Crypto::Hash& _hash, Crypto::cn_context& _context);

Q_SIGNALS:
  void shareFoundSignal(const QString& _jobId, quint32 _nonce, const QByteArray& _result);
  void alternateShareFoundSignal(const QString& _jobId, quint32 _nonce, const QByteArray& _result);
};

}

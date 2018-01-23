/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QObject>

namespace WalletGui {

class IPoolMiner;

class IMinerManagerObserver {
public:
  virtual ~IMinerManagerObserver() {}
  virtual void minersLoaded() = 0;
  virtual void minersUnloaded() = 0;
  virtual void miningStarted() = 0;
  virtual void miningStopped() = 0;
  virtual void activeMinerChanged(quintptr _minerIndex) = 0;
  virtual void schedulePolicyChanged(int _schedulePolicy) = 0;
  virtual void cpuCoreCountChanged(quint32 _cpuCoreCount) = 0;
  virtual void minerAdded(quintptr _minerIndex) = 0;
  virtual void minerRemoved(quintptr _minerIndex) = 0;
  virtual void stateChanged(quintptr _minerIndex, int _newState) = 0;
  virtual void hashRateChanged(quintptr _minerIndex, quint32 _hashRate) = 0;
  virtual void alternateHashRateChanged(quintptr _minerIndex, quint32 _hashRate) = 0;
  virtual void difficultyChanged(quintptr _minerIndex, quint32 _difficulty) = 0;
  virtual void goodShareCountChanged(quintptr _minerIndex, quint32 _goodShareCount) = 0;
  virtual void goodAlternateShareCountChanged(quintptr _minerIndex, quint32 _goodShareCount) = 0;
  virtual void badShareCountChanged(quintptr _minerIndex, quint32 _badShareCount) = 0;
  virtual void connectionErrorCountChanged(quintptr _minerIndex, quint32 _connectionErrorCount) = 0;
  virtual void lastConnectionErrorTimeChanged(quintptr _minerIndex, const QDateTime& _lastConnectionErrorTime) = 0;
};

class IMiningManager {
public:
  enum SchedulePolicy {
    POLICY_FAILOVER, POLICY_RANDOM
  };

  virtual ~IMiningManager() {}

  virtual void startMining() = 0;
  virtual void stopMining() = 0;

  virtual SchedulePolicy getSchedulePolicy() const = 0;
  virtual quint32 getCpuCoreCount() const = 0;
  virtual quintptr getMinerCount() const = 0;
  virtual IPoolMiner* getMiner(quintptr _minerIndex) const = 0;

  virtual void setSchedulePolicy(SchedulePolicy _policy) = 0;
  virtual void setCpuCoreCount(quint32 _cpuCoreCount) = 0;
  virtual quintptr addMiner(const QString& _host, quint16 _port, quint32 _difficulty) = 0;
  virtual void removeMiner(quintptr _minerIndex) = 0;
  virtual void moveMiner(quintptr _fromIndex, quintptr _toIndex) = 0;
  virtual void restoreDefaultMinerList() = 0;

  virtual void addObserver(IMinerManagerObserver* _observer) = 0;
  virtual void removeObserver(IMinerManagerObserver* _observer) = 0;
};

}

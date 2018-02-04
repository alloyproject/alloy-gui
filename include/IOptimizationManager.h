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

class IOptimizationManagerObserver {
public:
  virtual ~IOptimizationManagerObserver() {}
  virtual void fusionTransactionsVisibilityChanged(bool _isVisible) = 0;
};

class IOptimizationManager {
public:
  virtual ~IOptimizationManager() {}
  virtual bool isOptimizationEnabled() const = 0;
  virtual bool isFusionTransactionsVisible() const = 0;
  virtual bool isOptimizationTimeSetManually() const = 0;
  virtual quint64 getOptimizationThreshold() const = 0;
  virtual quint64 getOptimizationMixin() const = 0;
  virtual quint64 getOptimizationInterval() const = 0;
  virtual QTime getOptimizationStartTime() const = 0;
  virtual QTime getOptimizationStopTime() const = 0;

  virtual void setOptimizationEnabled(bool _on) = 0;
  virtual void setFusionTransactionsVisible(bool _isVisible) = 0;
  virtual void setOptimizationTimeSetManually(bool _on) = 0;
  virtual void setOptimizationThreshold(quint64 _threshold) = 0;
  virtual void setOptimizationMixin(quint64 _mixin) = 0;
  virtual void setOptimizationInterval(quint64 _interval) = 0;
  virtual void setOptimizationStartTime(const QTime& _startTime) = 0;
  virtual void setOptimizationStopTime(const QTime& _stopTime) = 0;

  virtual void addObserver(IOptimizationManagerObserver* _observer) = 0;
  virtual void removeObserver(IOptimizationManagerObserver* _observer) = 0;
};

}

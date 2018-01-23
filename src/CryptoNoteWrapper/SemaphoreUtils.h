/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

class QSemaphore;

namespace WalletGui {

class SemaphoreLocker {
public:
  explicit SemaphoreLocker(QSemaphore& _semaphore);
  ~SemaphoreLocker();

  void wait();

private:
  QSemaphore& m_semaphore;
};

class SemaphoreUnlocker {
public:
  explicit SemaphoreUnlocker(QSemaphore& _semaphore);
  ~SemaphoreUnlocker();

private:
  QSemaphore& m_semaphore;
};

}

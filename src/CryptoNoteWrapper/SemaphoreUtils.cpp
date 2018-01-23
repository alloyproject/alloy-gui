/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QSemaphore>

#include "SemaphoreUtils.h"

namespace WalletGui {

SemaphoreLocker::SemaphoreLocker(QSemaphore& _semaphore) : m_semaphore(_semaphore) {
  m_semaphore.acquire(1);
}

SemaphoreLocker::~SemaphoreLocker() {
  Q_ASSERT(m_semaphore.available() == 0);
  m_semaphore.release(1);
}

void SemaphoreLocker::wait() {
  m_semaphore.acquire(1);
}

SemaphoreUnlocker::SemaphoreUnlocker(QSemaphore& _semaphore) : m_semaphore(_semaphore) {
  Q_ASSERT(m_semaphore.available() == 0);
}

SemaphoreUnlocker::~SemaphoreUnlocker() {
  Q_ASSERT(m_semaphore.available() == 0);
  m_semaphore.release(1);
}

}

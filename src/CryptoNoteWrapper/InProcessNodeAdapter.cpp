/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "InProcessNodeAdapter.h"
#include "InProcessNodeWorker.h"
#include "WalletGreenAdapter.h"

namespace WalletGui {

InProcessNodeAdapter::InProcessNodeAdapter(const CryptoNote::Currency& _currency, Logging::ILogger& _loggerManager, Logging::ILogger& _walletLogger,
  QObject* _parent) : CommonNodeAdapter(_parent), m_currency(_currency), m_loggerManager(_loggerManager), m_walletLogger(_walletLogger) {
}

InProcessNodeAdapter::~InProcessNodeAdapter() {
}

INodeAdapter* InProcessNodeAdapter::createWorker() const {
  return new InProcessNodeWorker(m_currency, m_loggerManager, m_walletLogger, nullptr);
}

}

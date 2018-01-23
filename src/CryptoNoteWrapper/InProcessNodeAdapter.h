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

#include "CommonNodeAdapter.h"

namespace Logging {
  class ILogger;
}

namespace CryptoNote {
  class Currency;
}

namespace WalletGui {

class InProcessNodeAdapter : public CommonNodeAdapter {
  Q_OBJECT
  Q_DISABLE_COPY(InProcessNodeAdapter)

public:
  InProcessNodeAdapter(const CryptoNote::Currency& _currency, Logging::ILogger& _loggerManager, Logging::ILogger& _walletLogger, QObject* _parent);
  virtual ~InProcessNodeAdapter();

protected:
  virtual INodeAdapter* createWorker() const override;

private:
  const CryptoNote::Currency& m_currency;
  Logging::ILogger& m_loggerManager;
  Logging::ILogger& m_walletLogger;
};

}

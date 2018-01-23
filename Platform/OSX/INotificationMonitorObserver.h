/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QString>

namespace WalletGui {

class INotificationMonitorObserver {
public:
  virtual ~INotificationMonitorObserver() {}
  virtual void notify(const QString& _notification) = 0;
};

}

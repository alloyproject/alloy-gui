/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

class QUrl;

namespace WalletGui {

class IApplicationEventHandlerObserver {
public:
  virtual ~IApplicationEventHandlerObserver() {}
  virtual void urlReceived(const QUrl& _url) = 0;
  virtual void screenLocked() = 0;
  virtual void screenUnlocked() = 0;
};

class IApplicationEventHandler {
public:
  virtual ~IApplicationEventHandler() {}

  virtual void init() = 0;
  virtual QUrl getLastReceivedUrl() = 0;
  virtual void sendUrl(const QUrl& _url) = 0;
  virtual void addObserver(IApplicationEventHandlerObserver* _observer) = 0;
  virtual void removeObserver(IApplicationEventHandlerObserver* _observer) = 0;
};

}

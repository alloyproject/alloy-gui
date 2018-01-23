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
#include <QUrl>

#include "IApplicationEventHandler.h"
#include "INotificationMonitorObserver.h"

namespace WalletGui {

class ApplicationEventHandler : public QObject, public IApplicationEventHandler, public INotificationMonitorObserver {
  Q_OBJECT
  Q_DISABLE_COPY(ApplicationEventHandler)

public:
  explicit ApplicationEventHandler(QObject* _parent);
  virtual ~ApplicationEventHandler();

  // IApplicationEventHandler
  virtual void init() override;
  virtual QUrl getLastReceivedUrl() override;
  virtual void sendUrl(const QUrl& _url) override;
  virtual void addObserver(IApplicationEventHandlerObserver* _observer) override;
  virtual void removeObserver(IApplicationEventHandlerObserver* _observer) override;

  // INotificationMonitorObserver
  virtual void notify(const QString& _notification) override;

  // QObject
  bool eventFilter(QObject* _object, QEvent* _event) override;

private:
  QUrl m_receivedUrl;
  void* m_notificationMonitor;

Q_SIGNALS:
  void urlReceivedSignal(const QUrl& _url);
  void screenLockedSignal();
  void screenUnlockedSignal();
};

}

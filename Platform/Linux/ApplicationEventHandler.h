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

#include <QLocalServer>
#include <QUrl>

#include "IApplicationEventHandler.h"

namespace WalletGui {

class ApplicationEventHandler : public QLocalServer, public IApplicationEventHandler {
  Q_OBJECT
  Q_DISABLE_COPY(ApplicationEventHandler)

public:
  explicit ApplicationEventHandler(QObject* _parent);
  ~ApplicationEventHandler();

  virtual void init() override;
  virtual QUrl getLastReceivedUrl() override;
  virtual void sendUrl(const QUrl& _url) override;
  virtual void addObserver(IApplicationEventHandlerObserver* _observer) override;
  virtual void removeObserver(IApplicationEventHandlerObserver* _observer) override;

private:
  QUrl m_receivedUrl;

  void accept();
  void readyRead();
  void clientDisconnected();
  Q_SLOT void screenStateChanged(bool _isLocked);

Q_SIGNALS:
  void urlReceivedSignal(const QUrl& _url);
  void screenLockedSignal();
  void screenUnlockedSignal();
};

}

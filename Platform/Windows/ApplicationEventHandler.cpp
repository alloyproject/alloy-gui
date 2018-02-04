/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QApplication>
#include <QLocalSocket>
#define NOMINMAX
#include <Windows.h>

#include "ApplicationEventHandler.h"
#include "Settings/Settings.h"

namespace WalletGui {

namespace {

const char PAYMENT_SERVER_NAME[] = "alloy-payment-server-YrmF1jZEv5ahqXuD99d5H1jXQ";

}

ApplicationEventHandler::ApplicationEventHandler(QObject* _parent) : QLocalServer(_parent) {
  QApplication::instance()->installNativeEventFilter(this);
}

ApplicationEventHandler::~ApplicationEventHandler() {
}

bool ApplicationEventHandler::nativeEventFilter(const QByteArray& _eventType, void* _message, long* _result) {
  MSG* message = static_cast<MSG*>(_message);
  if (message != nullptr && message->message == WM_WTSSESSION_CHANGE) {
    if (message->wParam == WTS_SESSION_LOCK) {
      Q_EMIT screenLockedSignal();
    } else if (message->wParam == WTS_SESSION_UNLOCK) {
      Q_EMIT screenUnlockedSignal();
    }
  }

  return false;
}

void ApplicationEventHandler::init() {
  connect(this, &ApplicationEventHandler::newConnection, this, &ApplicationEventHandler::accept);
  listen(PAYMENT_SERVER_NAME);
  Settings::instance().setUrlHandler();
}

QUrl ApplicationEventHandler::getLastReceivedUrl() {
  return m_receivedUrl;
}

void ApplicationEventHandler::sendUrl(const QUrl& _url) {
  m_receivedUrl = _url;
  QLocalSocket* socket = new QLocalSocket(this);
  socket->connectToServer(PAYMENT_SERVER_NAME);
  if (!socket->waitForConnected(5000)) {
    socket->deleteLater();
    return;
  }

  socket->write(_url.toString().toUtf8());
  QApplication::processEvents();
  socket->deleteLater();
}

void ApplicationEventHandler::addObserver(IApplicationEventHandlerObserver* _observer) {
  QObject* observer = dynamic_cast<QObject*>(_observer);
  connect(this, SIGNAL(urlReceivedSignal(QUrl)), observer, SLOT(urlReceived(QUrl)));
  connect(this, SIGNAL(screenLockedSignal()), observer, SLOT(screenLocked()));
  connect(this, SIGNAL(screenUnlockedSignal()), observer, SLOT(screenUnlocked()));
}

void ApplicationEventHandler::removeObserver(IApplicationEventHandlerObserver* _observer) {
  QObject* observer = dynamic_cast<QObject*>(_observer);
  disconnect(this, SIGNAL(urlReceivedSignal(QUrl)), observer, SLOT(urlReceived(QUrl)));
  disconnect(this, SIGNAL(screenLockedSignal()), observer, SLOT(screenLocked()));
  disconnect(this, SIGNAL(screenUnlockedSignal()), observer, SLOT(screenUnlocked()));
}

void ApplicationEventHandler::accept() {
  QLocalSocket* socket = nextPendingConnection();
  if (socket == nullptr) {
    return;
  }

  connect(socket, &QLocalSocket::readyRead, this, &ApplicationEventHandler::readyRead);
  connect(socket, &QLocalSocket::disconnected, socket, &QLocalSocket::deleteLater);
}

void ApplicationEventHandler::readyRead() {
  QByteArray rawData = qobject_cast<QLocalSocket*>(sender())->readAll();
  QUrl paymentUrl = QUrl::fromUserInput(rawData);
  if (paymentUrl.isValid()) {
    Q_EMIT urlReceivedSignal(paymentUrl);
  }
}

}

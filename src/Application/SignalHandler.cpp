/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <csignal>

#include "SignalHandler.h"
#include "WalletLogger/WalletLogger.h"

namespace WalletGui {

SignalHandler& SignalHandler::instance() {
  static SignalHandler inst;
  return inst;
}

SignalHandler::SignalHandler() : QObject() {
}

SignalHandler::~SignalHandler() {
}

void SignalHandler::init() {
  std::signal(SIGINT, SignalHandler::sigHandler);
  std::signal(SIGTERM, SignalHandler::sigHandler);
#ifndef Q_OS_WIN
  std::signal(SIGPIPE, SIG_IGN);
#endif
}

void SignalHandler::sigHandler(int _signal) {
  WalletLogger::warning(tr("[SignalHandler] Signal received: %1").arg(_signal));
  Q_EMIT SignalHandler::instance().quitSignal();
}

}

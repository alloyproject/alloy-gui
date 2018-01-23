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

namespace WalletGui {

class SignalHandler : public QObject {
  Q_OBJECT
  Q_DISABLE_COPY(SignalHandler)

public:
  static SignalHandler& instance();

  void init();

private:
  SignalHandler();
  ~SignalHandler();

  static void sigHandler(int _signal);

Q_SIGNALS:
  void quitSignal();
};

}

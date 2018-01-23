/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QSplashScreen>

namespace WalletGui {

class WalletSplashScreen : public QSplashScreen {
  Q_OBJECT
  Q_DISABLE_COPY(WalletSplashScreen)

public:
  explicit WalletSplashScreen(QWidget* _parent);
  ~WalletSplashScreen();

protected:
  virtual void mousePressEvent(QMouseEvent* _event) Q_DECL_OVERRIDE;
};

}

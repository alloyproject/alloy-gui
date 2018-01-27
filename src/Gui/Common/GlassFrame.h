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

#include <QFrame>

namespace WalletGui {

class GlassFrame : public QFrame {
  Q_OBJECT
  Q_DISABLE_COPY(GlassFrame)

public:
  explicit GlassFrame(QWidget* _parent);
  virtual ~GlassFrame();

  virtual void install(QWidget* _parent);
  virtual void remove();

protected:
  bool eventFilter(QObject* _object, QEvent* _event) override;
};

}

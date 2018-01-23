/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QPushButton>

namespace WalletGui {

class WalletOkButton : public QPushButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletOkButton)

public:
  explicit WalletOkButton(QWidget* _parent);
  ~WalletOkButton();
};

}

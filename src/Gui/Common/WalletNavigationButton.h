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

class WalletNavigationButton : public QPushButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletNavigationButton)

public:
  explicit WalletNavigationButton(QWidget* _parent);
  ~WalletNavigationButton();
};

}

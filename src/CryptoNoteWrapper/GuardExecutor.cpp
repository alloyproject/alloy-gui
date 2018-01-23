/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "GuardExecutor.h"

namespace WalletGui {

GuardExecutor::GuardExecutor(const std::function<void ()>& _initFunction, const std::function<void ()>& _deinitFunction) :
m_deinitFunction(_deinitFunction) {
  if (_initFunction != nullptr) {
    _initFunction();
  }
}

GuardExecutor::~GuardExecutor() {
  if (m_deinitFunction != nullptr) {
    m_deinitFunction();
  }
}

}

/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <functional>

namespace WalletGui {

class GuardExecutor {
public:
  GuardExecutor(const std::function<void()>& _initFunction, const std::function<void()>& _deinitFunction);

  ~GuardExecutor();

private:
  const std::function<void()> m_deinitFunction;
};

}

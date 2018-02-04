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

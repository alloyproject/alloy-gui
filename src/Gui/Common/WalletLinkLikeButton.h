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

class WalletLinkLikeButton : public QPushButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletLinkLikeButton)

public:
  explicit WalletLinkLikeButton(QWidget* _parent);
  ~WalletLinkLikeButton();
};

class WalletTinyLinkLikeButton : public WalletLinkLikeButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletTinyLinkLikeButton)

public:
  explicit WalletTinyLinkLikeButton(QWidget* _parent);
  ~WalletTinyLinkLikeButton();
};

class WalletNormalLinkLikeButton : public WalletLinkLikeButton {
  Q_OBJECT
  Q_DISABLE_COPY(WalletNormalLinkLikeButton)

public:
  explicit WalletNormalLinkLikeButton(QWidget* _parent);
  ~WalletNormalLinkLikeButton();
};

}

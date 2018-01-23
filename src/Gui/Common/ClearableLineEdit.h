/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QLineEdit>

namespace WalletGui {

class ClearableLineEdit : public QLineEdit {
  Q_OBJECT
  Q_DISABLE_COPY(ClearableLineEdit)

public:
  explicit ClearableLineEdit(QWidget* _parent = 0);
  ~ClearableLineEdit();
};

}

/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "ExitWidget.h"

#include "ui_ExitWidget.h"

namespace WalletGui {

ExitWidget::ExitWidget(QWidget* _parent) : QWidget(_parent, Qt::Window), m_ui(new Ui::ExitWidget) {
  m_ui->setupUi(this);
}

ExitWidget::~ExitWidget() {
}

}

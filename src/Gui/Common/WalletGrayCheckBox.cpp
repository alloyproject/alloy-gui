/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "WalletGrayCheckBox.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

const char GRAY_CHECK_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletGrayCheckBox {"
    "color: %fontColorGray%;"
    "font-size: %fontSizeNormal%;"
    "border: none;"
  "}";

WalletGrayCheckBox::WalletGrayCheckBox(QWidget *parent) : QCheckBox(parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(GRAY_CHECK_STYLE_SHEET_TEMPLATE));
}


WalletGrayCheckBox::~WalletGrayCheckBox() {
}

}

/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "WalletCancelButton.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

const char WALLET_CANCEL_BUTTON_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletCancelButton {"
    "min-width: 80px;"
    "max-width: 80px;"
    "min-height: 30px;"
    "max-height: 30px;"
    "font-size: %fontSizeNormal%;"
    "color: #ffffff;"
    "background-color: %backgroundColorGrayNormal%;"
    "border: 1px solid %backgroundColorGrayNormal%;"
  "}"

  "WalletGui--WalletCancelButton:hover {"
    "background-color: %backgroundColorGrayHover%;"
  "}"

  "WalletGui--WalletCancelButton:pressed {"
    "background-color: %backgroundColorGrayPressed%;"
  "}";

WalletCancelButton::WalletCancelButton(QWidget* _parent) : QPushButton(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_CANCEL_BUTTON_STYLE_SHEET_TEMPLATE));
}

WalletCancelButton::~WalletCancelButton() {
}

}

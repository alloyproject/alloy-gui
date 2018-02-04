/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "WalletBlueButton.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char WALLET_BLUE_BUTTON_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletBlueButton {"
    "font-size: %fontSizeNormal%;"
    "color: #ffffff;"
    "background-color: %backgroundColorBlueNormal%;"
    "border: 1px solid %backgroundColorBlueNormal%;"
  "}"

  "WalletGui--WalletBlueButton:disabled {"
    "background-color: %backgroundColorBlueDisabled%;"
    "border: 1px solid %backgroundColorBlueDisabled%;"
  "}"

  "WalletGui--WalletBlueButton:hover {"
    "background-color: %backgroundColorBlueHover%;"
    "border: 1px solid %backgroundColorBlueHover%;"
  "}"

  "WalletGui--WalletBlueButton:pressed {"
    "background-color: %backgroundColorBluePressed%;"
    "border: 1px solid %backgroundColorBluePressed%;"
  "}"

  "WalletGui--WalletNormalBlueButton {"
    "min-height: 30px;"
    "max-height: 30px;"
    "font-size: %fontSizeNormal%;"
  "}"

  "WalletGui--WalletLargeBlueButton {"
    "min-height: 40px;"
    "max-height: 40px;"
    "font-size: %fontSizeLarge%;"
  "}";

}

WalletBlueButton::WalletBlueButton(QWidget* _parent) : QPushButton(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_BLUE_BUTTON_STYLE_SHEET_TEMPLATE));
}

WalletBlueButton::~WalletBlueButton() {
}

WalletNormalBlueButton::WalletNormalBlueButton(QWidget* _parent) : WalletBlueButton(_parent) {
}

WalletNormalBlueButton::~WalletNormalBlueButton() {
}

WalletLargeBlueButton::WalletLargeBlueButton(QWidget* _parent) : WalletBlueButton(_parent) {
}

WalletLargeBlueButton::~WalletLargeBlueButton() {
}

}

/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "WalletDescriptionLabel.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char WALLET_DESCRIPTION_LABEL_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletDescriptionLabel {"
    "color: %fontColorGray%;"
    "font-size: %fontSizeSmall%;"
    "padding-top: 0px;"
  "}";

}

WalletDescriptionLabel::WalletDescriptionLabel(QWidget* _parent) : QLabel(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_DESCRIPTION_LABEL_STYLE_SHEET_TEMPLATE));
}

WalletDescriptionLabel::~WalletDescriptionLabel() {
}

}

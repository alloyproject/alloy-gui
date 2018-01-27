/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "PrivacyFrame.h"
#include "Settings/Settings.h"
#include "Style/Style.h"
#include "ui_PrivacyFrame.h"

namespace WalletGui {

namespace {

const char PRIVACY_FRAME_STYLE_SHEET_TEMPLATE[] =
  "WalletGui--PrivacyFrame {"
    "border: none;"
    "background-color: #ffffff;"
  "}"

  "WalletGui--PrivacyFrame QCheckBox {"
    "spacing: 20px;"
    "min-height: 25px;"
    "max-height: 25px;"
  "}";

}

PrivacyFrame::PrivacyFrame(QWidget* _parent) : QFrame(_parent), m_ui(new Ui::PrivacyFrame) {
  m_ui->setupUi(this);
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(PRIVACY_FRAME_STYLE_SHEET_TEMPLATE));
}

PrivacyFrame::~PrivacyFrame() {
}

void PrivacyFrame::load() {
  m_ui->m_newsCheck->setChecked(Settings::instance().isNewsEnabled());
}

void PrivacyFrame::save() {
  Settings::instance().setNewsEnabled(m_ui->m_newsCheck->isChecked());
}

void PrivacyFrame::setData(const QVariantMap& _data) {

}

bool PrivacyFrame::isEnabled() const {
  return true;
}

bool PrivacyFrame::needToRestartApplication() const {
  return false;
}

bool PrivacyFrame::canAccept() const {
  return true;
}

}

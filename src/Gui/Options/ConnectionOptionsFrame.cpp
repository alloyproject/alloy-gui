/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QUrl>

#include <CryptoNoteConfig.h>

#include "ConnectionOptionsFrame.h"
#include "Settings/Settings.h"
#include "ICryptoNoteAdapter.h"
#include "INodeAdapter.h"
#include "Style/Style.h"

#include "ui_ConnectionOptionsFrame.h"

namespace WalletGui {

namespace {

const char CONNECTION_OPTIONS_STYLE_SHEET_TEMPLATE[] =
  "WalletGui--ConnectionOptionsFrame {"
    "background: #ffffff;"
  "}"

  "WalletGui--ConnectionOptionsFrame QRadioButton {"
    "spacing: 20px;"
  "}"

  "WalletGui--ConnectionOptionsFrame QRadioButton,"
  "WalletGui--ConnectionOptionsFrame QLineEdit,"
  "WalletGui--ConnectionOptionsFrame QSpinBox {"
    "min-height: 25px;"
    "max-height: 25px;"
  "}";

bool isIpOrHostName(const QString& _string) {
  QRegExp ipRegExp("^(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])$");
  QRegExp hostNameRegExp("^(([a-zA-Z0-9]|[a-zA-Z0-9][a-zA-Z0-9\\-]*[a-zA-Z0-9])\\.)*([A-Za-z0-9]|[A-Za-z0-9][A-Za-z0-9\\-]*[A-Za-z0-9])$");
  return !_string.isEmpty() && (ipRegExp.exactMatch(_string) || hostNameRegExp.exactMatch(_string));
}

}

ConnectionOptionsFrame::ConnectionOptionsFrame(QWidget* _parent) : QFrame(_parent),
  m_ui(new Ui::ConnectionOptionsFrame), m_cryptoNoteAdapter(nullptr) {
  m_ui->setupUi(this);
  m_ui->m_connectionButtonGroup->setId(m_ui->m_autoRadio, static_cast<int>(ConnectionMethod::AUTO));
  m_ui->m_connectionButtonGroup->setId(m_ui->m_embeddedRadio, static_cast<int>(ConnectionMethod::EMBEDDED));
  m_ui->m_connectionButtonGroup->setId(m_ui->m_localRadio, static_cast<int>(ConnectionMethod::LOCAL));
  m_ui->m_connectionButtonGroup->setId(m_ui->m_remoteRadio, static_cast<int>(ConnectionMethod::REMOTE));
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(CONNECTION_OPTIONS_STYLE_SHEET_TEMPLATE));
}

ConnectionOptionsFrame::~ConnectionOptionsFrame() {
}

void ConnectionOptionsFrame::load() {
  m_ui->m_localPortSpin->setValue(Settings::instance().getLocalRpcPort());
  QUrl remoteUrl = Settings::instance().getRemoteRpcUrl();
  if (remoteUrl.isEmpty()) {
    m_ui->m_remotePortSpin->setValue(RPC_DEFAULT_PORT);
  } else {
    m_ui->m_remoteHostEdit->setText(remoteUrl.host());
    m_ui->m_remotePortSpin->setValue(remoteUrl.port());
  }

  switch (Settings::instance().getConnectionMethod()) {
  case ConnectionMethod::AUTO:
    m_ui->m_autoRadio->toggle();
    break;
  case ConnectionMethod::EMBEDDED:
    m_ui->m_embeddedRadio->toggle();
    break;
  case ConnectionMethod::LOCAL:
    m_ui->m_localRadio->toggle();
    break;
  case ConnectionMethod::REMOTE:
    m_ui->m_remoteRadio->toggle();
    break;
  }

  remoteHostNameChanged(m_ui->m_remoteHostEdit->text());
}

void ConnectionOptionsFrame::save() {
  Settings::instance().setConnectionMethod(static_cast<ConnectionMethod>(m_ui->m_connectionButtonGroup->checkedId()));
  Settings::instance().setLocalRpcPort(m_ui->m_localPortSpin->value());
  Settings::instance().setRemoteRpcUrl(QUrl::fromUserInput(QString("%1:%2").arg(m_ui->m_remoteHostEdit->text()).arg(m_ui->m_remotePortSpin->value())));
}

void ConnectionOptionsFrame::setData(const QVariantMap& _data) {
  // Do nothing
}

bool ConnectionOptionsFrame::isEnabled() const {
  return true;
}

bool ConnectionOptionsFrame::needToRestartApplication() const {
  return false;
}

bool ConnectionOptionsFrame::canAccept() const {
  if (m_ui->m_remoteRadio->isChecked()) {
    return isIpOrHostName(m_ui->m_remoteHostEdit->text());
  } else {
    return true;
  }
}

void ConnectionOptionsFrame::setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) {
  m_cryptoNoteAdapter = _cryptoNoteAdapter;
}

void ConnectionOptionsFrame::remoteHostNameChanged(const QString& _host) {
  if (m_ui->m_remoteRadio->isChecked()) {
    bool res = isIpOrHostName(_host);
    Q_EMIT disableAcceptButtonSignal(!res);
  } else {
    Q_EMIT disableAcceptButtonSignal(false);
  }
}

void ConnectionOptionsFrame::connectionButtonClicked(int _buttonId) {
  remoteHostNameChanged(m_ui->m_remoteHostEdit->text());
}

}

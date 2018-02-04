/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QDateTime>

#include "AboutDialog.h"
#include "Settings/Settings.h"

#include "ui_AboutDialog.h"

namespace WalletGui {

AboutDialog::AboutDialog(QWidget* _parent) : QDialog(_parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint)), m_ui(new Ui::AboutDialog) {
  m_ui->setupUi(this);

  QString aboutText = m_ui->m_aboutLabel->text();
  m_ui->m_aboutLabel->setText(aboutText.arg(Settings::instance().getVersion()).arg(GIT_REVISION).
    arg(QDateTime::currentDateTime().date().year()));
}

AboutDialog::~AboutDialog() {
}

}

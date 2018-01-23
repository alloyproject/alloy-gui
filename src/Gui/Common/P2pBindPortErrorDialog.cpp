/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "P2pBindPortErrorDialog.h"

#include "ui_P2pBindPortErrorDialog.h"

namespace WalletGui {

P2pBindPortErrorDialog::P2pBindPortErrorDialog(quint16 _oldPort, quint16 _newPort, QWidget* _parent) : QDialog(_parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint)),
  m_ui(new Ui::P2pBindPortErrorDialog) {
  m_ui->setupUi(this);

  QString errorText = m_ui->m_portErrorLabel->text();
  m_ui->m_portErrorLabel->setText(errorText.arg(_oldPort));
  m_ui->m_newPortSpin->setValue(_newPort);
}

P2pBindPortErrorDialog::~P2pBindPortErrorDialog() {
}

quint16 P2pBindPortErrorDialog::getNewPort() const {
  return m_ui->m_newPortSpin->value();
}

void P2pBindPortErrorDialog::accept() {
  if (m_ui->m_acceptRadio->isChecked()) {
    QDialog::accept();
  } else {
    QDialog::reject();
  }
}

}

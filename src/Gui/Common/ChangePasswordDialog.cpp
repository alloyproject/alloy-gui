/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "ChangePasswordDialog.h"

#include "ui_ChangePasswordDialog.h"

namespace WalletGui {

ChangePasswordDialog::ChangePasswordDialog(bool _oldPasswordError, QWidget* _parent) : QDialog(_parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint)),
  m_ui(new Ui::ChangePasswordDialog) {
  m_ui->setupUi(this);
  setOldPasswordError(_oldPasswordError);
}

ChangePasswordDialog::~ChangePasswordDialog() {
}

QString ChangePasswordDialog::getNewPassword() const {
  return m_ui->m_newPasswordEdit->text();
}

QString ChangePasswordDialog::getOldPassword() const {
  return m_ui->m_oldPasswordEdit->text();
}

void ChangePasswordDialog::setConfirmPasswordError(bool _error) {
  m_ui->m_newPasswordEdit->setProperty("errorState", _error);
  m_ui->m_newPasswordConfirmationEdit->setProperty("errorState", _error);
  m_ui->m_newPasswordConfirmationTextLabel->setProperty("errorState", _error);
  m_ui->m_newPasswordConfirmationTextLabel->setText(_error ? tr("PASSWORDS DO NOT MATCH") : tr("CONFIRM"));

  m_ui->m_newPasswordEdit->style()->unpolish(m_ui->m_newPasswordEdit);
  m_ui->m_newPasswordEdit->style()->polish(m_ui->m_newPasswordEdit);
  m_ui->m_newPasswordEdit->update();

  m_ui->m_newPasswordConfirmationEdit->style()->unpolish(m_ui->m_newPasswordConfirmationEdit);
  m_ui->m_newPasswordConfirmationEdit->style()->polish(m_ui->m_newPasswordConfirmationEdit);
  m_ui->m_newPasswordConfirmationEdit->update();

  m_ui->m_newPasswordConfirmationTextLabel->style()->unpolish(m_ui->m_newPasswordConfirmationTextLabel);
  m_ui->m_newPasswordConfirmationTextLabel->style()->polish(m_ui->m_newPasswordConfirmationTextLabel);
  m_ui->m_newPasswordConfirmationTextLabel->update();
}

void ChangePasswordDialog::setEmptyPasswordError(bool _error) {
  m_ui->m_newPasswordEdit->setProperty("errorState", _error);
  m_ui->m_newPasswordConfirmationEdit->setProperty("errorState", _error);
  m_ui->m_newPasswordTextLabel->setProperty("errorState", _error);
  m_ui->m_newPasswordTextLabel->setText(_error ? tr("EMPTY PASSWORD") : tr("NEW PASSWORD"));

  m_ui->m_newPasswordEdit->style()->unpolish(m_ui->m_newPasswordEdit);
  m_ui->m_newPasswordEdit->style()->polish(m_ui->m_newPasswordEdit);
  m_ui->m_newPasswordEdit->update();

  m_ui->m_newPasswordConfirmationEdit->style()->unpolish(m_ui->m_newPasswordConfirmationEdit);
  m_ui->m_newPasswordConfirmationEdit->style()->polish(m_ui->m_newPasswordConfirmationEdit);
  m_ui->m_newPasswordConfirmationEdit->update();

  m_ui->m_newPasswordTextLabel->style()->unpolish(m_ui->m_newPasswordTextLabel);
  m_ui->m_newPasswordTextLabel->style()->polish(m_ui->m_newPasswordTextLabel);
  m_ui->m_newPasswordTextLabel->update();
}

void ChangePasswordDialog::setOldPasswordError(bool _error) {
  m_ui->m_oldPasswordEdit->setProperty("errorState", _error);
  m_ui->m_oldPasswordTextLabel->setProperty("errorState", _error);
  m_ui->m_oldPasswordTextLabel->setText(_error ? tr("INCORRECT PASSWORD") : tr("OLD PASSWORD"));

  m_ui->m_oldPasswordEdit->style()->unpolish(m_ui->m_oldPasswordEdit);
  m_ui->m_oldPasswordEdit->style()->polish(m_ui->m_oldPasswordEdit);
  m_ui->m_oldPasswordEdit->update();

  m_ui->m_oldPasswordTextLabel->style()->unpolish(m_ui->m_oldPasswordTextLabel);
  m_ui->m_oldPasswordTextLabel->style()->polish(m_ui->m_oldPasswordTextLabel);
  m_ui->m_oldPasswordTextLabel->update();
}

void ChangePasswordDialog::checkPassword(const QString& _password) {
  bool passwordIsEmpty = m_ui->m_newPasswordEdit->text().trimmed().isEmpty() &&
    m_ui->m_newPasswordConfirmationEdit->text().trimmed().isEmpty();
  setEmptyPasswordError(passwordIsEmpty);
  bool confirmed = !(m_ui->m_newPasswordEdit->text().compare(m_ui->m_newPasswordConfirmationEdit->text()));
  setConfirmPasswordError(!confirmed);
  m_ui->m_okButton->setEnabled(!passwordIsEmpty && confirmed);
}

void ChangePasswordDialog::passwordChanged(const QString& _password) {
  setOldPasswordError(false);
}

}

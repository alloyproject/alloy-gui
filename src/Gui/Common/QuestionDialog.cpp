/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "QuestionDialog.h"

#include "ui_QuestionDialog.h"

namespace WalletGui {

QuestionDialog::QuestionDialog(const QString& _title, const QString& _text, QWidget* _parent) : QDialog(_parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint)),
  m_ui(new Ui::QuestionDialog) {
  m_ui->setupUi(this);
  setWindowTitle(_title);
  m_ui->m_questionLabel->setText(_text);
}

QuestionDialog::~QuestionDialog() {
}

}

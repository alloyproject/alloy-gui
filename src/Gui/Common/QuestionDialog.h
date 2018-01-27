/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QDialog>

namespace Ui {
class QuestionDialog;
}

namespace WalletGui {

class QuestionDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(QuestionDialog)

public:
  QuestionDialog(const QString& _title, const QString& _text, QWidget* _parent);
  ~QuestionDialog();

private:
  QScopedPointer<Ui::QuestionDialog> m_ui;
};

}

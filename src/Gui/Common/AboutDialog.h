/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QDialog>

namespace Ui {
class AboutDialog;
}

namespace WalletGui {

class AboutDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(AboutDialog)

public:
  explicit AboutDialog(QWidget* _parent);
  ~AboutDialog();

private:
  QScopedPointer<Ui::AboutDialog> m_ui;
};

}

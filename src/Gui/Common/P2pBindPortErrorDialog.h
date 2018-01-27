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
class P2pBindPortErrorDialog;
}

namespace WalletGui {

class P2pBindPortErrorDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(P2pBindPortErrorDialog)

public:
  P2pBindPortErrorDialog(quint16 _oldPort, quint16 _newPort, QWidget* _parent);
  ~P2pBindPortErrorDialog();

  quint16 getNewPort() const;
  void accept() override;

private:
  QScopedPointer<Ui::P2pBindPortErrorDialog> m_ui;
};

}

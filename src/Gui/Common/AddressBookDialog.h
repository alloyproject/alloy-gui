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

class QAbstractItemModel;

namespace Ui {
  class AddressBookDialog;
}

namespace WalletGui {

class AddressBookDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(AddressBookDialog)

public:
  AddressBookDialog(QAbstractItemModel* _addressBookModel, QWidget* _parent);
  ~AddressBookDialog();

  QString getAddress() const;

private:
  QScopedPointer<Ui::AddressBookDialog> m_ui;
};

}

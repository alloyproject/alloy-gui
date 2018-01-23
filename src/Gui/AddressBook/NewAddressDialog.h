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

class QPersistentModelIndex;

namespace Ui {
class NewAddressDialog;
}

namespace WalletGui {

class IAddressBookManager;
class IDonationManager;
class ICryptoNoteAdapter;

class NewAddressDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(NewAddressDialog)

public:
  NewAddressDialog(ICryptoNoteAdapter* _cryptoNoteAdapter, IAddressBookManager* _addressBookManager,
    IDonationManager* _donationManager, QWidget* _parent);
  NewAddressDialog(ICryptoNoteAdapter* _cryptoNoteAdapter, IAddressBookManager* _addressBookManager,
    IDonationManager* _donationManager, const QPersistentModelIndex& _index, QWidget* _parent);
  ~NewAddressDialog();

  QString getAddress() const;
  QString getLabel() const;
  bool hasDonationFlag() const;

  void setAddressError(bool _error);
  void setAddressDuplicationError(bool _error);
  void setLabelDuplicationError(bool _error);

private:
  QScopedPointer<Ui::NewAddressDialog> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  IAddressBookManager* m_addressBookManager;
  IDonationManager* m_donationManager;

  bool checkForErrors() const;

  Q_SLOT void validateAddress(const QString& _address);
  Q_SLOT void validateLabel(const QString& _label);
  Q_SLOT void donationCheckStateChanged(int _checkState);
};

}

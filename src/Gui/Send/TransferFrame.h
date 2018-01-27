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

#include <QFrame>

#include "Application/IWalletUiItem.h"

class QCompleter;

namespace Ui {
  class TransferFrame;
}

namespace WalletGui {

class ICryptoNoteAdapter;

class TransferFrame : public QFrame, public IWalletUiItem {
  Q_OBJECT
  Q_DISABLE_COPY(TransferFrame)

public:
  explicit TransferFrame(QWidget* _parent);
  ~TransferFrame();

  bool readyToSend() const;
  QString getAddress() const;
  QString getAmountString() const;
  QString getLabel() const;

  void setAddress(const QString& _address);
  void setAmount(qreal _amount);
  void setLabel(const QString& _label);

  void disableRemoveButton(bool _disable);
  void hideBorder();

  void setAddressError(bool _error = true);
  void setDuplicationError(bool _error = true);
  void setAmountFormatError(bool _error = true);
  void setInsufficientFundsError(bool _error = true);
  void setBigTransactionError(bool _error = true);
  void setLabelLikePaymentIdError(bool _error = true);

  // QObject
  virtual bool eventFilter(QObject* _object, QEvent* _event) override;

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;
  virtual void setAddressBookManager(IAddressBookManager* _addressBookManager) override;
  virtual void setMainWindow(QWidget* _mainWindow) override;
  virtual void setAddressBookModel(QAbstractItemModel* _model) override;

private:
  QScopedPointer<Ui::TransferFrame> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  IAddressBookManager* m_addressBookManager;
  QWidget* m_mainWindow;
  QAbstractItemModel* m_addressBookModel;
  QCompleter* m_addressCompleter;

  void validateAmount(double _amount);

  Q_SLOT void amountStringChanged(const QString& _amountString);
  Q_SLOT void addressChanged(const QString& _address);
  Q_SLOT void labelOrAddressChanged(const QString& _text);
  Q_SLOT void addressBookClicked();
  Q_SLOT void pasteClicked();

Q_SIGNALS:
  void amountStringChangedSignal(const QString& _amountString);
  void addressChangedSignal(const QString& _address);
};

}

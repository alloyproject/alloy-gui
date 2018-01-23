/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QFrame>
#include <QScrollArea>

#include "Application/IWalletUiItem.h"
#include "IAddressBookManager.h"
#include "IApplicationEventHandler.h"
#include "ICryptoNoteAdapter.h"
#include "IWalletAdapter.h"

namespace Ui {
class SendFrame;
}

namespace WalletGui {

class ICryptoNoteAdapter;
class SendGlassFrame;
class TransferFrame;

class SendFrame : public QFrame, public IWalletUiItem, public IWalletAdapterObserver, public IApplicationEventHandlerObserver,
  public ICryptoNoteAdapterObserver {
  Q_OBJECT
  Q_DISABLE_COPY(SendFrame)

public:
  explicit SendFrame(QWidget* _parent);
  ~SendFrame();

  void addRecipient(const QString& _address);

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;
  virtual void setApplicationEventHandler(IApplicationEventHandler *_applicationEventHandler) override;
  virtual void setAddressBookManager(IAddressBookManager* _addressBookManager) override;
  virtual void setDonationManager(IDonationManager* _donationManager) override;
  virtual void setMainWindow(QWidget* _mainWindow) override;
  virtual void setWalletStateModel(QAbstractItemModel* _model) override;
  virtual void setAddressBookModel(QAbstractItemModel* _model) override;

  // IWalletAdapterObserver
  Q_SLOT virtual void walletOpened() override;
  Q_SLOT virtual void walletOpenError(int _initStatus) override;
  Q_SLOT virtual void walletClosed() override;
  Q_SLOT virtual void passwordChanged() override;
  Q_SLOT virtual void synchronizationProgressUpdated(quint32 _current, quint32 _total) override;
  Q_SLOT virtual void synchronizationCompleted() override;
  Q_SLOT virtual void balanceUpdated(quint64 _actualBalance, quint64 _pendingBalance) override;
  Q_SLOT virtual void externalTransactionCreated(quintptr _transactionId, const FullTransactionInfo& _transaction) override;
  Q_SLOT virtual void transactionUpdated(quintptr _transactionId, const FullTransactionInfo& _transaction) override;

  // IApplicationEventHandlerObserver
  Q_SLOT virtual void urlReceived(const QUrl& _url) override;
  Q_SLOT virtual void screenLocked() override;
  Q_SLOT virtual void screenUnlocked() override;

  // ICryptoNoteAdapterObserver
  Q_SLOT virtual void cryptoNoteAdapterInitCompleted(int _status) override;
  Q_SLOT virtual void cryptoNoteAdapterDeinitCompleted() override;

private:
  QScopedPointer<Ui::SendFrame> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  IDonationManager* m_donationManager;
  IAddressBookManager* m_addressBookManager;
  IApplicationEventHandler* m_applicationEventHandler;
  QWidget* m_mainWindow;
  QList<TransferFrame*> m_transfers;
  SendGlassFrame* m_glassFrame;
  QAbstractItemModel* m_walletStateModel;
  QAbstractItemModel* m_addressBookModel;

  void processTranactionSendStatus(IWalletAdapter::SendTransactionStatus _status);
  void setPaymentIdError(bool _error);
  void setMixinError(bool _error);
  void updateSliderStyleSheet();
  void amountStringChanged(const QString& _amountString);
  void addressChanged(const QString& _address);
  bool readyToSend() const;

  Q_SLOT void addRecipientClicked();
  Q_SLOT void clearAll();
  Q_SLOT void sendClicked();
  Q_SLOT void mixinValueChanged(int _value);
  Q_SLOT void validatePaymentId(const QString& _paymentId);

Q_SIGNALS:
  void showTransactionsFrameSignal();
};
  
}

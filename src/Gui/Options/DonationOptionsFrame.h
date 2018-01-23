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

#include "IOptionsPage.h"
#include "Application/IWalletUiItem.h"

namespace Ui {
  class DonationOptionsFrame;
}

namespace WalletGui {

class DonationOptionsFrame : public QFrame, public IOptionsPage, public IWalletUiItem {
  Q_OBJECT
  Q_DISABLE_COPY(DonationOptionsFrame)

public:
  explicit DonationOptionsFrame(QWidget* _parent = nullptr);
  ~DonationOptionsFrame();

  virtual void load() override;
  virtual void save() override;
  virtual void setData(const QVariantMap& _data) override;
  virtual bool isEnabled() const override;
  virtual bool needToRestartApplication() const override;
  virtual bool canAccept() const override;

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;
  virtual void setDonationManager(IDonationManager* _donationManager) override;
  virtual void setAddressBookModel(QAbstractItemModel* _model) override;

private:
  QScopedPointer<Ui::DonationOptionsFrame> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  IDonationManager* m_donationManager;
  QAbstractItemModel* m_donationAddressesModel;

  int findDonationAddress(const QString& _address) const;
  Q_SLOT void donationMiningAmountChanged(int _value);
  Q_SLOT void donationChangeAmountChanged(int _value);
  Q_SLOT void donationChangeAmountChanged(double _value);

Q_SIGNALS:
  virtual void showRestartWarningSignal(bool _show) override;
  virtual void disableAcceptButtonSignal(bool _disable) override;
};

}

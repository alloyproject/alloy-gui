/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QObject>

namespace WalletGui {

class IDonationManagerObserver {
public:
  virtual ~IDonationManagerObserver() {}
  virtual void donationManagerOpened() = 0;
  virtual void donationManagerClosed() = 0;
  virtual void donationMiningEnabled(bool _on) = 0;
  virtual void donationMiningAddressChanged(const QString& _address) = 0;
  virtual void donationMiningAmountChanged(int _amount) = 0;
  virtual void donationChangeEnabled(bool _on) = 0;
  virtual void donationChangeAddressChanged(const QString& _address) = 0;
  virtual void donationChangeAmountChanged(int _amount) = 0;
};

class IDonationManager {
public:
  virtual ~IDonationManager() {}
  virtual bool isDonationMiningEnabled() const = 0;
  virtual QString getDonationMiningAddress() const = 0;
  virtual int getDonationMiningAmount() const = 0;

  virtual bool isDonationChangeEnabled() const = 0;
  virtual QString getDonationChangeAddress() const = 0;
  virtual int getDonationChangeAmount() const = 0;

  virtual void setDonationMiningEnabled(bool _on) = 0;
  virtual void setDonationMiningAddress(const QString& _address) = 0;
  virtual void setDonationMiningAmount(int _amount) = 0;

  virtual void setDonationChangeEnabled(bool _on) = 0;
  virtual void setDonationChangeAddress(const QString& _address) = 0;
  virtual void setDonationChangeAmount(int _amount) = 0;

  virtual void addObserver(IDonationManagerObserver* _observer) = 0;
  virtual void removeObserver(IDonationManagerObserver* _observer) = 0;
};

}

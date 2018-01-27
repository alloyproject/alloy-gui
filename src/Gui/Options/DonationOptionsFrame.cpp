/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "DonationOptionsFrame.h"
#include "Settings/Settings.h"
#include "DonationAddressesModel.h"
#include "ICryptoNoteAdapter.h"
#include "IDonationManager.h"
#include "INodeAdapter.h"
#include "IWalletAdapter.h"
#include "Models/AddressBookModel.h"
#include "Style/Style.h"

#include "ui_DonationOptionsFrame.h"

namespace WalletGui {

namespace {

const char DONATION_OPTIONS_STYLE_SHEET_TEMPLATE[] =
  "WalletGui--DonationOptionsFrame {"
    "background: #ffffff;"
  "}"

  "WalletGui--DonationOptionsFrame QSpinBox,"
  "WalletGui--DonationOptionsFrame QDoubleSpinBox,"
  "WalletGui--DonationOptionsFrame QComboBox {"
    "min-height: 25px;"
    "max-height: 25px;"
  "}"

  "WalletGui--DonationOptionsFrame QSpinBox,"
  "WalletGui--DonationOptionsFrame QDoubleSpinBox {"
    "min-width: 40px;"
  "}"

  "WalletGui--DonationOptionsFrame #m_enableDonationMiningCheck,"
  "WalletGui--DonationOptionsFrame #m_enableDonationChangeCheck {"
    "font-size: %fontSizeLarge%;"
    "font-weight: bold;"
  "}"

  "WalletGui--DonationOptionsFrame #m_enableDonationMiningCheck::indicator,"
  "WalletGui--DonationOptionsFrame #m_enableDonationChangeCheck::indicator {"
    "width: 20px;"
    "height: 20px;"
  "}";

}

DonationOptionsFrame::DonationOptionsFrame(QWidget *parent) : QFrame(parent), m_ui(new Ui::DonationOptionsFrame),
  m_cryptoNoteAdapter(nullptr), m_donationManager(nullptr), m_donationAddressesModel(nullptr) {
  m_ui->setupUi(this);
  m_ui->m_donationMiningFrame->setEnabled(false);
  m_ui->m_donationChangeFrame->setEnabled(false);
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(DONATION_OPTIONS_STYLE_SHEET_TEMPLATE));
}

DonationOptionsFrame::~DonationOptionsFrame() {
}

void DonationOptionsFrame::load() {
  Q_ASSERT(m_donationManager != nullptr);
  Q_ASSERT(m_donationAddressesModel != nullptr);

  m_ui->m_enableDonationMiningCheck->setChecked(m_donationAddressesModel->rowCount() > 0 &&
    m_donationManager->isDonationMiningEnabled());
  m_ui->m_enableDonationChangeCheck->setChecked(m_donationAddressesModel->rowCount() > 0 &&
    m_donationManager->isDonationChangeEnabled());
  m_ui->m_enableDonationMiningCheck->setEnabled(m_donationAddressesModel->rowCount() > 0);
  m_ui->m_enableDonationChangeCheck->setEnabled(m_donationAddressesModel->rowCount() > 0);
  m_ui->m_donationMiningAddressCombo->setModel(m_donationAddressesModel);
  m_ui->m_donationChangeAddressCombo->setModel(m_donationAddressesModel);
  m_ui->m_donationMiningAddressCombo->setCurrentIndex(findDonationAddress(m_donationManager->getDonationMiningAddress()));
  m_ui->m_donationChangeAddressCombo->setCurrentIndex(findDonationAddress(m_donationManager->getDonationChangeAddress()));
  m_ui->m_donationMiningAmountSlider->setValue(m_donationManager->getDonationMiningAmount());
  m_ui->m_donationChangeAmountSlider->setValue(m_donationManager->getDonationChangeAmount());
}

void DonationOptionsFrame::save() {
  m_donationManager->setDonationMiningAmount(m_ui->m_donationMiningAmountSlider->value());
  int miningAddressIndex = m_ui->m_donationMiningAddressCombo->currentIndex();
  if (miningAddressIndex != -1) {
    QString address = m_donationAddressesModel->index(miningAddressIndex, 0).data(AddressBookModel::ROLE_ADDRESS).toString();
    m_donationManager->setDonationMiningAddress(address);
  }

  m_donationManager->setDonationMiningEnabled(m_ui->m_enableDonationMiningCheck->checkState() == Qt::Checked);

  m_donationManager->setDonationChangeAmount(m_ui->m_donationChangeAmountSlider->value());
  int changeAddressIndex = m_ui->m_donationChangeAddressCombo->currentIndex();
  if (changeAddressIndex != -1) {
    QString address = m_donationAddressesModel->index(changeAddressIndex, 0).data(AddressBookModel::ROLE_ADDRESS).toString();
    m_donationManager->setDonationChangeAddress(address);
  }

  m_donationManager->setDonationChangeEnabled(m_ui->m_enableDonationChangeCheck->checkState() == Qt::Checked);
}

void DonationOptionsFrame::setData(const QVariantMap& _data) {
  Q_ASSERT(m_donationManager != nullptr);
  Q_ASSERT(m_donationAddressesModel != nullptr);
  QString label = _data.value("label").toString();
  QString address = _data.value("address").toString();
  QModelIndexList donationAddressIndexList = m_donationAddressesModel->match(m_donationAddressesModel->index(0, 0),
    AddressBookModel::ROLE_LABEL, label);
  for (const auto& donationAddressIndex : donationAddressIndexList) {
    if (donationAddressIndex.data(AddressBookModel::ROLE_ADDRESS).toString().compare(address, Qt::CaseSensitive) == 0) {
      m_ui->m_donationMiningAddressCombo->setCurrentIndex(donationAddressIndex.row());
      m_ui->m_donationChangeAddressCombo->setCurrentIndex(donationAddressIndex.row());
    }
  }

  m_ui->m_enableDonationMiningCheck->setCheckState(Qt::Checked);
  m_ui->m_enableDonationChangeCheck->setCheckState(Qt::Checked);
}

bool DonationOptionsFrame::isEnabled() const {
  Q_ASSERT(m_cryptoNoteAdapter != nullptr);
  return m_cryptoNoteAdapter->getNodeAdapter()->getWalletAdapter()->isOpen();
}

bool DonationOptionsFrame::needToRestartApplication() const {
  return false;
}

bool DonationOptionsFrame::canAccept() const {
  return true;
}

void DonationOptionsFrame::setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) {
  Q_ASSERT(_cryptoNoteAdapter != nullptr);
  m_cryptoNoteAdapter = _cryptoNoteAdapter;
}

void DonationOptionsFrame::setDonationManager(IDonationManager* _donationManager) {
  Q_ASSERT(_donationManager != nullptr);
  m_donationManager = _donationManager;
}

void DonationOptionsFrame::setAddressBookModel(QAbstractItemModel* _model) {
  m_donationAddressesModel = new DonationAddressesModel(_model, this);
}

int DonationOptionsFrame::findDonationAddress(const QString& _address) const {
  if (m_donationAddressesModel->rowCount() == 0) {
    return -1;
  }

  QModelIndexList indexes = m_donationAddressesModel->match(m_donationAddressesModel->index(0, 0), AddressBookModel::ROLE_ADDRESS,
    _address);
  if (indexes.isEmpty()) {
    return 0;
  }

  return indexes.first().row();
}

void DonationOptionsFrame::donationMiningAmountChanged(int _value) {
  if (m_ui->m_donationMiningAmountSlider->value() != _value) {
    m_ui->m_donationMiningAmountSlider->setValue(_value);
  }

  if (m_ui->m_donationMiningAmountSpin->value() != _value) {
    m_ui->m_donationMiningAmountSpin->setValue(_value);
  }
}

void DonationOptionsFrame::donationChangeAmountChanged(int _value) {
  m_ui->m_donationChangeAmountSpin->setValue(_value / 10.);
}

void DonationOptionsFrame::donationChangeAmountChanged(double _value) {
  m_ui->m_donationChangeAmountSlider->setValue(_value * 10);
}

}

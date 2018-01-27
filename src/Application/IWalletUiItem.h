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

class QAbstractItemModel;
class QWidget;

namespace WalletGui {

class ICryptoNoteAdapter;
class IAddressBookManager;
class IDonationManager;
class IOptimizationManager;
class IMiningManager;
class IApplicationEventHandler;
class INewsReader;

class IWalletUiItem {
public:
  virtual ~IWalletUiItem() {}
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) {}
  virtual void setAddressBookManager(IAddressBookManager* _addressBookManager) {}
  virtual void setOptimizationManager(IOptimizationManager* _optimizationManager) {}
  virtual void setDonationManager(IDonationManager* _donationManager) {}
  virtual void setMiningManager(IMiningManager* _miningManager) {}
  virtual void setApplicationEventHandler(IApplicationEventHandler* _applicationEventHandler) {}
  virtual void setBlogReader(INewsReader* _blogReader) {}
  virtual void setMainWindow(QWidget* _mainWindow) {}
  virtual void setTransactionsModel(QAbstractItemModel* _model) {}
  virtual void setSortedTransactionsModel(QAbstractItemModel* _model) {}
  virtual void setNodeStateModel(QAbstractItemModel* _model) {}
  virtual void setWalletStateModel(QAbstractItemModel* _model) {}
  virtual void setAddressBookModel(QAbstractItemModel* _model) {}
  virtual void setSortedAddressBookModel(QAbstractItemModel* _model) {}
  virtual void setBlockChainModel(QAbstractItemModel* _model) {}
  virtual void setTransactionPoolModel(QAbstractItemModel* _model) {}
  virtual void setMinerModel(QAbstractItemModel* _model) {}
  virtual void updateStyle() {}
};

}

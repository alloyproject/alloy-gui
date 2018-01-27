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
#include "Settings/Settings.h"

namespace Ui {
class OverviewFrame;
}

namespace WalletGui {

class ICryptoNoteAdapter;

class OverviewFrame : public QFrame, public IWalletUiItem, public ISettingsObserver {
  Q_OBJECT
  Q_DISABLE_COPY(OverviewFrame)

public:
  explicit OverviewFrame(QWidget* _parent);
  ~OverviewFrame();

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;
  virtual void setMiningManager(IMiningManager *_miningManager) override;
  virtual void setBlogReader(INewsReader* _blogReader) override;
  virtual void setMainWindow(QWidget* _mainWindow) override;
  virtual void setTransactionsModel(QAbstractItemModel* _model) override;
  virtual void setSortedTransactionsModel(QAbstractItemModel *_model) override;
  virtual void setTransactionPoolModel(QAbstractItemModel *_model) override;
  virtual void setNodeStateModel(QAbstractItemModel* _model) override;
  virtual void setWalletStateModel(QAbstractItemModel* _model) override;
  virtual void setMinerModel(QAbstractItemModel* _model) override;

  // ISettingsObserver
  virtual void settingsUpdated() override;

private:
  QScopedPointer<Ui::OverviewFrame> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  QWidget* m_mainWindow;
  QAbstractItemModel* m_transactionsModel;

  void rowsInserted(const QModelIndex& _parent, int _first, int _last);
  Q_SLOT void showTransactionDetails(const QModelIndex& _index);
};

}

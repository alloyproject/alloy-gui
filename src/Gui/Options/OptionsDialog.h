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
  class OptionsDialog;
}

namespace WalletGui {

class ICryptoNoteAdapter;
class IDonationManager;
class IOptimizationManager;

class OptionsDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(OptionsDialog)

public:
  OptionsDialog(ICryptoNoteAdapter* _cryptoNoteAdapter, IDonationManager* _donationManager,
    IOptimizationManager* _optimizationManager, QAbstractItemModel* _addressBookModel, QWidget* _parent);
  ~OptionsDialog();

  void setDonationAddress(const QString& _label, const QString& _address);
  bool needToRestartApplication() const;

  Q_SLOT void accept() override;

private:
  QScopedPointer<Ui::OptionsDialog> m_ui;
  bool m_needToRestart;

  Q_SLOT void showRestartWarning(bool _show);
  Q_SLOT void disableAcceptButton(bool _disable);
};

}

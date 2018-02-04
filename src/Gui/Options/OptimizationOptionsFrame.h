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

#include "IOptionsPage.h"
#include "Application/IWalletUiItem.h"

namespace Ui {
  class OptimizationOptionsFrame;
}

namespace WalletGui {

class OptimizationOptionsFrame : public QFrame, public IOptionsPage, public IWalletUiItem {
  Q_OBJECT
  Q_DISABLE_COPY(OptimizationOptionsFrame)

public:
  explicit OptimizationOptionsFrame(QWidget* _parent = nullptr);
  ~OptimizationOptionsFrame();

  // IOptionsPage
  virtual void load() override;
  virtual void save() override;
  virtual void setData(const QVariantMap& _data) override;
  virtual bool isEnabled() const override;
  virtual bool needToRestartApplication() const override;
  virtual bool canAccept() const override;

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;
  virtual void setOptimizationManager(IOptimizationManager* _optimizationManager) override;

private:
  QScopedPointer<Ui::OptimizationOptionsFrame> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  IOptimizationManager* m_optimizationManager;
  quint64 m_currencyMultiplier;

  void initOptimizationPeriods();
  void initThresholdCombo();
  void updateEstimateValue();
  Q_SLOT void thresholdChanged(int _value);
  Q_SLOT void mixinChanged(int _mixin);

Q_SIGNALS:
  void showRestartWarningSignal(bool _show) override;
  void disableAcceptButtonSignal(bool _disable) override;
};

}

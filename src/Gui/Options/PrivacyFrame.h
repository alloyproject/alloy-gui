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
#include "IOptionsPage.h"

namespace Ui {
  class PrivacyFrame;
}

namespace WalletGui {

class PrivacyFrame : public QFrame, public IOptionsPage, public IWalletUiItem {
  Q_OBJECT
  Q_DISABLE_COPY(PrivacyFrame)

public:
  explicit PrivacyFrame(QWidget* _parent = nullptr);
  ~PrivacyFrame();

  // IOptionsPage
  virtual void load() override;
  virtual void save() override;
  virtual void setData(const QVariantMap& _data) override;
  virtual bool isEnabled() const override;
  virtual bool needToRestartApplication() const override;
  virtual bool canAccept() const override;

private:
  QScopedPointer<Ui::PrivacyFrame> m_ui;

Q_SIGNALS:
  void showRestartWarningSignal(bool _show) override;
  void disableAcceptButtonSignal(bool _disable) override;
};

}

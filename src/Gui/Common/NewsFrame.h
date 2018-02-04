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

#include "INewsReader.h"
#include "Application/IWalletUiItem.h"

namespace Ui {
  class NewsFrame;
}

namespace WalletGui {

class NewsFrame : public QFrame, public INewsReaderObserver, public IWalletUiItem {
  Q_OBJECT
  Q_DISABLE_COPY(NewsFrame)

public:
  explicit NewsFrame(QWidget* _parent);
  ~NewsFrame();

  void setNewsReader(INewsReader* _reader);

  // QObject
  virtual bool eventFilter(QObject* _object, QEvent* _event) override;

  // INewsReaderObserver
  Q_SLOT virtual void newMessage() override;

protected:
  virtual void resizeEvent(QResizeEvent* _event) override;

private:
  QScopedPointer<Ui::NewsFrame> m_ui;
  INewsReader* m_reader;
  QString m_currentMessageId;

  Q_INVOKABLE void updateText();
  void updateSourceText();
  void updateScrollButtons();

  Q_SLOT void upClicked();
  Q_SLOT void downClicked();
  static QString getElidedText(const QString& _text, const QString& _timeString, const QSize& _size);

Q_SIGNALS:
  void linkActivatedSignal(const QString& _title);
};

}

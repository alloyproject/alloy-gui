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

#include <QDateTime>

class QPixmap;

namespace WalletGui {

class INewsReaderObserver {
public:
  virtual ~INewsReaderObserver() {}
  virtual void newMessage() = 0;
};

class INewsReader {
public:
  virtual ~INewsReader() {}
  virtual QString getName() const = 0;
  virtual QPixmap getIcon() const = 0;
  virtual QString getLastMessageId() const = 0;

  virtual QString getNextMessageId(const QString& _currentMessageId) const = 0;
  virtual QString getPrevMessageId(const QString& _currentMessageId) const = 0;
  virtual QString getMessageHeader(const QString& _messageId) const = 0;
  virtual QString getMessageSourceUrl(const QString& _messageId) const = 0;
  virtual QString getMessageText(const QString& _messageId) const = 0;
  virtual QDateTime getMessageTime(const QString& _messageId) const = 0;

  virtual void init() = 0;
  virtual void deinit() = 0;
  virtual void addObserver(INewsReaderObserver* _observer) = 0;
  virtual void removeObserver(INewsReaderObserver* _observer) = 0;
};

}

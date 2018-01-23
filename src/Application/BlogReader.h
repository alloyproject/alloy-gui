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

#include "INewsReader.h"

class QNetworkAccessManager;
class QNetworkReply;

namespace WalletGui {

class BlogReader : public QObject, public INewsReader {
  Q_OBJECT
  Q_DISABLE_COPY(BlogReader)

public:
  explicit BlogReader(QObject* _parent);
  ~BlogReader();

  // INewsReader
  virtual QString getName() const override;
  virtual QPixmap getIcon() const override;
  virtual QString getLastMessageId() const override;
  virtual QString getNextMessageId(const QString& _currentMessageId) const override;
  virtual QString getPrevMessageId(const QString& _currentMessageId) const override;
  virtual QString getMessageHeader(const QString& _messageId) const override;
  virtual QString getMessageSourceUrl(const QString& _messageId) const override;
  virtual QString getMessageText(const QString& _messageId) const override;
  virtual QDateTime getMessageTime(const QString& _messageId) const override;
  virtual void init() override;
  virtual void deinit() override;
  virtual void addObserver(INewsReaderObserver* _observer) override;
  virtual void removeObserver(INewsReaderObserver* _observer) override;

protected:
  virtual void timerEvent(QTimerEvent* _event) override;

private:
  struct MessageItem {
    QString messageId;
    QString messageSourceUrl;
    QString messageTitle;
    QString messageText;
    QDateTime messageTime;
  };

  QNetworkAccessManager* m_networkManager;
  QNetworkReply* m_activeReply;
  QByteArray m_dataBuffer;
  QList<MessageItem> m_messages;
  QHash<QString, int> m_messageIdIndex;
  int m_updateTimerId;

  void getBlogRequest();
  void blogReplyError(int _errorCode);
  void blogReplyFinished();
  void blogReplyReadyRead();
  void processBlogReplyData(const QString& _data);

  static QByteArray readFromReply(QNetworkReply* _reply);

Q_SIGNALS:
  void newMessageSignal();
};

}

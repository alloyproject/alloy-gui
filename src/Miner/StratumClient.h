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
#include <QMap>
#include <QMetaObject>
#include <QObject>
#include <QReadWriteLock>
#include <QTcpSocket>

#include <atomic>

#include "IPoolClient.h"
#include "IMinerWorker.h"

class QTcpSocket;

namespace WalletGui {

struct JsonRpcRequest {
  QString method;
  QVariantMap params;
};

struct Job;

class StratumClient : public QObject, public IPoolClient, public IMinerWorkerObserver {
  Q_OBJECT
  Q_DISABLE_COPY(StratumClient)

public:
  StratumClient(Job& _job, QReadWriteLock& _jobLock, std::atomic<quint32>& _nonce, const QString& _host,
    quint16 _port, quint32 _difficulty, const QString& _login, const QString& _password, QObject *parent);
  ~StratumClient();

  // IPoolClient
  virtual void start() override;
  virtual void stop() override;
  virtual QString getLogin() const override;
  virtual QString getPoolHost() const override;
  virtual quint16 getPoolPort() const override;
  virtual quint32 getDifficulty() const override;
  virtual quint32 getGoodShareCount() const override;
  virtual quint32 getBadShareCount() const override;
  virtual quint32 getConnectionErrorCount() const override;
  virtual QDateTime getLastConnectionErrorTime() const override;
  virtual void addObserver(IPoolClientObserver* _observer) override;
  virtual void removeObserver(IPoolClientObserver* _observer) override;

  // IMinerWorkerObserver
  Q_SLOT virtual void shareFound(const QString& _jobId, quint32 _nonce, const QByteArray& _result) override;

protected:
  void timerEvent(QTimerEvent* _event) override;

private:
  const QString m_host;
  const quint16 m_port;
  quint32 m_difficulty;
  const QString m_login;
  const QString m_password;
  QTcpSocket* m_socket;
  QString m_currentSessionId;
  Job& m_currentJob;
  QReadWriteLock& m_jobLock;
  std::atomic<quint32>& m_nonce;
  quint64 m_requestCounter;
  QMap<quint64, JsonRpcRequest> m_activeRequestMap;
  int m_reconnectTimerId;
  int m_responseTimerId;
  quint32 m_goodShareCount;
  quint32 m_badShareCount;
  quint32 m_connectionErrorCount;
  QDateTime m_lastConnectionError;
  QMap<IPoolClientObserver*, QList<QMetaObject::Connection>> m_observerConnections;

  void connectedToHost();
  void reconnect();
  void resetReconnectionTimer();
  void resetResponseTimer();
  void readyRead();
  void processData(const QJsonObject& _jsonObject);
  void processNotification(const QJsonObject& _jsonObject);
  void socketError(QTcpSocket::SocketError _error);
  QByteArray makeJsonRequest(const JsonRpcRequest& _request);
  void sendRequest(const JsonRpcRequest& _request);
  void loginRequest();

  void processLoginResponce(const QJsonObject& _responceObject, const JsonRpcRequest& _request);
  void processSubmitResponce(const QJsonObject& _responceObject, const JsonRpcRequest& _request);
  void processJobNotification(const QJsonObject& _notificationObject);
  void updateJob(const QVariantMap& _newJobMap);
  Q_INVOKABLE void submitShare(const QString& _jobId, quint32 _nonce, const QByteArray& _result);


Q_SIGNALS:
  void startedSignal();
  void stoppedSignal();
  void socketErrorSignal();
  void difficultyChangedSignal(quint32 _difficulty);
  void goodShareCountChangedSignal(quint32 _goodShareCount);
  void badShareCountChangedSignal(quint32 _badShareCount);
  void connectionErrorCountChangedSignal(quint32 _connectionErrorCount);
  void lastConnectionErrorTimeChangedSignal(const QDateTime& _connectionErrorTime);
};

}

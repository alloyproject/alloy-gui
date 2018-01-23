/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QTcpServer>

namespace QJsonRpc {

class JsonRpcObject;
class JsonRpcRequest;
class JsonRpcResponse;
class JsonRpcNotification;

class JsonRpcServer : public QTcpServer {
  Q_OBJECT
  Q_DISABLE_COPY(JsonRpcServer)

public:
  explicit JsonRpcServer(QObject* _parent);
  virtual ~JsonRpcServer();

  void setHandler(QObject* _jsonRpcHandler);

protected:
  void sendNotification(const JsonRpcNotification& _notification);

private:
  QObject* m_handler;

  void onAcceptError(QAbstractSocket::SocketError _socketError);
  void onNewConnection();
  void onSocketDisconneced();
  void onSocketError(QAbstractSocket::SocketError _socketError);
  void onSocketReadyRead();
  QJsonValue processJsonValue(const QJsonValue& _request);
  void sendError(QTcpSocket* _socket, int _errorCode, const QString& _errorMessage, const QString& _errorData);
  void sendObject(QTcpSocket* _socket, const JsonRpcObject& _object);
  void sendJson(QTcpSocket* _socket, const QJsonValue& _jsonValue);
};

}

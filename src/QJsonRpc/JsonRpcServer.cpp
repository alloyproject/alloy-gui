/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QJsonArray>
#include <QJsonParseError>
#include <QTcpSocket>
#include "QTextStream"

#include "JsonRpcServer.h"
#include "JsonRpcNotification.h"
#include "JsonRpcObjectFactory.h"
#include "JsonRpcResponse.h"
#include "JsonRpcRequest.h"

namespace QJsonRpc {

JsonRpcServer::JsonRpcServer(QObject* _parent) : QTcpServer(_parent), m_handler(nullptr) {
  connect(this, &JsonRpcServer::acceptError, this, &JsonRpcServer::onAcceptError);
  connect(this, &JsonRpcServer::newConnection, this, &JsonRpcServer::onNewConnection);
}

JsonRpcServer::~JsonRpcServer() {
}

void JsonRpcServer::setHandler(QObject* _jsonRpcHandler) {
  m_handler = _jsonRpcHandler;
}

void JsonRpcServer::sendNotification(const JsonRpcNotification& _notification) {
  Q_ASSERT(_notification.isValid());
  QList<QTcpSocket*> clients = findChildren<QTcpSocket*>();
  for (QTcpSocket* socket : clients) {
    sendObject(socket, _notification);
  }
}

void JsonRpcServer::onAcceptError(QAbstractSocket::SocketError _socketError) {

}

void JsonRpcServer::onNewConnection() {
  QTcpSocket* socket = nextPendingConnection();
  while (socket != nullptr) {
    qDebug("[JsonRpcServer] New connection from %s", qPrintable(socket->peerAddress().toString()));
    connect(socket, &QTcpSocket::disconnected, this, &JsonRpcServer::onSocketDisconneced);
    connect(socket, static_cast<void(QTcpSocket::*)(QAbstractSocket::SocketError)>(&QTcpSocket::error),
      this, &JsonRpcServer::onSocketError);
    connect(socket, &QTcpSocket::readyRead, this, &JsonRpcServer::onSocketReadyRead);
    socket = nextPendingConnection();
  }
}

void JsonRpcServer::onSocketDisconneced() {
  qDebug("[JsonRpcServer] Connection from %s closed", qPrintable(reinterpret_cast<QTcpSocket*>(sender())->peerAddress().toString()));
  sender()->deleteLater();
}

void JsonRpcServer::onSocketError(QAbstractSocket::SocketError _socketError) {
  QTcpSocket* socket = reinterpret_cast<QTcpSocket*>(sender());
  qWarning("[JsonRpcServer] Connection error: %s", qPrintable(socket->errorString()));
  sender()->deleteLater();
}

void JsonRpcServer::onSocketReadyRead() {
  Q_ASSERT(m_handler != nullptr);
  QTcpSocket* socket = reinterpret_cast<QTcpSocket*>(sender());
  QTextStream readStream(socket);
  while (!readStream.atEnd()) {
    QByteArray data = readStream.readLine().toUtf8();
    QJsonParseError parseError;
    QJsonDocument jsonDocument = QJsonDocument::fromJson(data, &parseError);
    if (parseError.error != QJsonParseError::NoError) {
      sendError(socket, JsonRpcObject::JSON_RPC_PARSE_ERROR, JsonRpcObject::JSON_RPC_PARSE_ERROR_MESSAGE, parseError.errorString());
      continue;
    }

    if (jsonDocument.isArray()) {
      QJsonArray requestArray = jsonDocument.array();
      if (requestArray.isEmpty()) {
        sendError(socket, JsonRpcObject::JSON_RPC_INVALID_REQUEST_ERROR, JsonRpcObject::JSON_RPC_INVALID_REQUEST_ERROR_MESSAGE, QString());
        continue;
      }

      QJsonArray responseArray;
      for (const QJsonValue& request : requestArray) {
        QJsonValue responseJsonValue = processJsonValue(request);
        if (!responseJsonValue.isNull()) {
          responseArray.append(responseJsonValue);
        }
      }

      if (!responseArray.isEmpty()) {
        sendJson(socket, responseArray);
      }
    } else if (jsonDocument.isObject()) {
      QJsonValue responseJsonValue = processJsonValue(jsonDocument.object());
      if (!responseJsonValue.isNull()) {
        sendJson(socket, responseJsonValue);
      }
    }
  }
}

QJsonValue JsonRpcServer::processJsonValue(const QJsonValue& _request) {
  int errorCode = 0;
  QString errorString;
  QString errorData;
  QScopedPointer<JsonRpcObject> jsonRpcObject(JsonRpcObjectFactory::createJsonRpcObject(_request, errorCode, errorString, errorData));
  if (jsonRpcObject.isNull()) {
    JsonRpcResponse errorResponse;
    errorResponse.setError(errorCode, errorString, errorData);
    return errorResponse.toJsonObject();
  }

  if (jsonRpcObject->isRequest()) {
    const JsonRpcRequest& request = static_cast<JsonRpcRequest&>(*jsonRpcObject);
    JsonRpcResponse response;
    response.setId(request.getId());
    qDebug("[JsonRpcServer] Invoking method: %s", qPrintable(request.getMethod()));
    if (!QMetaObject::invokeMethod(m_handler, request.getMethod().toUtf8().constData(), Qt::DirectConnection,
      Q_ARG(QJsonRpc::JsonRpcRequest, request), Q_RETURN_ARG(QJsonRpc::JsonRpcResponse&, response))) {
      response.setError(JsonRpcObject::JSON_RPC_METHOD_NOT_FOUND_ERROR, JsonRpcObject::JSON_RPC_METHOD_NOT_FOUND_ERROR_MESSAGE,
        QVariant());
      return response.toJsonObject();
    }

    Q_ASSERT(response.isValid());
    return response.toJsonObject();
  } else if (jsonRpcObject->isNotification()) {
    const JsonRpcNotification& notification = static_cast<JsonRpcNotification&>(*jsonRpcObject);
    QMetaObject::invokeMethod(m_handler, notification.getMethod().toUtf8().constData(), Qt::DirectConnection,
      Q_ARG(QJsonRpc::JsonRpcNotification, notification));
  }

  return QJsonValue();
}

void JsonRpcServer::sendError(QTcpSocket* _socket, int _errorCode, const QString& _errorMessage, const QString& _errorData) {
  JsonRpcResponse errorResponse;
  errorResponse.setId(QString::null);
  errorResponse.setError(_errorCode, _errorMessage, _errorData);
  sendObject(_socket, errorResponse);
}

void JsonRpcServer::sendObject(QTcpSocket* _socket, const JsonRpcObject& _object) {
  Q_ASSERT(_object.isValid());
  Q_ASSERT(_socket != nullptr);
  QTextStream writeStream(_socket);
  writeStream << _object.toString() << endl;
}

void JsonRpcServer::sendJson(QTcpSocket* _socket, const QJsonValue& _jsonValue) {
  Q_ASSERT(_socket != nullptr);
  QByteArray data;
  if (_jsonValue.isArray()) {
    data = QJsonDocument(_jsonValue.toArray()).toJson(QJsonDocument::Compact);
  } else if (_jsonValue.isObject()) {
    data = QJsonDocument(_jsonValue.toObject()).toJson(QJsonDocument::Compact);
  }

  QTextStream writeStream(_socket);
  writeStream << data << endl;
}

}

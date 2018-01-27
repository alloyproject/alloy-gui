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

#include <QJsonObject>
#include <QString>

namespace QJsonRpc {

class JsonRpcObject {
public:
  enum JsonRpcError {
    JSON_RPC_PARSE_ERROR = -32700, JSON_RPC_INVALID_REQUEST_ERROR = -32600, JSON_RPC_METHOD_NOT_FOUND_ERROR = -32601
  };

  static const char JSON_RPC_PARSE_ERROR_MESSAGE[];
  static const char JSON_RPC_INVALID_REQUEST_ERROR_MESSAGE[];
  static const char JSON_RPC_METHOD_NOT_FOUND_ERROR_MESSAGE[];

  static const QString jsonRpcVersion;
  static const QString jsonRpcTagName;
  static const QString idTagName;
  static const QString methodTagName;
  static const QString paramsTagName;
  static const QString resultTagName;
  static const QString errorTagName;
  static const QString errorCodeTagName;
  static const QString errorMessageTagName;
  static const QString errorDataTagName;

  virtual ~JsonRpcObject();
  virtual bool isValid() const;
  virtual QByteArray toString() const;
  virtual QJsonObject toJsonObject() const;
  virtual QString getJsonRpc() const;

  bool isRequest() const;
  bool isResponse() const;
  bool isNotification() const;

  static bool isValidJsonRpcRequest(const QJsonObject& _jsonObject);
  static bool isValidJsonRpcResponse(const QJsonObject& _jsonObject);
  static bool isValidJsonRpcNotification(const QJsonObject& _jsonObject);

protected:
  enum JsonRpcObjectType {
    TYPE_REQUEST, TYPE_RESPONSE, TYPE_NOTIFICATION
  };

  explicit JsonRpcObject(JsonRpcObjectType _objectType);
  JsonRpcObject(const QJsonObject& _jsonObject, JsonRpcObjectType _objectType);

  QJsonValue getValue(const QString& _name) const;
  bool contains(const QString& _name) const;
  void setValue(const QString& _name, const QJsonValue& _value);

private:
  QJsonObject m_jsonObject;
  JsonRpcObjectType m_objectType;
};

}

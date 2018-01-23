/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

#include "JsonRpcObjectFactory.h"
#include "JsonRpcNotification.h"
#include "JsonRpcRequest.h"
#include "JsonRpcResponse.h"

namespace QJsonRpc {

JsonRpcObject* JsonRpcObjectFactory::createJsonRpcObject(const QJsonValue& _jsonValue, int& _jsonRpcErrorCode,
  QString& _jsonRpcErrorString, QString& _jsonRpcErrorData) {
  if (_jsonValue.isObject()) {
    return parseJsonRpcObject(_jsonValue.toObject(), _jsonRpcErrorCode, _jsonRpcErrorString,
      _jsonRpcErrorData);
  }

  _jsonRpcErrorCode = JsonRpcObject::JSON_RPC_INVALID_REQUEST_ERROR;
  _jsonRpcErrorString = JsonRpcObject::JSON_RPC_INVALID_REQUEST_ERROR_MESSAGE;
  return nullptr;
}

JsonRpcObject* JsonRpcObjectFactory::parseJsonRpcObject(const QJsonObject& _jsonObject, int& _jsonRpcErrorCode, QString& _jsonRpcErrorString,
  QString& _jsonRpcErrorData) {
  if (!_jsonObject.contains(JsonRpcObject::jsonRpcTagName) ||
    _jsonObject.value(JsonRpcObject::jsonRpcTagName).toString().compare(JsonRpcObject::jsonRpcVersion)) {
    _jsonRpcErrorCode = JsonRpcObject::JSON_RPC_INVALID_REQUEST_ERROR;
    _jsonRpcErrorString = JsonRpcObject::JSON_RPC_INVALID_REQUEST_ERROR_MESSAGE;
    _jsonRpcErrorData = "Incorrect JSON RPC version";
    return nullptr;
  }

  if (JsonRpcObject::isValidJsonRpcRequest(_jsonObject)) {
    return new JsonRpcRequest(_jsonObject);
  }

  if (JsonRpcObject::isValidJsonRpcResponse(_jsonObject)) {
    return new JsonRpcResponse(_jsonObject);
  }

  if (JsonRpcObject::isValidJsonRpcNotification(_jsonObject)) {
    return new JsonRpcNotification(_jsonObject);
  }

  _jsonRpcErrorCode = JsonRpcObject::JSON_RPC_INVALID_REQUEST_ERROR;
  _jsonRpcErrorString = JsonRpcObject::JSON_RPC_INVALID_REQUEST_ERROR_MESSAGE;
  return nullptr;
}

}

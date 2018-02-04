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
#include <QJsonDocument>

#include "JsonRpcRequest.h"

namespace QJsonRpc {

JsonRpcRequest::JsonRpcRequest() : JsonRpcObject(TYPE_REQUEST) {
}

JsonRpcRequest::JsonRpcRequest(const QJsonObject& _jsonObject) : JsonRpcObject(_jsonObject, TYPE_REQUEST) {
}

JsonRpcRequest::~JsonRpcRequest() {
}

QString JsonRpcRequest::getId() const {
  return getValue(idTagName).toString();
}

QString JsonRpcRequest::getMethod() const {
  return getValue(methodTagName).toString();
}

QVariantList JsonRpcRequest::getParamsAsArray() const {
  return getValue(paramsTagName).toArray().toVariantList();
}

QVariantMap JsonRpcRequest::getParamsAsObject() const {
  return getValue(paramsTagName).toObject().toVariantMap();
}

void JsonRpcRequest::setId(const QString& _id) {
  QJsonValue id(_id.isNull() ? QJsonValue::Null : QJsonValue(_id));
  setValue(idTagName, id);
}

void JsonRpcRequest::setMethod(const QString& _method) {
  setValue(methodTagName, _method);
}

void JsonRpcRequest::setParamsFromArray(const QVariantList& _variantList) {
  setValue(paramsTagName, QJsonArray::fromVariantList(_variantList));
}

void JsonRpcRequest::setParamsFromObject(const QVariantMap& _variantMap) {
  setValue(paramsTagName, QJsonObject::fromVariantMap(_variantMap));
}

}

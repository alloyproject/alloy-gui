/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QJsonObject>
#include <QVariant>

#include "JsonRpcObject.h"

namespace QJsonRpc {

class JsonRpcRequest;

class JsonRpcResponse : public JsonRpcObject {
  Q_DISABLE_COPY(JsonRpcResponse)

public:
  JsonRpcResponse();
  explicit JsonRpcResponse(const QJsonObject& _jsonObject);
  virtual ~JsonRpcResponse();

  QString getId() const;
  QVariantList getResultAsArray() const;
  QVariantMap getResultAsObject() const;
  bool isErrorResponse() const;
  int getErrorCode() const;
  QString getErrorMessage() const;
  QVariant getErrorData() const;

  void setId(const QString& _id);
  void setResultFromArray(const QVariantList& _variantList);
  void setResultFromObject(const QVariantMap& _variantMap);
  void setError(int _errorCode, const QString& _errorMessage, const QVariant& _errorData);
};

}

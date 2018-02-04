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
#include <QVariant>

#include "JsonRpcObject.h"

namespace QJsonRpc {

class JsonRpcRequest : public JsonRpcObject {
  Q_DISABLE_COPY(JsonRpcRequest)

public:
  JsonRpcRequest();
  explicit JsonRpcRequest(const QJsonObject& _jsonObject);
  virtual ~JsonRpcRequest();

  QString getId() const;
  QString getMethod() const;
  QVariantList getParamsAsArray() const;
  QVariantMap getParamsAsObject() const;

  void setId(const QString& _id);
  void setMethod(const QString& _method);
  void setParamsFromArray(const QVariantList& _variantList);
  void setParamsFromObject(const QVariantMap& _variantMap);
};

}

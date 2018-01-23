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

class JsonRpcNotification : public JsonRpcObject {
  Q_DISABLE_COPY(JsonRpcNotification)

public:
  JsonRpcNotification();
  explicit JsonRpcNotification(const QJsonObject& _jsonObject);
  virtual ~JsonRpcNotification();

  QString getMethod() const;
  QVariantList getParamsAsArray() const;
  QVariantMap getParamsAsObject() const;

  void setMethod(const QString& _method);
  void setParamsFromArray(const QVariantList& _variantList);
  void setParamsFromObject(const QVariantMap& _variantMap);
};

}

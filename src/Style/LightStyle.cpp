/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "LightStyle.h"

namespace WalletGui {

LightStyle::LightStyle() : Style("light", "Light") {

}

QString LightStyle::statusBarBackgroundColor() const {
  return "#e7e7e7";
}

QString LightStyle::statusBarFontColor() const {
  return "#000000";
}

QString LightStyle::headerBackgroundColor() const {
  return "#e7e7e7";
}

QString LightStyle::headerBorderColor() const {
  return "#dddddd";
}

QString LightStyle::addressFontColor() const {
  return "#000000";
}

QString LightStyle::balanceFontColor() const {
  return "#000000";
}

QString LightStyle::toolButtonBackgroundColorNormal() const {
  return "#edf0f7";
}

QString LightStyle::toolButtonBackgroundColorHover() const {
  return "#d1deeb";
}

QString LightStyle::toolButtonBackgroundColorPressed() const {
  return "#5f9cc7";
}

QString LightStyle::toolButtonFontColorNormal() const {
  return "#000000";
}

QString LightStyle::toolButtonFontColorDisabled() const {
  return "#4d000000";
}

QString LightStyle::toolBarBorderColor() const {
  return "#dddddd";
}

QString LightStyle::getWalletSyncGifFile() const {
  return QString(":icons/light/wallet-sync");
}

QPixmap LightStyle::getLogoPixmap() const {
  return QPixmap(QString(":icons/light/logo"));
}

QPixmap LightStyle::getBalanceIcon() const {
  return QPixmap(QString(":icons/light/balance"));
}

QPixmap LightStyle::getConnectedIcon() const {
  return QPixmap(QString(":icons/light/connected"));
}

QPixmap LightStyle::getDisconnectedIcon() const {
  return QPixmap(QString(":icons/light/disconnected"));
}

QPixmap LightStyle::getEncryptedIcon() const {
  return QPixmap(QString(":icons/light/encrypted"));
}

QPixmap LightStyle::getNotEncryptedIcon() const {
  return QPixmap(QString(":icons/light/decrypted"));
}

QPixmap LightStyle::getSyncedIcon() const {
  return QPixmap(QString(":icons/light/synced"));
}

}

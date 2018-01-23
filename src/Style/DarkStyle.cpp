/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "DarkStyle.h"

namespace WalletGui {

DarkStyle::DarkStyle() : Style("dark", "Dark") {

}

QString DarkStyle::statusBarBackgroundColor() const {
  return "#202020";
}

QString DarkStyle::statusBarFontColor() const {
  return "#ffffff";
}

QString DarkStyle::headerBackgroundColor() const {
  return "#202020";
}

QString DarkStyle::headerBorderColor() const {
  return "#202020";
}

QString DarkStyle::addressFontColor() const {
  return "#ffffff";
}

QString DarkStyle::balanceFontColor() const {
  return "#ffffff";
}

QString DarkStyle::toolButtonBackgroundColorNormal() const {
  return "#2e4558";
}

QString DarkStyle::toolButtonBackgroundColorHover() const {
  return "#253949";
}

QString DarkStyle::toolButtonBackgroundColorPressed() const {
  return "#1c2e3c";
}

QString DarkStyle::toolButtonFontColorNormal() const {
  return "#ffffff";
}

QString DarkStyle::toolButtonFontColorDisabled() const {
  return "#b2ffffff";
}

QString DarkStyle::toolBarBorderColor() const {
  return "#2e4558";
}

QString DarkStyle::getWalletSyncGifFile() const {
  return QString(":icons/dark/wallet-sync");
}

QPixmap DarkStyle::getLogoPixmap() const {
  return QPixmap(QString(":icons/dark/logo"));
}

QPixmap DarkStyle::getBalanceIcon() const {
  return QPixmap(QString(":icons/dark/balance"));
}

QPixmap DarkStyle::getConnectedIcon() const {
  return QPixmap(QString(":icons/dark/connected"));
}

QPixmap DarkStyle::getDisconnectedIcon() const {
  return QPixmap(QString(":icons/dark/disconnected"));
}

QPixmap DarkStyle::getEncryptedIcon() const {
  return QPixmap(QString(":icons/dark/encrypted"));
}

QPixmap DarkStyle::getNotEncryptedIcon() const {
  return QPixmap(QString(":icons/dark/decrypted"));
}

QPixmap DarkStyle::getSyncedIcon() const {
  return QPixmap(QString(":icons/dark/synced"));
}

}

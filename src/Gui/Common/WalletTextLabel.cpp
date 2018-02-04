/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include "WalletTextLabel.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char WALLET_TEXT_LABEL_STYLE_SHEET_TEMPLATE[] =
  "WalletGui--WalletTextLabel {"
    "border: 1px solid transparent;"
  "}"

  "WalletGui--WalletTextLabel[errorState=\"true\"] {"
      "color: %fontColorRed%;"
  "}"

  "WalletGui--WalletTinyGrayTextLabel {"
    "color: %fontColorGray%;"
    "font-size: %fontSizeTiny%;"
  "}"

  "WalletGui--WalletSmallGrayTextLabel {"
    "color: %fontColorGray%;"
    "font-size: %fontSizeSmall%;"
  "}"

  "WalletGui--WalletSmallGreenBoldTextLabel {"
    "color: %fontColorGreen%;"
    "font-size: %fontSizeSmall%;"
    "font-weight: bold;"
  "}"

  "WalletGui--WalletSmallBlackTextLabel {"
    "color: #000000;"
    "font-size: %fontSizeSmall%;"
  "}"

  "WalletGui--WalletNormalGrayTextLabel {"
    "color: %fontColorGray%;"
    "font-size: %fontSizeNormal%;"
  "}"

  "WalletGui--WalletNormalGreenBoldTextLabel {"
    "color: %fontColorGreen%;"
    "font-size: %fontSizeNormal%;"
    "font-weight: bold;"
  "}"

  "WalletGui--WalletExtraNormalGrayTextLabel {"
    "color: %fontColorGray%;"
    "font-size: %fontSizeExtraNormal%;"
  "}"

  "WalletGui--WalletNormalBlackTextLabel {"
    "color: #000000;"
    "font-size: %fontSizeNormal%;"
  "}"

  "WalletGui--WalletExtraNormalBlackTextLabel {"
    "color: #000000;"
    "font-size: %fontSizeExtraNormal%;"
  "}"

  "WalletGui--WalletLargeBlackTextLabel {"
    "color: #000000;"
    "font-size: %fontSizeLarge%;"
  "}"

  "WalletGui--WalletExtraLargeBlackTextLabel {"
    "color: #000000;"
    "font-size: %fontSizeExtraLarge%;"
  "}"

  "WalletGui--WalletHeaderLabel {"
    "min-height: 17;"
    "font-size: %fontSizeLarge%;"
    "font-weight: bold;"
  "}";

}

WalletTextLabel::WalletTextLabel(QWidget* _parent) : QLabel(_parent) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_TEXT_LABEL_STYLE_SHEET_TEMPLATE));
}

WalletTextLabel::~WalletTextLabel() {
}

WalletTinyGrayTextLabel::WalletTinyGrayTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletTinyGrayTextLabel::~WalletTinyGrayTextLabel() {
}

WalletSmallGrayTextLabel::WalletSmallGrayTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletSmallGrayTextLabel::~WalletSmallGrayTextLabel() {
}

WalletSmallGreenBoldTextLabel::WalletSmallGreenBoldTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletSmallGreenBoldTextLabel::~WalletSmallGreenBoldTextLabel() {
}

WalletSmallBlackTextLabel::WalletSmallBlackTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletSmallBlackTextLabel::~WalletSmallBlackTextLabel() {
}

WalletNormalGrayTextLabel::WalletNormalGrayTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletNormalGrayTextLabel::~WalletNormalGrayTextLabel() {
}

WalletNormalGreenBoldTextLabel::WalletNormalGreenBoldTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletNormalGreenBoldTextLabel::~WalletNormalGreenBoldTextLabel() {
}

WalletExtraNormalGrayTextLabel::WalletExtraNormalGrayTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletExtraNormalGrayTextLabel::~WalletExtraNormalGrayTextLabel() {
}

WalletNormalBlackTextLabel::WalletNormalBlackTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletNormalBlackTextLabel::~WalletNormalBlackTextLabel() {
}

WalletExtraNormalBlackTextLabel::WalletExtraNormalBlackTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletExtraNormalBlackTextLabel::~WalletExtraNormalBlackTextLabel() {
}

WalletLargeBlackTextLabel::WalletLargeBlackTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletLargeBlackTextLabel::~WalletLargeBlackTextLabel() {
}

WalletExtraLargeBlackTextLabel::WalletExtraLargeBlackTextLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletExtraLargeBlackTextLabel::~WalletExtraLargeBlackTextLabel() {
}

WalletHeaderLabel::WalletHeaderLabel(QWidget* _parent) : WalletTextLabel(_parent) {
}

WalletHeaderLabel::~WalletHeaderLabel() {
}

}

/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QHBoxLayout>
#include <QMouseEvent>
#include <QPushButton>
#include <QSystemTrayIcon>

#include "WalletSplashScreen.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char HIDE_BUTTON_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "QPushButton {"
    "border: none;"
    "font-size: %fontSizeLarge%;"
    "min-width: 5px;"
    "min-height: 5px;"
    "color: %fontColorGray%;"
  "}"

  "QPushButton:hover {"
    "color: #ffffff;"
  "}";

}

WalletSplashScreen::WalletSplashScreen(QWidget* _parent) :
  QSplashScreen(_parent, QPixmap(":images/splash"), Qt::WindowStaysOnTopHint | Qt::X11BypassWindowManagerHint) {
  QFont font;
  font.setPixelSize(Style::FONT_LARGE);
  setFont(font);
  if (Settings::instance().isSystemTrayAvailable() && QSystemTrayIcon::isSystemTrayAvailable()) {
    QHBoxLayout* layout = new QHBoxLayout(this);
    QPushButton* hideButton = new QPushButton(this);
    hideButton->setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(HIDE_BUTTON_STYLE_SHEET_TEMPLATE));
    hideButton->setText(tr("Minimize to tray"));
    hideButton->setCursor(Qt::PointingHandCursor);
    hideButton->setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum));
    hideButton->adjustSize();
    setLayout(layout);
    layout->setContentsMargins(0, 0, 5, 5);
    layout->addWidget(hideButton, 0, Qt::AlignBottom | Qt::AlignRight);
    connect(hideButton, &QPushButton::clicked, this, &WalletSplashScreen::hide);
  }
}

WalletSplashScreen::~WalletSplashScreen() {
}

void WalletSplashScreen::mousePressEvent(QMouseEvent* _event) {
  if (Settings::instance().isSystemTrayAvailable() && QSystemTrayIcon::isSystemTrayAvailable()) {
    _event->ignore();
  } else {
#ifdef Q_OS_MAC
    QSplashScreen::mousePressEvent(_event);
#endif
  }
}

}

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
#include <QLabel>
#include <QMovie>

#include "OverviewHeaderGlassFrame.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

namespace {

const char BALANCES_GLASS_FRAME_STYLE_SHEET_TEMPLATE[] =
  "WalletGui--OverviewHeaderGlassFrame {"
    "border: none;"
    "background-color: #c8f4f4f4;"
    "border-right: 1px solid %borderColor%;"
  "}";

}

OverviewHeaderGlassFrame::OverviewHeaderGlassFrame(QMovie* _syncMovie, QWidget* _parent) : GlassFrame(_parent),
  m_syncLabel(new QLabel(this)) {
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(BALANCES_GLASS_FRAME_STYLE_SHEET_TEMPLATE));
  m_syncLabel->setMovie(_syncMovie);
  QHBoxLayout* layout = new QHBoxLayout(this);
  setLayout(layout);
  layout->addWidget(m_syncLabel, 0, Qt::AlignCenter);
}

OverviewHeaderGlassFrame::~OverviewHeaderGlassFrame() {
}

void OverviewHeaderGlassFrame::install(QWidget* _parent) {
  GlassFrame::install(_parent);
}

void OverviewHeaderGlassFrame::remove() {
  GlassFrame::remove();
}

}

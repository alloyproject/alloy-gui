/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QHBoxLayout>
#include <QPushButton>
#include <QSizePolicy>

#include "ClearableLineEdit.h"
#include "Settings/Settings.h"
#include "Style/Style.h"

namespace WalletGui {

const char CLEAR_BUTTON_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "QPushButton {"
    "border: none;"
    "font-size: %fontSizeTiny%;"
    "min-width: 5px;"
    "min-height: 5px;"
    "color: %fontColorGray%;"
  "}"

  "QPushButton:hover {"
    "color: %fontColorBlueHover%;"
  "}";

ClearableLineEdit::ClearableLineEdit(QWidget* _parent) : QLineEdit(_parent) {
  QHBoxLayout* layout = new QHBoxLayout(this);
  QPushButton* clearButton = new QPushButton(this);
  clearButton->setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(CLEAR_BUTTON_STYLE_SHEET_TEMPLATE));
  clearButton->setText(tr("clear"));
  clearButton->setCursor(Qt::PointingHandCursor);
  clearButton->setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum));
  clearButton->adjustSize();
  setLayout(layout);
  layout->addWidget(clearButton, 0, Qt::AlignVCenter | Qt::AlignRight);
  QMargins margings = textMargins();
  margings.setRight(margings.right() + clearButton->width() + 10);
  setTextMargins(margings);
  connect(clearButton, &QPushButton::clicked, this, &ClearableLineEdit::clear);
}

ClearableLineEdit::~ClearableLineEdit() {
}

}

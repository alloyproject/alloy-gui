/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QTimer>

#include "MagicLabel.h"

namespace WalletGui {

MagicLabel::MagicLabel(QWidget* _parent) : MagicLabel(500, 1000, _parent) {
}

MagicLabel::MagicLabel(quint32 _showDuration, quint32 _hideDuration, QWidget* _parent) : QLabel(_parent), m_effect(this),
  m_showAnimation(), m_hideAnimation() {
  setGraphicsEffect(&m_effect);

  m_showAnimation.setTargetObject(&m_effect);
  m_showAnimation.setPropertyName("opacity");
  m_showAnimation.setDuration(_showDuration);
  m_showAnimation.setStartValue(0);
  m_showAnimation.setEndValue(1);
  m_showAnimation.setEasingCurve(QEasingCurve::OutQuad);

  m_hideAnimation.setTargetObject(&m_effect);
  m_hideAnimation.setPropertyName("opacity");
  m_hideAnimation.setDuration(_hideDuration);
  m_hideAnimation.setStartValue(1);
  m_hideAnimation.setEndValue(0);
  m_hideAnimation.setEasingCurve(QEasingCurve::OutQuad);

  connect(&m_showAnimation, &QPropertyAnimation::finished, [this]() {
      QTimer::singleShot(500, &this->m_hideAnimation, SLOT(start()));
    });

  connect(&m_hideAnimation, &QPropertyAnimation::finished, this, &MagicLabel::completedSignal);
  m_effect.setOpacity(0);
}

MagicLabel::~MagicLabel() {
}

void MagicLabel::start() {
  m_effect.setOpacity(0);
  m_showAnimation.start();
}

}

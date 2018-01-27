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

#include "Gui/Common/GlassFrame.h"

namespace WalletGui {

class SendGlassFrame : public GlassFrame {
  Q_OBJECT
  Q_DISABLE_COPY(SendGlassFrame)

public:
  explicit SendGlassFrame(QWidget* _parent);
  ~SendGlassFrame();

  void updateSynchronizationState(quint32 _current, quint32 _total);

protected:
  void paintEvent(QPaintEvent* _event) override;

private:
  quint64 m_currentHeight;
  quint64 m_totalHeight;
  QPixmap m_pixmapBuffer;
  QString m_lastThemeName;

  void paintInBuffer();
  void drawProgressGraph(QPainter &_painter);
  void drawProgressLabel(QPainter &_painter);
  void drawProgressValue(QPainter &_painter);
};

}

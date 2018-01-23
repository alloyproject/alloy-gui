/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QHeaderView>

namespace WalletGui {

class PoolHeaderView : public QHeaderView {
  Q_OBJECT
  Q_DISABLE_COPY(PoolHeaderView)

public:
  explicit PoolHeaderView(QWidget* _parent);
  ~PoolHeaderView();

protected:
  void paintSection(QPainter* _painter, const QRect& _rect, int _logicalIndex) const override;
};

}

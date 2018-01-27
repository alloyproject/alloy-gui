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

#include <QHeaderView>

namespace WalletGui {

class TransactionsHeaderView : public QHeaderView {
  Q_OBJECT
  Q_DISABLE_COPY(TransactionsHeaderView)

public:
  explicit TransactionsHeaderView(QWidget* _parent);
  ~TransactionsHeaderView();

protected:
  void paintSection(QPainter* _painter, const QRect& _rect, int _logicalIndex) const override;
};

}

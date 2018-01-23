/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QStyledItemDelegate>

namespace WalletGui {

class NewTransactionDelegate : public QStyledItemDelegate {
  Q_OBJECT
  Q_DISABLE_COPY(NewTransactionDelegate)

public:
  explicit NewTransactionDelegate(QObject* _parent);
  ~NewTransactionDelegate();
  QWidget* createEditor(QWidget* _parent, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
  void updateEditorGeometry(QWidget* _editor, const QStyleOptionViewItem& _option, const QModelIndex& _index) const override;
  void setEditorData(QWidget* _editor, const QModelIndex& _index) const override;
};

}

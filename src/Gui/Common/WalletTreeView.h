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

#include <QTreeView>

namespace WalletGui {

class LinkLikeColumnDelegate;

class WalletTreeView : public QTreeView {
  Q_OBJECT
  Q_DISABLE_COPY(WalletTreeView)

public:
  explicit WalletTreeView(QWidget* _parent);
  virtual ~WalletTreeView();

  void setLinkLikeColumnSet(const QSet<int>& _linkLikeColumnSet);
  void setCopyableColumnSet(const QSet<int>& _copyableColumnSet);
  void setHoverIsVisible(bool _hoverIsVisible);
  void updateRowCount();
  void setAutoUpdateRowCount(bool _autoUpdateRowCount);

  virtual void setModel(QAbstractItemModel* _model) override;

protected:
  virtual void mouseMoveEvent(QMouseEvent* _event) override;
  virtual void paintEvent(QPaintEvent* _event) override;
  virtual void resizeEvent(QResizeEvent* _event) override;

private:
  QSet<int> m_linkLikeColumnSet;
  QSet<int> m_copyableColumnSet;
  LinkLikeColumnDelegate* m_linkLikeColumnDelegate;
  bool m_autoUpdateRowCount;

  void itemClicked(const QModelIndex& _index);
  int calculateVisibleRowCount() const;

Q_SIGNALS:
  void copyableItemClickedSignal(const QModelIndex& _index);
};

}

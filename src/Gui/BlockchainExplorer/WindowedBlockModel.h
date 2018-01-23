/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include "Gui/Common/WalletWindowedItemModel.h"
#include "FilteredBlockModel.h"

namespace WalletGui {

class WindowedBlockModel : public WalletWindowedItemModel {
  Q_OBJECT
  Q_DISABLE_COPY(WindowedBlockModel)

public:
  WindowedBlockModel(ICryptoNoteAdapter* _cryptoNoteAdapter, QAbstractItemModel* _blockChainModel, QObject* _parent);
  ~WindowedBlockModel();

  Qt::ItemFlags flags(const QModelIndex &_index) const override;

  void setWindowSize(quint32 _newWindowSize) override;
  void nextPage();
  void prevPage();
  void lastPage();
  QPair<quint32, quint32> prevPageInterval() const;
  QPair<quint32, quint32> nextPageInterval() const;

  void setFilter(FilteredBlockModel::Filter _filter, bool _enablePeriod, const QDateTime &_begin, const QDateTime &_end,
    const QString &_hash);
  void resetFilter();

protected:
  bool filterAcceptsColumn(int _sourceColumn, const QModelIndex &_sourceParent) const override;
  bool lessThan(const QModelIndex &_left, const QModelIndex &_right) const override;

private:
  ICryptoNoteAdapter* m_cryptoNoteAdapter;

  void blocksAdded(const QModelIndex &_parent, int _first, int _last);
  void blocksRemoved(const QModelIndex &_parent, int _first, int _last);

Q_SIGNALS:
  void pageCountUpdated();
};

}

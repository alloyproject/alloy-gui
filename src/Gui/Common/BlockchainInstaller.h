/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QDir>
#include <QFileInfo>
#include <QObject>

namespace WalletGui {

class BlockchainInstaller : public QObject {
  Q_OBJECT

public:
  explicit BlockchainInstaller(QObject* _parent);
  ~BlockchainInstaller();

  void exec();

private:
  const QString m_blockIndexesFileName;
  const QString m_blocksFileName;
  const QDir m_alloyDir;
  const QDir m_applicationDir;

  bool checkIfCurrentBlockchainExists() const;
  bool checkIfAlloyBlockchainExists() const;
  bool getGenesisBlockFromBlockchain(char** _genesisBlockData) const;
  bool checkIfBlockchainOutdated(quint64& _current, quint64& _alloy) const;
  QFileInfo currentBlockchainInfo() const;
  QFileInfo alloyBlockchainInfo() const;

  void copyProgress(quint64 _copied, quint64 _total);
  void installBlockchain();

Q_SIGNALS:
  void copyFileSignal(const QString& _sourcePath, const QString& _targetPath);
  void showMessageSignal(const QString& _message);
};

class AsyncFileProcessor : public QObject {
  Q_OBJECT

public:
  AsyncFileProcessor();
  ~AsyncFileProcessor();

  void copy(const QString& _sourcePath, const QString& _targetPath);

Q_SIGNALS:
  void copyProgressSignal(quint64 _copied, quint64 _total);
  void copyFinished();
  void errorSignal(int _error);
};

}

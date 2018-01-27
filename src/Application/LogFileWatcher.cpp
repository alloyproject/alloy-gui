/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#include <QFile>
#include <QFileSystemWatcher>
#include <QTextStream>
#include <QTimerEvent>

#include "LogFileWatcher.h"

namespace WalletGui {

LogFileWatcher::LogFileWatcher(const QString& _fileName, QObject* _parent) : QObject(_parent),
  m_logFile(new QFile(_fileName, this)) {
  if (m_logFile->open(QFile::ReadOnly | QFile::Text)) {
    m_logFile->seek(m_logFile->size());
    m_fileCheckTimer = startTimer(300);
  }
}

LogFileWatcher::~LogFileWatcher() {
}

void LogFileWatcher::timerEvent(QTimerEvent* _event) {
  if (_event->timerId() == m_fileCheckTimer) {
    if (!m_logFile->atEnd()) {
      fileChanged();
    }
  }

  QObject::timerEvent(_event);
}

void LogFileWatcher::fileChanged() {
  QTextStream stream(m_logFile);
  while(!stream.atEnd()) {
    QString line = stream.readLine();
    Q_EMIT newLogStringSignal(line);
  }
}

}

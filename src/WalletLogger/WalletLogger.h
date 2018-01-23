/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QObject>

class QDir;
class QFile;

namespace WalletGui {

class WalletLogger :public QObject {
  Q_OBJECT
  Q_DISABLE_COPY(WalletLogger)

public:
  static void init(const QDir& _logDir, bool _debug, QObject* _parent);
  static void deinit();
  static void debug(const QString& _message);
  static void info(const QString& _message);
  static void warning(const QString& _message);
  static void critical(const QString& _message);

private:
  static QThread* m_loggerThread;
  static WalletLogger* m_instance;
  static QFile* m_logFile;

  WalletLogger(bool _debug, QObject* _parent);
  ~WalletLogger();

  static void messageHandler(QtMsgType _type, const QMessageLogContext &_context, const QString &_msg);

  Q_INVOKABLE void debugImpl(const QString& _message);
  Q_INVOKABLE void infoImpl(const QString& _message);
  Q_INVOKABLE void warningImpl(const QString& _message);
  Q_INVOKABLE void criticalImpl(const QString& _message);
};

}

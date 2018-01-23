/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QApplication>
#include <QSystemTrayIcon>

#include "Settings/Settings.h"

class QLockFile;
class QMainWindow;
class QSplashScreen;

namespace WalletGui {

class CommandLineParser;
class IAddressBookManager;
class IApplicationEventHandler;
class ICryptoNoteAdapter;
class IDonationManager;
class IOptimizationManager;
class IMiningManager;
class INewsReader;
class LogFileWatcher;

class WalletApplication : public QApplication, public ISettingsObserver {
  Q_OBJECT
  Q_DISABLE_COPY(WalletApplication)

public:
  WalletApplication(int& _argc, char** _argv);
  ~WalletApplication();

  bool init();
  void dockClickHandler();

  // ISettingsObserver
  virtual void settingsUpdated() override;

private:
  QLockFile* m_lockFile;
  QSystemTrayIcon* m_systemTrayIcon;
  CommandLineParser* m_commandLineParser;
  IApplicationEventHandler* m_applicationEventHandler;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  IAddressBookManager* m_addressBookManager;
  IDonationManager* m_donationManager;
  IOptimizationManager* m_optimizationManager;
  IMiningManager* m_miningManager;
  INewsReader* m_blogReader;
  QMainWindow* m_mainWindow;
  QSplashScreen* m_splash;
  LogFileWatcher* m_logWatcher;
  bool m_isAboutToQuit;

  void loadFonts();
  void makeDataDir();
  void setupTheme();
  bool initCryptoNoteAdapter();
  void deinitCryptoNoteAdapter();
  void reinitCryptoNoteAdapter();
  void initUi();
  void initSystemTrayIcon();
  void showCoreInitError();
  bool askForRemoveDb();
  void trayActivated(QSystemTrayIcon::ActivationReason _reason);
  void prepareToQuit();
  void newLogString(const QString& _string);

#ifdef Q_OS_MAC
private:
  void installDockHandler();
#endif
};

}

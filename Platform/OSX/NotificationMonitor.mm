/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#import "NotificationMonitor.h"
#import "INotificationMonitorObserver.h"
#import <Foundation/NSDistributedNotificationCenter.h>

@implementation NotificationMonitor
-(id) init: (WalletGui::INotificationMonitorObserver*) observer {
  m_observer = observer;
  NSDistributedNotificationCenter * center
    = [NSDistributedNotificationCenter defaultCenter];

  [center addObserver: self
          selector:    @selector(receive:)
          name:        @"com.apple.screenIsLocked"
          object:      nil
  ];
  [center addObserver: self
          selector:    @selector(receive:)
          name:        @"com.apple.screenIsUnlocked"
          object:      nil
  ];
  return self;
}
-(void) receive: (NSNotification*) notification {
  m_observer->notify(QString::fromNSString([notification name]));
}
@end

/*
 * Copyright (c) 2017-2018, The Alloy Developers.
 *
 * This file is part of Alloy.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#import <Foundation/NSObject.h>
#import <Foundation/NSNotification.h>

namespace WalletGui {
  class INotificationMonitorObserver;
}

@interface NotificationMonitor: NSObject {
  WalletGui::INotificationMonitorObserver* m_observer;
}
-(id) init: (WalletGui::INotificationMonitorObserver*) observer;
-(void) receive: (NSNotification*) notification;
@end

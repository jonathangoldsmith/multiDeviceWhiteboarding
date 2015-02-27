//
//  AppDelegate.h
//  WhiteboardMultipleDevices
//
//  Created by Jonathan Goldsmith on 2/26/15.
//  Copyright (c) 2015 JonathanGoldsmith. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MultipeerConnectivityManager.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) MultipeerConnectivityManager *mcManager;

@end


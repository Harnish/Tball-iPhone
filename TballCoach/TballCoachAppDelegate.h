//
//  TballCoachAppDelegate.h
//  TballCoach
//
//  Created by Joe on 4/1/11.
//  Copyright 2011 Coder Joes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TballCoachAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end

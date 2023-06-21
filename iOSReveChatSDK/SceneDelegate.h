//
//  SceneDelegate.h
//  IntegratedReveChatSDK
//
//  Created by REVE Systems on 9/4/23.
//

#import <UIKit/UIKit.h>

@interface SceneDelegate : UIResponder <UIWindowSceneDelegate>

@property (strong, nonatomic) UIWindow * window;
@property (nonatomic,assign) UIBackgroundTaskIdentifier backgroundUpdateTask;

@end


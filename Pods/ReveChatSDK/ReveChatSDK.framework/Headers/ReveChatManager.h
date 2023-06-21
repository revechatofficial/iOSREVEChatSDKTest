//
//  ReveChatManager.h
//  ReveChatSDK
//
//  Created by Amit on 5/29/17.
//  Copyright © 2017 reve. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//#import "InitialViewController.h"
#import "ReveChatNavigationController.h"

@interface ReveChatManager : NSObject

+(instancetype) sharedManager;

- (void) setupAccountWith:(NSString*)accountId;

-(void) initiateReveChatWith:(NSString*)visitorName visitorEmail:(NSString*)visitorEmail visitorMobile:(NSString*)visitorMobile onNavigationViewController:(UINavigationController *)viewController;

-(void) initiateReveChatWith:(NSString*)visitorName visitorEmail:(NSString*)visitorEmail visitorMobile:(NSString*)visitorMobile onViewController:(UIViewController *)viewController;

/*customizing methods */

- (void)setThemeColor:(UIColor*)color;

- (void)setBackground:(UIColor*)color;

- (void)setNavigationBarColor:(UIColor*)color;

- (void)setHeaderTintColor:(UIColor*)color;

- (void)setHeaderTextColor:(UIColor*)color;

- (void)setIncomingBubbleColor:(UIColor*)color;

- (void)setOutgoingBubbleColor:(UIColor*)color;

- (void)setInputbarTintColor:(UIColor*)color;

- (void)setInputBarPlaceHolderText:(NSString*)placeholderText;

- (void)setChatTitle:(NSString*)title;

- (void)setDeviceToken:(NSString*)token;

- (void)setNavBarTitleColor:(UIColor*)color;

- (void)setThemeName:(NSString*)name;

- (void)resume;

/* customizing values */

@property (strong,nonatomic) UIColor* themeColor;

@property (strong,nonatomic) UIColor* backgroundColor;

@property (strong,nonatomic) UIColor* navBarColor;

@property (strong,nonatomic) UIColor* headerTintColor;

@property (strong,nonatomic) UIColor* headerTextColor;

@property (strong,nonatomic) UIColor* incomingBubbleColor;

@property (strong,nonatomic) UIColor* outgoingBubbleColor;

@property (strong,nonatomic) UIColor* inputBarTintColor;

@property (strong,nonatomic) UIColor* navBarTitleColor;

@property (strong,nonatomic) NSString* inputBarPlaceHolderText;

@property (strong,nonatomic) NSString* title;

@property (strong,nonatomic) NSString* token;

@property (strong,nonatomic) UINavigationController* myRootController;

@property (strong,nonatomic) UIViewController* currrentControllerView;

@property (strong,nonatomic) NSString* queueMessage;

//@property (strong,nonatomic) InitialViewController *initialVC;

@property (strong,nonatomic) NSString* themeName;

@property (strong,nonatomic) ReveChatNavigationController* navCtrl;

@property (strong,nonatomic) UINavigationController *appNavController;
@end

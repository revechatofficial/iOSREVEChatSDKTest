//
//  LoginParamVC.m
//  iOSReveChatSDK
//
//  Created by REVE Systems on 13/7/23.
//

#import "LoginParamVC.h"
#import <ReveChatSDK/ReveChatSDK.h>

@interface LoginParamVC ()
@property (weak, nonatomic) IBOutlet UITextField *accountIdField;
@property (weak, nonatomic) IBOutlet UISwitch *loginSwitch;
@property (weak, nonatomic) IBOutlet UILabel *loginStateLabel;
@end

@implementation LoginParamVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.accountIdField.text = @"8511385";
    
    if (self.loginSwitch.on) {
        self.loginStateLabel.text = @"Logged in";
    } else {
        self.loginStateLabel.text = @"Logged out";
    }
}

- (IBAction)onClick:(id)sender {
    
//    [[ReveChatManager sharedManager] setupAccountWith:@"7980009"]; // staging
    
    if (self.loginSwitch.on) {
        [[ReveChatManager sharedManager] setupAccountWith:self.accountIdField.text]; // production
        [[ReveChatManager sharedManager]
         initiateReveChatWith:@"testfrom iPhone 6s"
         visitorEmail:@"netzaintest@gmail.com"
         visitorMobile:@"01409404444"
         loginState: LOGGED_IN
         onNavigationViewController:self.navigationController];
    } else {
        [[ReveChatManager sharedManager] setupAccountWith:self.accountIdField.text]; // production
        [[ReveChatManager sharedManager]
         initiateReveChatWith:@"testfrom iPhone 6s"
         visitorEmail:@"netzaintest@gmail.com"
         visitorMobile:@"01409404444"
         loginState: LOGGED_OUT
         onNavigationViewController:self.navigationController];
    }
}

- (IBAction)switchChanged:(UISwitch*)sender {
    if (sender.on) {
        self.loginStateLabel.text = @"Logged in";
    } else {
        self.loginStateLabel.text = @"Logged out";
    }
}

@end

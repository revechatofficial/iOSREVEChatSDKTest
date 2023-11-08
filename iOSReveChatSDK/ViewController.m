//
//  ViewController.m
//  IntegratedReveChat_Objective-c device
//
//  Created by REVE Systems on 8/3/23.
//

#import "ViewController.h"
#import <ReveChatSDK/ReveChatSDK.h>

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextField *accountIdField;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.accountIdField.text = @"8511385";
}

- (IBAction)buttonTapped:(id)sender {
    [[ReveChatManager sharedManager]
    setupAccountWith:self.accountIdField.text];
    
    [[ReveChatManager sharedManager]
     initiateReveChatWith:@"daihan visitor 0987"
     visitorEmail:@"netzaintest@gmail.com"
     visitorMobile:@"01409404444"
     onNavigationViewController:self.navigationController];
}

@end

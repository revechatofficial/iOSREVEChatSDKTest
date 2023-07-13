//
//  LoginState.h
//  ReveChat
//
//  Created by Amit on 5/15/17.
//  Copyright © 2017 Amit. All rights reserved.
//

#import <Foundation/Foundation.h>
enum LState
{
    LOGGED_IN,
    LOGGED_OUT
    
};

@interface LoginState : NSObject
{
    enum LState loginState;
}

@end

//
//  Mobile_MKAbeFookAppDelegate.h
//  Mobile MKAbeFook
//
//  Created by Mike Kinney on 3/28/08.
//  Copyright Mike Kinney 2008. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MyView;
#import "MMKFacebook.h"


//copied from apple
#define kStdButtonWidth			106.0
#define kStdButtonHeight		40.0


@interface Mobile_MKAbeFookAppDelegate : NSObject <MMKFacebook> {
    UIWindow *window;
	UIView *_frontView;
	UILabel *_text;
	UIButton *_loginButton;
	MMKFacebook *_facebookConnection;
	
	//UITabBar *_tabBar;
	//UITabBarController *_tabBarController;
}

-(UIView *)applicationView;
-(void)userLoginSuccessful;
-(void)returningUserToApplication;

@property (nonatomic, retain) UIWindow *window;


@end

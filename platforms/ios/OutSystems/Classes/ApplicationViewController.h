//
//  ApplicationViewController.h
//  HubApp
//
//  Created by engineering on 03/04/14.
//  Copyright (c) 2014 OutSystems. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Application.h"
#import "Infrastructure.h"
#import <AVFoundation/AVFoundation.h>

typedef enum {
	OSAnimateTransitionDefault,
	OSAnimateTransitionSlideLeft,
	OSAnimateTransitionSlideRight,
	OSAnimateTransitionFadeOut
}OSAnimateTransition;

@interface ApplicationViewController : UIViewController <UIWebViewDelegate, UIScrollViewDelegate, UITextViewDelegate,AVAudioRecorderDelegate, AVAudioPlayerDelegate>

@property (strong, nonatomic) Application* application;
@property (strong, nonatomic) Infrastructure* infrastructure;

@property BOOL isSingleApplication;

- (IBAction)navBack:(id)sender;
- (IBAction)navForward:(id)sender;
- (IBAction)navAppList:(id)sender;

- (void)onAudioRecorderExit:(BOOL)recorded;

@end

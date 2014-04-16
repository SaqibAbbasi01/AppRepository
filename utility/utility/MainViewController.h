//
//  MainViewController.h
//  utility
//
//  Created by Emcentrix on 4/17/14.
//  Copyright (c) 2014 EmCentrix. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end

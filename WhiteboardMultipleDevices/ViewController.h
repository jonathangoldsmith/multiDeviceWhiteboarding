//
//  ViewController.h
//  WhiteboardMultipleDevices
//
//  Created by Jonathan Goldsmith on 2/26/15.
//  Copyright (c) 2015 JonathanGoldsmith. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface ViewController : UIViewController {
    
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
}
@property (nonatomic, strong) AppDelegate *appDelegate;

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempImage;
- (IBAction)pencilPressed:(id)sender;
- (IBAction)erasePressed:(id)sender;
- (IBAction)resetPressed:(id)sender;
- (IBAction)savePressed:(id)sender;

@end


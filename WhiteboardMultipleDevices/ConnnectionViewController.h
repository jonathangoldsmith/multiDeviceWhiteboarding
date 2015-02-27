//
//  ConnnectionViewController.h
//  WhiteboardMultipleDevices
//
//  Created by Jonathan Goldsmith on 2/27/15.
//  Copyright (c) 2015 JonathanGoldsmith. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>

@interface ConnnectionViewController : UIViewController <MCBrowserViewControllerDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *connectedDevices;
@property (weak, nonatomic) IBOutlet UISwitch *visibleSwitch;
@property (weak, nonatomic) IBOutlet UIButton *disconnectButton;
@property (weak, nonatomic) IBOutlet UITextField *txtName;
- (IBAction)browseForDevices:(id)sender;
- (IBAction)toggleVisibility:(id)sender;
- (IBAction)disconnect:(id)sender;


@end

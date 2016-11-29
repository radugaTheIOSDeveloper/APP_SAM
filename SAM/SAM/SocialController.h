//
//  SocialController.h
//  SAM
//
//  Created by User on 25.11.16.
//  Copyright © 2016 freshtech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SocialController : UIViewController

@property (weak, nonatomic) IBOutlet UIBarButtonItem *revealButtonItem;

- (IBAction)vkBtn:(id)sender;
- (IBAction)facebookBtn:(id)sender;
- (IBAction)twiterBtn:(id)sender;
- (IBAction)classBtn:(id)sender;

@end

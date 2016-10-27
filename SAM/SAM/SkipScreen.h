//
//  SkipScreen.h
//  SAM
//
//  Created by User on 16.10.16.
//  Copyright © 2016 freshtech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PageContentController.h"

@interface SkipScreen : UIViewController <UIPageViewControllerDataSource>

@property (strong, nonatomic) UIPageViewController *pageViewController;
@property (strong, nonatomic) NSArray *pageTitles;
@property (strong, nonatomic) NSArray *pageImages;
@property (strong, nonatomic) NSArray * pageDetail;
@property (strong, nonatomic) NSMutableArray * arrayImages;

@property (weak, nonatomic) IBOutlet UIButton *nextOtl;
@property (weak, nonatomic) IBOutlet UIButton *skipOtl;
@property (assign, nonatomic) NSInteger index;

- (IBAction)nextBtn:(id)sender;
- (IBAction)skipBtn:(id)sender;


@end

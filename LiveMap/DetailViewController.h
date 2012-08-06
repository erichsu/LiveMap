//
//  DetailViewController.h
//  LiveMap
//
//  Created by Eric Hsu (RD-TW) on 12/8/6.
//  Copyright (c) 2012年 Eric Hsu (RD-TW). All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

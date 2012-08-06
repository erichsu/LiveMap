//
//  MasterViewController.h
//  LiveMap
//
//  Created by Eric Hsu (RD-TW) on 12/8/6.
//  Copyright (c) 2012年 Eric Hsu (RD-TW). All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

//
//  DnDMasterViewController.h
//  PlayerList
//
//  Created by Christopher Nies on 4/4/14.
//  Copyright (c) 2014 iMasterchris. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DnDDetailViewController;

#import <CoreData/CoreData.h>

@interface DnDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DnDDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

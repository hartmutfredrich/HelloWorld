//
//  MasterViewController.h
//  HelloWorld
//
//  Created by Hartmut Fredrich on 14.06.14.
//  Copyright (c) 2014 Hartmut Fredrich. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

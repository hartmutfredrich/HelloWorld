//
//  DetailViewController.h
//  HelloWorld
//
//  Created by Hartmut Fredrich on 14.06.14.
//  Copyright (c) 2014 Hartmut Fredrich. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

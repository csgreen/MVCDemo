//
//  CookieListViewController.h
//  MVCDemo
//
//  Created by Christina Green on 10/21/13.
//  Copyright (c) 2013 Greenster. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSGCookie.h"

@interface CookieListViewController : UITableViewController

@property (nonatomic) NSMutableArray *cookies;

@property (nonatomic, weak) IBOutlet UIButton *myButton;

@end

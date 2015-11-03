//
//  DetailViewController.h
//  Every.Do
//
//  Created by Alex on 2015-11-03.
//  Copyright © 2015 Alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ToDo;

@interface DetailViewController : UIViewController

@property (strong, nonatomic) ToDo *detailItem;

@end


//
//  AddItemViewController.h
//  Every.Do
//
//  Created by Alex on 2015-11-03.
//  Copyright © 2015 Alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemControllerDelegate <NSObject>

- (void)addItemWithTitle:(NSString *)title andDescript:(NSString *)description andCategory:(NSString *)category;

@end

@interface AddItemViewController : UIViewController

@property (nonatomic, weak) id <AddItemControllerDelegate> delegate;

@end

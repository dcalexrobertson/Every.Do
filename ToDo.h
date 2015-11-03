//
//  ToDo.h
//  Every.Do
//
//  Created by Alex on 2015-11-03.
//  Copyright © 2015 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDo : NSObject

@property (nonatomic) NSString *title;
@property (nonatomic) NSString *descript;
@property int priority;
@property BOOL isCompleted;

- (instancetype)initWithTitle:(NSString *)title andDescript:(NSString *)description andPriority:(int)number;

@end

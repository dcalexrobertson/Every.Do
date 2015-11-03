//
//  ToDo.m
//  Every.Do
//
//  Created by Alex on 2015-11-03.
//  Copyright © 2015 Alex. All rights reserved.
//

#import "ToDo.h"

@implementation ToDo

- (instancetype)initWithTitle:(NSString *)title andDescript:(NSString *)description andPriority:(int)number
{
    self = [super init];
    if (self) {
        _title = title;
        _descript = description;
        _priority = number;
    }
    return self;
}

@end

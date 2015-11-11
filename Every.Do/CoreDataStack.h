//
//  CoreDataStack.h
//  Every.Do
//
//  Created by Alex on 2015-11-11.
//  Copyright © 2015 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface CoreDataStack : NSObject

@property (nonatomic) NSManagedObjectContext *context;

@end

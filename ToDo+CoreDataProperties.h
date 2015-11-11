//
//  ToDo+CoreDataProperties.h
//  Every.Do
//
//  Created by Alex on 2015-11-11.
//  Copyright © 2015 Alex. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "ToDo.h"

NS_ASSUME_NONNULL_BEGIN

@interface ToDo (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSString *descript;
@property (nullable, nonatomic, retain) NSNumber *priority;

@end

NS_ASSUME_NONNULL_END

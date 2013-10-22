//
//  CSGCookie.h
//  MVCDemo
//
//  Created by Christina Green on 10/21/13.
//  Copyright (c) 2013 Greenster. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CSGCookie : NSObject


@property (nonatomic) NSString *name;
@property (nonatomic) NSArray *ingredients;
@property (nonatomic) NSDecimalNumber *price;

@property (nonatomic, assign) BOOL glutenFree;
// assign is saying doesn't need to do memory management

@end

//
//  DnDItem.h
//  PlayerList
//
//  Created by Christopher Nies on 4/4/14.
//  Copyright (c) 2014 iMasterchris. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DnDItem <NSObject>
@property (readonly) NSNumber *weight;
@property (readonly) NSString *name;

-(id)initWithName:(NSString *)name andWeight: (NSNumber *)weight;
-(id)init;
@end
//
//  DnDPerk.h
//  PlayerList
//
//  Created by Christopher Nies on 4/4/14.
//  Copyright (c) 2014 iMasterchris. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DnDPerk <NSObject>
@property NSString *name;
@property NSDictionary *statRequirement;
@property NSNumber *levelRequirement;

-(void)modifyCharacter:(DnDCharacter *)character;
@end

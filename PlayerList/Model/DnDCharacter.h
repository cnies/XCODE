//
//  DnDPlayer.h
//  PlayerList
//
//  Created by Christopher Nies on 4/4/14.
//  Copyright (c) 2014 iMasterchris. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DnDCharacter : NSObject
@property NSString *name;
@property NSString *type;
@property (readonly) NSUInteger level;
@property NSMutableArray *inventory;
@property (readonly) NSDictionary *skills;
@property NSDictionary *specialmStats;
@property (readonly) NSMutableArray *perks;
@property (readonly) NSUInteger skillPointsAvailable;

-(void)levelUpWithPerk:(id)perk
         andBaseSkills:(NSDictionary *)skills;
-(id)initWithLevel:(NSUInteger)level;
-(id)initWithLevel:(NSUInteger)level
              name:(NSString *)name
              type:(NSString *)type
          andPerks:(NSMutableArray *)perks;
-(void)addItemToInventory:(id)theItem;
-(void)removeItemFromInventory:(id)theItem;
@end

//
//  DnDPlayer.m
//  PlayerList
//
//  Created by Christopher Nies on 4/4/14.
//  Copyright (c) 2014 iMasterchris. All rights reserved.
//

#import "DnDCharacter.h"
#import "DnDPerk.h"
#import "DnDItem.h"

@interface DnDCharacter()
@property NSDictionary *baseSkills;
@end

@implementation DnDCharacter :NSObject
@synthesize name = _name;
@synthesize type = _type;
@synthesize level = _level;
@synthesize inventory = _inventory;
@synthesize skills = _skills;
@synthesize specialmStats = _specialmStats;
@synthesize perks = _perks;
@synthesize skillPointsAvailable = _skillPointsAvailable;


-(void)levelUpWithPerk:(id)perk
             andBaseSkills:(NSDictionary *)skills;{
    
}

-(id)initWithLevel:(NSUInteger)level name:(NSString *)name type:(NSString *)type
          andPerks:(NSMutableArray *)perks {
    self = [super init];
    if (self){
        _level = level;
        _name = name;
        _type = type;
        for(int i=0; i<[_perks count]; i++){
            id <DnDPerk> perk = [perks objectAtIndex:i];
            if([perk respondsToSelector:@selector(modifyCharacter:)]){
                [perk modifyCharacter:self];
            }
            [_perks addObject:perk];
        }
    }
    return self;
}

-(id)initWithLevel:(NSUInteger)level;{
    self = [super init];
    if (self){
        _level = level;
    }
    return self;
}
-(void)addItemToInventory:(id)theItem;{
    [self.inventory addObject: theItem];
}
-(void)removeItemFromInventory:(id)theItem;{
    [self.inventory removeObject:theItem];
}

@end

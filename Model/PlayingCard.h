//
//  PlayingCard.h
//  Matchismo
//
//  Created by Austin Diaz on 1/3/14.
//  Copyright (c) 2014 Austin Diaz. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end

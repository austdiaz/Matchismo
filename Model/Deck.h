//
//  Deck.h
//  Matchismo
//
//  Created by Austin Diaz on 1/3/14.
//  Copyright (c) 2014 Austin Diaz. All rights reserved.
//

#import "Card.h"

@interface Deck : Card

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end

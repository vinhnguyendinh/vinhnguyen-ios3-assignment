//
//  Player.m
//  Game
//
//  Created by Vinh Nguyen Dinh on 4/2/16.
//  Copyright © 2016 VinhNguyen. All rights reserved.
//

#import "Player.h"

@implementation Player

- (instancetype)init
{
    self = [super init];
    if (self) {
        
    }
    return self;
}

- (void) checkKill {
    NSLog(@"Prepare to check Kill");
}
- (void) isGameOver {
    NSLog(@"is Game Over");
}

@end

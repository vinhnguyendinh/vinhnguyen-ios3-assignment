//
//  Queen.m
//  Game
//
//  Created by Vinh Nguyen Dinh on 4/2/16.
//  Copyright © 2016 VinhNguyen. All rights reserved.
//

#import "Queen.h"
// Con Hậu
@implementation Queen
- (instancetype)init
{
    self = [super init];
    if (self) {
        self.type = CHESS_T_HAU;
    }
    return self;
}
- (BOOL)isMoveValid:(NSMutableArray *)arrChess {
    return true;
}
@end

//
//  Player.h
//  Game
//
//  Created by Vinh Nguyen Dinh on 4/2/16.
//  Copyright © 2016 VinhNguyen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Piece.h"

@interface Player : NSObject

@property NSArray *arrayPiece;
@property NSString *name;
@property int numberOfTurn;

@end

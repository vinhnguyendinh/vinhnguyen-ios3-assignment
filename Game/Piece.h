//
//  Piece.h
//  Game
//
//  Created by Vinh Nguyen Dinh on 4/2/16.
//  Copyright © 2016 VinhNguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol pieceDelegate <NSObject>

- (BOOL) isMoveValid: (NSMutableArray *) arrChess;

@end

@interface Piece : UITableViewCell
@property id<pieceDelegate> instance;
typedef enum {
    CHESS_T_TOT = 0,
    CHESS_T_MA = 1,
    CHESS_T_XE = 2,
    CHESS_T_TUONG = 3,
    CHESS_T_HAU = 4,
    CHESS_T_TINH = 5
    
} CHESS_TYPE;
@property int type;
@property BOOL color;
@property int x;
@property int y;


@end

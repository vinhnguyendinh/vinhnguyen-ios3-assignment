//
//  Chess.h
//  HelloWorld
//
//  Created by Admin on 3/28/16.
//  Copyright © 2016 Techkids. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Chess : NSObject

@property int x;
@property int y;

- (void) move;
- (void) eat;

@end

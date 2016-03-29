//
//  Chess.m
//  HelloWorld
//
//  Created by Admin on 3/28/16.
//  Copyright © 2016 Techkids. All rights reserved.
//

#import "Chess.h"

@implementation Chess

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.x = 0;
        self.y = 0;
        
    }
    return self;
}

- (void) move {
    NSLog(@"This is move of Chess");
}


- (void) eat {
    NSLog(@"This is eat of Chess");
}
@end

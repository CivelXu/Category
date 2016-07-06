//
//  NSTimer+Addition.m
//  UIScrollViewHomework
//
//  Created by lanou on 16/3/23.
//  Copyright © 2016年 xuxiwen. All rights reserved.
//

#import "NSTimer+Addition.h"

@implementation NSTimer (Addition)

- (void)pauseTimer
{
    if (!self.isValid) { // 如果当前的NSTimer对象不可用，直接返回
        return;
    }
    [self setFireDate:[NSDate distantFuture]];
}

- (void)resumeTimer
{
    if (!self.isValid) {
        return;
    }
    [self setFireDate:[NSDate date]];
}

- (void)resumeTimerAfterTimeInterval:(NSTimeInterval)interval
{
    if (!self.isValid) {
        return;
    }
    [self setFireDate:[NSDate dateWithTimeIntervalSinceNow:interval]];
}



@end

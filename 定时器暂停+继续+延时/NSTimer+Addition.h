//
//  NSTimer+Addition.h
//  UIScrollViewHomework
//
//  Created by lanou on 16/3/23.
//  Copyright © 2016年 xuxiwen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Addition)

/**
 *  让NSTimer暂停
 */
- (void)pauseTimer;

/**
 *  重新启动
 */
- (void)resumeTimer;

/**
 *  让NSTimer几秒之后重新启动
 *
 *  @param interval 间隔的时间
 */
- (void)resumeTimerAfterTimeInterval:(NSTimeInterval)interval;


@end

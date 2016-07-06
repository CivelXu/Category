//
//  ViewController.m
//  Test
//
//  Created by dllo on 16/6/23.
//  Copyright © 2016年 xuxiwen. All rights reserved.
//

@import UIKit;

@interface UIImage (ImageEffects)

- (UIImage *)applyLightEffect;
- (UIImage *)applyExtraLightEffect;
- (UIImage *)applyDarkEffect;
- (UIImage *)applyTintEffectWithColor:(UIColor *)tintColor;

- (UIImage *)applyBlurWithRadius:(CGFloat)blurRadius tintColor:(UIColor *)tintColor saturationDeltaFactor:(CGFloat)saturationDeltaFactor maskImage:(UIImage *)maskImage;


/**
 *  原图防渲染
 */

- (UIImage *)originalWithUIImageStr:(NSString *)Imagestr;


/** 等比例图片切割 */

- (void)carveUpImageViewPropertyWithUIImageView:(UIImageView *)imageView;
@end

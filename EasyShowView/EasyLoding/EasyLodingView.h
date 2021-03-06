//
//  EasyLodingView.h
//  EasyShowViewDemo
//
//  Created by nf on 2017/12/14.
//  Copyright © 2017年 chenliangloveyou. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "EasyLodingConfig.h"

@interface EasyLodingView : UIView

/**
 * 显示一个加载框
 * text:需要显示加载框的字体
 * imageName：需要显示加载框的图片名称
 * superview:加载框所需要的父视图（如果不传会放到window和topviewcontroller上面，在EasyShowOptions里指定）
 *
 * 需要自定义的样式可以在里设置
 */
+ (EasyLodingView *)showLoding ;

+ (EasyLodingView *)showLodingText:(NSString *)text ;

+ (EasyLodingView *)showLodingText:(NSString *)text
                            config:(EasyLodingConfig *(^)(void))config ;


+ (EasyLodingView *)showLodingText:(NSString *)text
                         imageName:(NSString *)imageName ;

+ (EasyLodingView *)showLodingText:(NSString *)text
                         imageName:(NSString *)imageName
                            config:(EasyLodingConfig *(^)(void))config ;

/**
 * 移除一个加载框
 * uperview:加载框所在的父视图。show的时候没有指定父视图。那么隐藏的时候也不用
 */
+ (void)hidenLoding ;
+ (void)hidenLoingInView:(UIView *)superView ;
+ (void)hidenLoding:(EasyLodingView *)lodingView ;


@end

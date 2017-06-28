//
//  UIView+Radius.m
//  Enterprise
//
//  Created by MySun0919 on 2016/11/9.
//  Copyright © 2016年 com.sofn.lky.enterprise. All rights reserved.
//

#import "UIView+Radius.h"

@implementation UIView (Radius)
/**
 *  控件修圆
 *
 *  @param angle 修圆的弧度数
 */
- (void)radiusWithAngle:(CGFloat)angle
{
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = angle;
}
@end

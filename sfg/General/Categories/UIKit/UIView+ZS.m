//
//  UIView+ZS.m
//  Enterprise
//
//  Created by sg on 2016/11/9.
//  Copyright © 2016年 com.sofn.lky.enterprise. All rights reserved.
//

#import "UIView+ZS.h"
#import "AppMacro.h"
@implementation UIView (ZS)

- (CGFloat)left {
    return self.frame.origin.x;
}

- (void)setLeft:(CGFloat)x {
    CGRect frame = self.frame;
    frame.origin.x = x;
    self.frame = frame;
}

- (CGFloat)top {
    return self.frame.origin.y;
}

- (void)setTop:(CGFloat)y {
    CGRect frame = self.frame;
    frame.origin.y = y;
    self.frame = frame;
}

- (CGFloat)right {
    return self.frame.origin.x + self.frame.size.width;
}

- (void)setRight:(CGFloat)right {
    CGRect frame = self.frame;
    frame.origin.x = right - frame.size.width;
    self.frame = frame;
}

- (CGFloat)bottom {
    return self.frame.origin.y + self.frame.size.height;
}

- (void)setBottom:(CGFloat)bottom {
    CGRect frame = self.frame;
    frame.origin.y = bottom - frame.size.height;
    self.frame = frame;
}

- (CGFloat)width {
    return self.frame.size.width;
}

- (void)setWidth:(CGFloat)width {
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame = frame;
}

- (CGFloat)height {
    return self.frame.size.height;
}

- (void)setHeight:(CGFloat)height {
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame = frame;
}

- (CGFloat)centerX {
    return self.center.x;
}

- (void)setCenterX:(CGFloat)centerX {
    self.center = CGPointMake(centerX, self.center.y);
}

- (CGFloat)centerY {
    return self.center.y;
}

- (void)setCenterY:(CGFloat)centerY {
    self.center = CGPointMake(self.center.x, centerY);
}

- (CGPoint)origin {
    return self.frame.origin;
}

- (void)setOrigin:(CGPoint)origin {
    CGRect frame = self.frame;
    frame.origin = origin;
    self.frame = frame;
}

- (CGSize)size {
    return self.frame.size;
}

- (void)setSize:(CGSize)size {
    CGRect frame = self.frame;
    frame.size = size;
    self.frame = frame;
}

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

- (void)setCustomBtn:(NSString *)title image:(NSString *)imageName{

    UIImageView *imageView = [[UIImageView alloc] init];
    imageView.frame = CGRectMake(5, 0, self.width - 10, self.width -10);
    imageView.image = KImage(imageName);
    imageView.userInteractionEnabled = YES;
    [self addSubview:imageView];
    UILabel *label = [[UILabel alloc] init];
    label.frame = CGRectMake(10, imageView.bottom + 10, self.width - 20, self.height - self.width + 15);
    label.numberOfLines = 0;
    label.text = title;
    label.textColor = KTextgrayColor;
    label.font = [UIFont systemFontOfSize:14];
    label.textAlignment = NSTextAlignmentCenter;
    [self addSubview:label];
}

- (void)setlayerCornerRadius:(CGFloat)radius{
    self.layer.cornerRadius = radius;
}

- (void)setlayerCornerRadius:(CGFloat)radius
                borderWidth :(CGFloat)width
                borderColor :(UIColor *)color{
    self.layer.cornerRadius = radius;
    self.layer.borderWidth = width;
    self.layer.borderColor = color.CGColor;
}

@end

@implementation UIButton (ZS)

#pragma mark -- 设置标题
- (void)setNormalTitle:(NSString *)normalTitle selectedTitile:(NSString *)selectedTitle{
    if (normalTitle) {
        [self setTitle:normalTitle forState:UIControlStateNormal];
    }
    if (selectedTitle) {
        [self setTitle:selectedTitle forState:UIControlStateSelected];
    }

}

#pragma mark -- 设置颜色
- (void)setNormalTitleColor:(UIColor *)normalTitleColor selectedTitileColor:(UIColor *)selectedTitleColor{

    if (normalTitleColor) {
        [self setTitleColor:normalTitleColor forState:UIControlStateNormal];
    }
    if (selectedTitleColor) {
        [self setTitleColor:selectedTitleColor forState:UIControlStateSelected];

    }
}

#pragma mark -- 设置图片
-(void)setNormalImage:(UIImage *)normalImage selectedImage:(UIImage *)selectedImage{
    if (normalImage) {
        [self setImage:normalImage forState:UIControlStateNormal];
    }
    if (selectedImage) {
        [self setImage:selectedImage forState:UIControlStateSelected];
    }
}

- (void)doubleBtnChoose:(UIButton *)btn{

    if (btn.selected && !self.selected) {
        btn.selected = !btn.selected;
    }
    self.selected = !self.selected;
}

@end

@implementation UIImage (ZS)

+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size {
    if (!color || size.width <= 0 || size.height <= 0){return  nil;};
    CGRect rect = CGRectMake(0.0f, 0.0f, size.width, size.height);
    UIGraphicsBeginImageContextWithOptions(rect.size, NO, 0);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, color.CGColor);
    CGContextFillRect(context, rect);
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}

@end

@implementation UITextField (ZS)

- (void)setLeftView{
    UIView *view = [[UIView alloc] init];
    view.frame = CGRectMake(0, 0, 5, 1);
    self.leftView = view;
    self.leftViewMode = UITextFieldViewModeAlways;
}

@end

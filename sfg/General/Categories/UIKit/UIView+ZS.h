//
//  UIView+ZS.h
//  Enterprise
//
//  Created by sg on 2016/11/9.
//  Copyright © 2016年 com.sofn.lky.enterprise. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ZS)

@property (nonatomic) CGFloat left;        ///< Shortcut for frame.origin.x.
@property (nonatomic) CGFloat top;         ///< Shortcut for frame.origin.y
@property (nonatomic) CGFloat right;       ///< Shortcut for frame.origin.x + frame.size.width
@property (nonatomic) CGFloat bottom;      ///< Shortcut for frame.origin.y + frame.size.height
@property (nonatomic) CGFloat width;       ///< Shortcut for frame.size.width.
@property (nonatomic) CGFloat height;      ///< Shortcut for frame.size.height.
@property (nonatomic) CGFloat centerX;     ///< Shortcut for center.x
@property (nonatomic) CGFloat centerY;     ///< Shortcut for center.y
@property (nonatomic) CGPoint origin;      ///< Shortcut for frame.origin.
@property (nonatomic) CGSize  size;        ///< Shortcut for frame.size.


/**
 *  控件修圆
 *
 *  @param angle 修圆的弧度数
 */
- (void)radiusWithAngle:(CGFloat)angle;


/**
 *  自定义Button
 *
 *  @param title     文字
 *  @param imageName 图片名
 */
- (void)setCustomBtn:(NSString *)title image:(NSString *)imageName;

/**
 *  设置layer边框
 *
 *  @param radius 角
 */
- (void)setlayerCornerRadius:(CGFloat)radius;

/**
 *  设置layer边框
 *
 *  @param radius 角
 *  @param width  宽度
 *  @param color  颜色
 */
- (void)setlayerCornerRadius:(CGFloat)radius
                borderWidth :(CGFloat)width
                borderColor :(UIColor *)color;

@end

@interface UIButton (ZS)

/*
 *设置Normal和Seleted时不同的显示标题和图片等
 */
#pragma mark -- 设置标题
- (void)setNormalTitle:(NSString *)normalTitle selectedTitile:(NSString *)selectedTitle;

#pragma mark -- 设置颜色
- (void)setNormalTitleColor:(UIColor *)normalTitleColor selectedTitileColor:(UIColor *)selectedTitleColor;

#pragma mark -- 设置图片
- (void)setNormalImage:(UIImage *)normalImage selectedImage:(UIImage *)selectedImage;

/**
 *  双按钮单选
 *
 *  @param 另外一个按钮
 */
- (void)doubleBtnChoose:(UIButton *)btn;

@end

@interface UIImage (ZS)
/**
 *  设置一个纯色大小的图片
 *
 *  @param color  颜色
 *  @param size 大小
 */
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

@end
@interface UITextField (ZS)

- (void)setLeftView;

@end


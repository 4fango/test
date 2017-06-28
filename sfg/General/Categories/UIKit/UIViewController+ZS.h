//
//  UIViewController+ZS.h
//  Enterprise
//
//  Created by sg on 2016/11/10.
//  Copyright © 2016年 com.sofn.lky.enterprise. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^RefreshBlock)(NSArray *array);

@interface UIViewController (ZS)

- (void)hiddenNavigationBar;
- (void)showNavigationBar;
- (void)setNavigationBarTitle: (NSString *)text;
- (void)setBackImageWithName:(NSString *)name;
- (void)setRightView:(UIView *)customView;
- (void)setLeftView:(UIView *)customView;
- (void)setRightWithItems:(NSArray *)items;

@end

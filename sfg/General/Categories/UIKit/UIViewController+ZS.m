//
//  UIViewController+ZS.m
//  Enterprise
//
//  Created by sg on 2016/11/10.
//  Copyright © 2016年 com.sofn.lky.enterprise. All rights reserved.
//

#import "UIViewController+ZS.h"
#import "Constants.h"
#import "AppMacro.h"
@implementation UIViewController (ZS)
- (void)hiddenNavigationBar{

    [self.navigationController setNavigationBarHidden:YES animated:NO];
}

- (void)showNavigationBar{

    [self.navigationController setNavigationBarHidden:NO animated:YES];
}


- (void)setNavigationBarTitle:(NSString *)text{

    UILabel * titleView=[[UILabel alloc] initWithFrame:CGRectMake(0, 10, 100, 40)];
    [titleView setText:text];
    [titleView setTextColor:KWhiteColor];
    [titleView setFont:[UIFont systemFontOfSize:16]];
    titleView.textAlignment = NSTextAlignmentCenter;
    self.navigationItem.titleView = titleView;
}

- (void)setBackImageWithName:(NSString *)name{

    UIImageView *imageview = [[UIImageView alloc] init];
    imageview.frame = CGRectMake(0, 0, 20, 20);
    imageview.contentMode = UIViewContentModeScaleAspectFit;
    imageview.userInteractionEnabled = YES;
    imageview.image = KImage(name);
    UIBarButtonItem *btnItem = [[UIBarButtonItem alloc] initWithCustomView:imageview];
    self.navigationItem.leftBarButtonItem = btnItem;
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(handleBack)];
    [imageview addGestureRecognizer:tap];

}

- (void)setRightView:(UIView *)customView{

    UIBarButtonItem *btnItem = [[UIBarButtonItem alloc] initWithCustomView:customView];
    self.navigationItem.rightBarButtonItem = btnItem;
}
- (void)setLeftView:(UIView *)customView{

    UIBarButtonItem *btnItem = [[UIBarButtonItem alloc] initWithCustomView:customView];
    self.navigationItem.leftBarButtonItem = btnItem;
}

- (void)handleBack{

    if (self.navigationController.viewControllers.count > 0) {

        [self.navigationController popViewControllerAnimated:YES];

    }else{
        [self dismissViewControllerAnimated:NO completion:nil];
    }
}

- (void)setRightWithItems:(NSArray *)items{
    self.navigationItem.rightBarButtonItems = items;
}
@end

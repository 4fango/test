//
//  SFGForgorPasswordVC.m
//  sfg
//
//  Created by patrikstar on 2017/6/27.
//  Copyright © 2017年 patrikstar. All rights reserved.
//

#import "SFGForgorPasswordVC.h"

@interface SFGForgorPasswordVC ()
@property (weak, nonatomic) IBOutlet UITextField *verCodeTextFeild;
@property (weak, nonatomic) IBOutlet UITextField *usernameTextFeild;
@property (weak, nonatomic) IBOutlet UIButton *getVerCodeBtn;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextFeild;
@property (weak, nonatomic) IBOutlet UIButton *resetPasswordBtn;


@end

@implementation SFGForgorPasswordVC

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)resetPasswordAction:(id)sender {
}
- (IBAction)getVerCodeAction:(id)sender {
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end

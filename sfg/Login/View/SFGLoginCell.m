//
//  SFGLoginCell.m
//  sfg
//
//  Created by patrikstar on 2017/6/26.
//  Copyright © 2017年 patrikstar. All rights reserved.
//

#import "SFGLoginCell.h"

@interface SFGLoginCell ()

@property (weak, nonatomic) IBOutlet UIButton *loginBtn;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextfeild;
@property (weak, nonatomic) IBOutlet UITextField *usernameTextFeild;



@end

@implementation SFGLoginCell

- (void)awakeFromNib {
    [super awakeFromNib];
    [_loginBtn setlayerCornerRadius:5 borderWidth:0 borderColor:KLineColor];
}

- (IBAction)loginAction:(id)sender {
    if (_loginBlcok) {
        _loginBlcok();
    }
}
- (IBAction)forgotPasswordActoin:(id)sender {
    if (_forgotPasswordBlcok) {
        _forgotPasswordBlcok();
    }
}
- (IBAction)registeAction:(id)sender {
    if (_registBlcok) {
        _registBlcok();
    }
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end

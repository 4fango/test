//
//  SFGLoginVC.m
//  sfg
//
//  Created by patrikstar on 2017/6/26.
//  Copyright © 2017年 patrikstar. All rights reserved.
//

#import "SFGLoginVC.h"
#import "SFGLoginCell.h"
#import "SFGRegsterVC.h"
#import "SFGForgorPasswordVC.h"

@interface SFGLoginVC ()<UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) UITableView *tableView;

@end

@implementation SFGLoginVC
static NSString *cellIdentifier = @"loginCell";


- (UITableView *)tableView {
    if (_tableView == nil) {
        _tableView = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, KScreenWidth, KScreenHeight) style:UITableViewStylePlain];
        [self.view addSubview:_tableView];
        _tableView.delegate = self;
        _tableView.dataSource = self;
        [_tableView registerNib:[UINib nibWithNibName:@"SFGLoginCell" bundle:nil] forCellReuseIdentifier:cellIdentifier];
        _tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    }
    return _tableView;
}

#pragma mark - 页面加载
- (void)viewDidLoad {
    [super viewDidLoad];
    [self tableView];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}


#pragma mark - table view dataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 1;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    SFGLoginCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier];
    
    if(cell == nil) {
        cell = [[SFGLoginCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellIdentifier];
    }
    
    cell.loginBlcok = ^(){
    
        
    };
    
    cell.forgotPasswordBlcok = ^(){
    
        SFGForgorPasswordVC *forgorPasswordVC = [[SFGForgorPasswordVC alloc] init];
        UINavigationController *vc = [[UINavigationController alloc] initWithRootViewController:forgorPasswordVC];
        vc.title = @"找回密码";
        [self presentViewController:vc animated:YES completion:nil];

    };
    
    cell.registBlcok = ^(){
        
    
    };
    
    return cell;
}

#pragma mark - table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    
    NSLog(@"ddd" );
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return  KScreenHeight;
}



@end

//
//  SFGLoginCell.h
//  sfg
//
//  Created by patrikstar on 2017/6/26.
//  Copyright © 2017年 patrikstar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SFGLoginCell : UITableViewCell

@property (nonatomic, strong) void (^loginBlcok) (void);
@property (nonatomic, strong) void (^forgotPasswordBlcok) (void);
@property (nonatomic, strong) void (^registBlcok) (void);

@end

//
//  NSDictionary+Server.h
//  Lnspection
//
//  Created by MySun0919 on 2016/12/28.
//  Copyright © 2016年 com.sofn.lky.lnspection. All rights reserved.
//

#import <Foundation/Foundation.h>
//服务器返回数据 做容错判断
@interface NSDictionary (Server)
- (id)objectForCheckedKey:(id)key;

- (NSString *)stringForCheckedKey:(id)key;

+ (BOOL)httpCodeForKeyWithDic:(NSDictionary *)dic;

@end

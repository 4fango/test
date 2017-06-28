//
//  NSDictionary+Server.m
//  Lnspection
//
//  Created by MySun0919 on 2016/12/28.
//  Copyright © 2016年 com.sofn.lky.lnspection. All rights reserved.
//

#import "NSDictionary+Server.h"

@implementation NSDictionary (Server)
- (id)objectForCheckedKey:(id)key
{
    id object_ = [self objectForKey:key];
    
    if ([object_ isKindOfClass:[NSNull class] ]) {
        return nil;
    }
    
    if ([object_ isKindOfClass:[NSString class] ]) {
        return nil;
    }
    return object_;
}

- (NSString *)stringForCheckedKey:(id)key
{
    id object_ = [self objectForKey:key];
    
    if ([object_ isKindOfClass:[NSString class] ]) {
        
        return object_;
    }
    if([object_ isKindOfClass:[NSNumber class] ]) {
        
        return [object_ stringValue];
    }
    else
    {
        return @"";
    }
}
+ (BOOL)httpCodeForKeyWithDic:(NSDictionary *)dic
{
    for (NSString *keyStr in dic.allKeys)
    {
        if ([keyStr isEqualToString:@"httpCode"] || [keyStr isEqualToString:@"code"])
        {
            if ([[dic stringForCheckedKey:keyStr] isEqualToString:@"200"])
            {
                return YES;
            }
        }
    }
    return NO;
}

@end

//
//  NSString+dataType.m
//  Lnspection
//
//  Created by MySun0919 on 2017/1/3.
//  Copyright © 2017年 com.sofn.lky.lnspection. All rights reserved.
//

#import "NSString+dataType.h"

@implementation NSString (dataType)
+ (NSString *)stringForKeyWithType:(id)dataStr
{
    if ([dataStr isKindOfClass:[NSString class]])
    {
        return dataStr;
    }
    else if ([dataStr isKindOfClass:[NSNull class]])
    {
        return @"";
    }
    else
    {
        return [dataStr stringValue];
    }
}

@end

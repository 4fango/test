//
//  NSDate+ZS.m
//  Enterprise
//
//  Created by sg on 2016/12/19.
//  Copyright © 2016年 com.sofn.lky.enterprise. All rights reserved.
//

#import "NSDate+ZS.h"

@implementation NSDate (ZS)

- (NSString *)stringWithFormat:(NSString *)format {
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:format];
    [formatter setLocale:[NSLocale currentLocale]];
    return [formatter stringFromDate:self];
}

@end

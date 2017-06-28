//
//  appMacro.h
//  sfg
//
//  Created by patrikstar on 2017/6/27.
//  Copyright © 2017年 patrikstar. All rights reserved.
//

#ifndef appMacro_h
#define appMacro_h


/**
 App  相关
 */

/** 输出日志 */
#ifdef DEBUG
# define ZLog(fmt, ...) NSLog((@"[ClassName] = %@\t" "[FunctionName] = %s\t" "[Line] = %d \n" fmt), NSStringFromClass([self class]), __FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
# define ZLog(...);
#endif

#define weakSelf(self) __weak typeof(self) weakSelf = self
#define UserData [[BaseDataCache sharedManager] getLoginUserInfo]
#define ChangeDate(time) [[DateChange sharedInstance] chageDate:time]
#define removeNil(value)  (value ?value : @"")
#define UserDefaults [NSUserDefaults standardUserDefaults]
#define KScreenBounds  [[UIScreen mainScreen] bounds]
#define KScreenHeight CGRectGetHeight([[UIScreen mainScreen] bounds])
#define KScreenWidth  CGRectGetWidth([[UIScreen mainScreen] bounds])

#define KImage(imageName)  [UIImage imageNamed:imageName]

#define kColorWithRGB(r,g,b)    [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define kColorWithRGBA(r,g,b,a)    [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#define kBackgoundCellColor kColorWithRGB(250,250,250)
#define kbackfoundTableView kColorWithRGB(242,242,242)
#define kTextLabelColor kColorWithRGB(94,94,94)
#define kDetailLabelColor kColorWithRGB(193,193,193)
#define kTextLabelFont [UIFont systemFontOfSize:16.0f]
#define kDetailLabelFont [UIFont systemFontOfSize:14.0f]
#define kSectionHeaderColor kColorWithRGB(79,79,79)
#define kSectionHeaderFont [UIFont systemFontOfSize:18.0f]
#define KSectionHeaderHeight 50
#define KSectionFooterHeight 5
#define kTopLabelColor kColorWithRGB(0,0,0)
#define kTopLabelFont [UIFont systemFontOfSize:18.0f]
#define kBottomLabelColor kColorWithRGB(176,176,176)
#define kBottomLabelFont [UIFont systemFontOfSize:15.0f]
#define kLineViewColor kColorWithRGB(246,246,246)

#define KTextgrayColor kColorWithRGB(51,51,51)
#define KTitlegrayColor kColorWithRGB(237,237,237)
#define KWhiteColor kColorWithRGB(255,255,255)
#define KBlackColor kColorWithRGB(0,0,0)
#define KBorderColor kColorWithRGB(210,210,210)
#define KLineColor kColorWithRGB(222,222,222)
#define KBtnBGColor kColorWithRGB(54,137,254)
#define KSaleConfirmBGColor kColorWithRGB(230,230,230)
#define KBGColor kColorWithRGB(243,243,243)
#define KHeaderBGColor kColorWithRGBA(237,237,237,0.4)




#endif /* appMacro_h */

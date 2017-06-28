//
//  constants.h
//  sfg
//
//  Created by patrikstar on 2017/6/27.
//  Copyright © 2017年 patrikstar. All rights reserved.
//

#ifndef constants_h
#define constants_h


#pragma mark 应用常量

#define BUNDLE_IDENTIFIER @"com.sofn.lky.baselibs.BaseLibs"
#define DEFAULT_DATE_FORMART @"yyyy-MM-dd HH:mm:ss"

//替代系统的NSLog
#pragma mark - Log
#define DistributionMode 0 //0测试 1发布

#if DistributionMode
#define STLog(format, ...)
#else
#define STLog(format, ...) NSLog(format, ## __VA_ARGS__)

#endif

//系统版本
#pragma mark - System version

#define IS_IOS9 ([[[UIDevice currentDevice] systemVersion] floatValue] = 9.f)
#define IS_IOS8 ([[[UIDevice currentDevice] systemVersion] floatValue] = 8.f)
#define IS_IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] = 7.f)

//颜色
#pragma mark - Color

//RGB颜色值
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
//RGB颜色值，带透明度
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
//导航默认颜色
#define Navigation_def_Color [UIColor colorWithRed:47/255.0f green:177/255.0f blue:117/255.0f alpha:1]

#pragma mark - size
//屏幕 - 宽
#define Screen_Width [UIScreen mainScreen].bounds.size.width
//屏幕 - 高
#define Screen_Height [UIScreen mainScreen].bounds.size.height

//屏幕 比例
#define WIDTH_SCALE             [UIScreen mainScreen].bounds.size.width/375
#define HEIGHT_SCALE            [UIScreen mainScreen].bounds.size.height/667

//导航条的高度
#define NAVIGATION_BAR_HEIGHT  64.0f
#define kSegmentHeight 64
//Tabbar的高度
#define kTabBarH 48

#pragma mark - Notification


//删除所有通知
#define RemoveAllNotifications [[NSNotificationCenter defaultCenter] removeObserver:self]
//删除某一通知
#define RemoveANotification(observer , aName , anObject) [[NSNotificationCenter defaultCenter] removeObserver:observer name:aName object:anObject];
//注册通知
#define AddNotification(observer , aSelector , aName , anObject) [[NSNotificationCenter defaultCenter] addObserver:observer selector:aSelector name:aName object:anObject]
//发送通知
#define PostNotification(aName , anObject) [[NSNotificationCenter defaultCenter] postNotificationName:aName object:anObject]

#pragma mark - Font
//系统字体
#define SystemFont(x) [UIFont systemFontOfSize:x]
//粗体
#define BoldFont(x) [UIFont boldSystemFontOfSize:x]
//其他字体
#define OtherFont(fontName , x) [UIFont fontWithName:fontName size:x]
//字体比例
#define FontScale (60.0 / 54.0)


#pragma mark -- NetWork
//网络超时
#define kTimeoutInterval 8
//业务系统

//#define Business_LoginStr   @"http://172.16.7.170:8080"
//#define Business_HostUrlStr   @"http://172.16.7.170:8080"

#define Business_LoginStr  @"http://192.168.21.245"//测试
#define Business_HostUrlStr  @"http://192.168.21.245"//测试
//#define Business_HostUrlStr  @"http://10.0.51.1"

#pragma mark - others

#define MyAppDelegate ((AppDelegate *)([UIApplication sharedApplication].delegate))
//沙盒目录下Documents文件的路径
#define DocumentsPath [NSHomeDirectory() stringByAppendingPathComponent:@"Documents"]
#define ArchivingFilePath [DocumentsPath stringByAppendingPathComponent:@"archivingFile"]
//在block中需要弱引用，防止内存泄露
#define WeakSelfType __weak __typeof(&*self)
//类的初始化
#define Init(Class) [[Class alloc] init]
//带xib的控制器的初始化
#define InitControllerWithXib(x) [[NSClassFromString(x) alloc] initWithNibName:x bundle:nil]
//故事版（storyBoard）控制器初始化
#define InitControllerWithStoryBoard(storyBoardName , className) [[UIStoryboard storyboardWithName:storyBoardName bundle:nil] instantiateViewControllerWithIdentifier:className]
//读取单nib文件
#define LoadNibName(name) [[NSBundle mainBundle] loadNibNamed:name owner:self options:nil][0]
//当前版本
#define CurrentVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
//字符串安全取值
#define SafeStr(a) ([(a) isKindOfClass:[NSString class]] && [(a) length] > 0) ? [(a) description] : @""
//手机跳转至AppStore上
//appName: 将app名每个字的拼音全称用"-"链接，拼接成字符串
//appID: 将iTunes Connect 生成的appID，转成字符串
#define AppStore(appName , appID) [NSString stringWithFormat:@"https://itunes.apple.com/cn/app/%@/id%@?mt=8" , appName , appID]
//加载cell
#define LoadCell(cellClassStr) [[[NSBundle mainBundle] loadNibNamed:cellClassStr owner:self options:nil] lastObject]
//图片占位符
#define PlaceholderImage [UIImage imageNamed:@"common_default_avatar"]
//异步图片url DomainName（请求固定主机地址） imageName（图片的URL）
#define ImageUrl(imageName) [NSURL URLWithString:[DomainName stringByAppendingString:imageName]]
//字符串转URL
#define UrlWithStr(urlStr) [NSURL URLWithString:urlStr]
//所有城市 的宏
#define allCity       @"allCityDic"
//系统公用数据 的宏
#define basicData     @"PublicData"
//监测系统公用数据 的宏
#define basicData_Lnspection    @"basicData_Lnspection"




#endif /* constants_h */

//
//  EnumClass.h
//  Enterprise
//
//  Created by MySun0919 on 2016/11/9.
//  Copyright © 2016年 com.sofn.lky.enterprise. All rights reserved.
//
/**
 *  定义 枚举 的类
 */
@import Foundation;
#ifndef EnumClass_h
#define EnumClass_h

//对于输入框的枚举
typedef NS_ENUM(NSInteger , OptionalType)
{
    OptionalType_None = 0, //普通输入框，没有选项
    OptionalType_Other    //有选项
};
//监管主体 - 查询界面 区分要查询的对象
typedef NS_ENUM(NSInteger , SearchType)
{
    SearchType_MainBody = 0, //主体备案信息查询
    SearchType_Production,//生产流通信息查询
    SearchType_Detection//质量安全检测信息
};

//监测主体 -- 用于区分例行监测、专项监测、监督检查
typedef NS_ENUM(NSInteger , Monitoring)
{
    Monitoring_Routine = 0, //例行监测
    Monitoring_Special,//专项监测
    Monitoring_Supervision//监督检查
};
//针对请求方式，定义一个枚举
typedef NS_ENUM(NSInteger , NetRequestMethod)
{
    NetRequestMethodGet = 0,
    NetRequestMethodPost,
    NetRequestMethodPut,
    NetRequestMethodDelete
};
//针对不同服务器，定义一个枚举
typedef NS_ENUM(NSInteger , NetRequestBaseServer)
{
    NetRequestBaseServerSupervise = 0,//监管
    NetRequestBaseServerLnspection,//监测
    NetRequestBaseServerLawEnforcing,//执法
    NetRequestBaseServerEnterprise//生产
};
//针对不同服务器，定义一个枚举
typedef NS_ENUM(NSInteger , BasicDataType)
{
    BasicDataType_OrgType = 0,//公共数据 ---机构类别（有）
    BasicDataType_OrgLevel,//公共数据 ---机构级别
    BasicDataType_IndustryType,//公共数据 ---行业分类（有）
    BasicDataType_PostType,//公共数据 ---职务
    BasicDataType_PostLevel,//公共数据 ---职级
    BasicDataType_year,//公共数据 ---年份
    
    BasicDataType_OrgMode,//追溯系统基础数据 ---组织形式
    BasicDataType_SubjType,//追溯系统基础数据 ---主体类型
    BasicDataType_SubjProperty,//追溯系统基础数据 ---主体属性
    BasicDataType_UnitType,//追溯系统基础数据 ---数量单位
    BasicDataType_QtMode,//追溯系统基础数据 ---质检情况
    BasicDataType_ProductFrom,//追溯系统基础数据 ---产品来源
    BasicDataType_IssueType,//追溯系统基础数据 ---问题类型
    
    BasicDataType_MonitorModel,//监管系统基础数据 ---监测模型
    BasicDataType_PatrolScope,//监管系统基础数据 ---巡查范围
    BasicDataType_PatrolSubjType,//监管系统基础数据 ---巡查主体类型
    BasicDataType_PatrolResult,//监管系统基础数据 ---巡查结果
    BasicDataType_PatrolPeriod,//监管系统基础数据 ---巡查季度
    BasicDataType_OrgNature,//监管系统基础数据 ---机构性质
    BasicDataType_JudgeStandard,//监管系统基础数据 ---判定标准
    
    BasicDataType_MonitorBatch,//监管系统基础数据 ---监测批次（有）
    BasicDataType_MonitorKind//监管系统基础数据 ---监测种类（有）
};
#endif /* EnumClass_h */

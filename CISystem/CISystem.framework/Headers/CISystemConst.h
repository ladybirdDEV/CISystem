//
//  CISystemConst.h
//  CISystem
//
//  Created by Ben on 2023/6/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 回调类型
typedef NS_ENUM(NSUInteger, CISystemJSCallbackType) {
    CISystemJSCallbackTypeNormal, // 普通回调
    CISystemJSCallbackTypeSubscribe // 订阅回调
};

/// 参数名
typedef NSString * CISystemParamName;

/// api
FOUNDATION_EXPORT CISystemParamName const CISystemParamAPIName;
/// callbackId
FOUNDATION_EXPORT CISystemParamName const CISystemParamCallbackIdName;
/// info
FOUNDATION_EXPORT CISystemParamName const CISystemParamInfoName;


/// 响应：Native回调给小程序（网页）
typedef NSString * CISystemResKey;
/// 错误码（小程序框架设计如此：errMsg=ok代表成功，errMsg=fail代表失败）
/// 使用示例：@{CISystemResStatusKey : CISystemResStatusSuccess, CISystemResStatusMessageKey : @"This response is success"}
FOUNDATION_EXPORT CISystemResKey const CISystemResStatusKey;
FOUNDATION_EXPORT CISystemResKey const CISystemResStatusSuccess;
FOUNDATION_EXPORT CISystemResKey const CISystemResStatusFailure;
FOUNDATION_EXPORT CISystemResKey const CISystemResStatusMessageKey;

@interface CISystemConst : NSObject

@end

NS_ASSUME_NONNULL_END

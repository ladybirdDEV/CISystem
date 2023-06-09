//
//  CISystemTool.h
//  CISystem
//
//  Created by Ben on 2023/6/8.
//

#import <Foundation/Foundation.h>
#import "CISystemConst.h"

NS_ASSUME_NONNULL_BEGIN

// 持续向外回调消息
typedef void(^ResultCallback)(NSInteger callbackType, NSString * _Nullable callbackName, id _Nullable callbackParams, NSString * _Nullable errorString);

typedef NSDictionary<CISystemResKey, id> CISystemRes;

@interface CISystemTool : NSObject

+ (instancetype)tool;

/// 验证命令是否可用
/// @param command 名称
- (BOOL)canIUse:(NSString *)command;

/// System消息分发
/// @param message JS消息体
/// @param callback 消息回调
/// @discussion 该方法属于CISystemTool消息分发器，所有和System相关的消息都通过该方法进行转发
- (void)dispatchJSMessage:(NSDictionary *)message callback:(ResultCallback)callback;

@end

NS_ASSUME_NONNULL_END

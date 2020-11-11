//
//  HPDeviceCheck.h
//  HPFunction
//
//  Created by phq on 2020/11/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HPDevice : NSObject


/// 单列。
+ (instancetype)shareInstance;

/// 获取UUID。保证UUID的唯一性。
/// @param resultBlock 结束回调。
- (void)fetchUUID:(void (^)(NSString *token))resultBlock;

/// 获取IDFA。iOS14需要在info中设置字段，否则闪退。添加info.plist权限键NSUserTrackingUsageDescription和使用说明。
/// @param resultBlock 结束回调
- (void)fetchIDFA:(void (^)(NSString *token))resultBlock;

@end

NS_ASSUME_NONNULL_END

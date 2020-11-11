//
//  HPAppStatus.h
//  HPFunction
//
//  Created by phq on 2020/10/21.
//

#import <Foundation/Foundation.h>
@class HPAppStatus;

extern NSString * _Nonnull const HP_APP_STATUS_UPDATE_NOTIFICATION;
typedef void(^OnFinishCallback)(BOOL success, HPAppStatus * _Nonnull appStatus);

NS_ASSUME_NONNULL_BEGIN

@interface HPAppStatus : NSObject

/// 推荐使用单例
+ (instancetype)shareInstance;

/// 检测App状态
/// @param appId AppID
/// @param callback 结果回调。首次检测或版本更新时会触发通知HP_APP_STATUS_UPDATE_NOTIFICATION
- (void)requestStatusAppId:(NSString *)appId complete:(OnFinishCallback)callback;

@property (nonatomic, readonly) BOOL isFirstLaunch;           // 是否安装后首次启动
@property (nonatomic, readonly) BOOL isFirstLaunchOnUpdate;   // 是否更新版本后首次启动
@property (nonatomic, readonly) BOOL isRelease;               // 当前版本是否已上线AppStore
@property (nonatomic, readonly) BOOL hasUpdate;                                 // 是否有更新
@property (nonatomic, strong, nullable, readonly) NSString *releaseVersion;     // 更新的版本号
@property (nonatomic, strong, nullable, readonly) NSString *releaseNotes;       // 更新的记录
@property (nonatomic, strong, nullable, readonly) NSString *releaseUrl;         // 更新的AppStore地址
@property (nonatomic, strong, nullable, readonly) NSDictionary *updateInfo;     // 其它更新信息
@end

NS_ASSUME_NONNULL_END

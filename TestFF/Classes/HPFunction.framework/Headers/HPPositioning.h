//
//  HPPositioning.h
//  HPFunction
//
//  Created by phq on 2020/11/3.
//


//
// Info.plist 必须添加使用时权限 NSLocationWhenInUseUsageDescription : 申请定位用于给您做精准推荐
// Info.plist 必须添加临时使用权限 NSLocationTemporaryUsageDescriptionDictionary : 申请定位用于给您做精准推荐
// 高德地图经纬点查询 https://lbs.amap.com/console/show/picker

#import <Foundation/Foundation.h>
//#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
@class HPPositioningInfo;

NS_ASSUME_NONNULL_BEGIN

typedef void (^LocationBlock)(HPPositioningInfo * _Nullable info);
typedef void (^LocationHandler)(CLLocation *location);

@interface HPPositioning : NSObject
// 单例
+ (instancetype)shareInstance;
// 获取当前定位信息
- (void)locationCoordinate:(LocationBlock)locaiontBlock;
// 通过地址获取经纬度
- (void)locationWithAddressString:(NSString *)address Handler:(LocationHandler)handler;
@end


@interface HPPositioningInfo : NSObject
@property (nonatomic, strong) NSString *state;
@property (nonatomic, strong) NSString *city;
@property (nonatomic, strong) NSString *subLocality;
@property (nonatomic, strong) NSString *street;
@property (nonatomic, assign) CLLocationCoordinate2D corrrdinate;
@end

NS_ASSUME_NONNULL_END

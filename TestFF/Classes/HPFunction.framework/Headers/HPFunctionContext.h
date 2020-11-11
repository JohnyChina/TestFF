//
//  HPFunctionContext.h
//  HPFunction
//
//  Created by phq on 2020/10/21.
//

#import <Foundation/Foundation.h>
#import "HPAppStatus.h"

typedef NS_ENUM(NSInteger, HPOperatType) {
    HPOperatTypeApplication,           // App状态管理
};
NS_ASSUME_NONNULL_BEGIN

@interface HPFunctionContext : NSObject
+ (HPOperation *)initContext:(HPOperatType)operatType;
@end

NS_ASSUME_NONNULL_END

//
//  HPOperation.h
//  HPFunction
//
//  Created by phq on 2020/10/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HPOperation : NSObject

@property (nonatomic, copy) NSString *appid;
- (void)setNeedsUpdate;

@end

NS_ASSUME_NONNULL_END

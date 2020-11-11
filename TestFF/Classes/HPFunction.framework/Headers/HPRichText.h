//
//  HPRichText.h
//  HPFunction
//
//  Created by phq on 2020/11/3.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// textView 渲染html富文本&计算高度&图片适配
@interface HPRichText : NSObject

/// html 富文本设置，默认不将 \n替换<br/> 返回处理好的富文本
/// @param str html 未处理的字符串
/// @param font 字体
/// @param lineSpacing 行高
- (NSMutableAttributedString *)setAttributedString:(NSString *)str font:(UIFont *)font lineSpacing:(CGFloat)lineSpacing;

/// 计算html字符串高度
/// @param str html 未处理的字符串
/// @param font 字体
/// @param lineSpacing 行高
/// @param width 容器宽度
- (CGFloat)getHTMLHeightByStr:(NSString *)str font:(UIFont *)font lineSpacing:(CGFloat)lineSpacing width:(CGFloat)width;

/// 清除缓存
- (void)cleanCache;

@end

NS_ASSUME_NONNULL_END

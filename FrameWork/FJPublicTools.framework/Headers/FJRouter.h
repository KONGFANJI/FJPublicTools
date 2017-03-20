//
//  FJRouter.h
//  Tumbler
//
//  Created by XY on 2017/1/14.
//  Copyright © 2017年 Kfj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

extern NSString *const FJRouterParameter;
extern NSString *const FJRouterValue1Key;


typedef NS_ENUM(NSInteger, MODALTYPE) {
    PUSH = 0,
    PRESENT
};
@interface FJRouter : NSObject

/**
 如有需要，额外参数,字典不能传的
 对应的key为 FJRouterValue1Key
 */
@property (nonatomic) id value1;

+(instancetype)shareInstance;


/**
 <#Description#>
 
 @param fromVC <#fromVC description#>
 @param toVC <#toVC description#>
 @param SBName <#SBName description#>
 @param parameter 参数
 @param way modal方式
 @param isHide <#isHide description#>
 */
- (void)FJRouterFromVC:(UIViewController *)fromVC toVC:(NSString *)toVC SBName:(NSString *)SBName withParameter:(NSDictionary *)parameter way:(MODALTYPE)way isHideBottom:(BOOL)isHide animated:(BOOL)animated;

@end

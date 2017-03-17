//
//  FJFileCleanCache.h
//  Tumbler
//
//  Created by XY on 2017/2/20.
//  Copyright © 2017年 Kfj. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, sizeFormat) {
    defaultType,
    BType,
    KType,
    MType,
    GType,
};

typedef void(^cleanCacheBlock)(BOOL isSuccess);

@interface FJFileCleanCache : NSObject


/**
 清空缓存
 */
+ (void)cleanCaches:(void(^)(BOOL isSuccess))CompleteBlock;


/**
 计算缓存
 */
+ (NSString *)getCachesSize;

/**
 sizeString
 */
+ (NSString *)getCachesSizeFormat:(sizeFormat)sizeFormat;


/**
 删除指定文件夹下面的文件
 @param path 指定文件夹
 @param CompleteBlock 完成操作后回调
 */
+ (void)cleanCachesAtPath:(NSString *)path completeBlock:(void(^)(BOOL isSuccess))CompleteBlock;


/**
 
 */

/**
 可用空间少于传进来的值的时候，提醒清除缓存
 
 @param lessThanSize 可用空间少于这个传
 @return YES提示了，NO不提示
 */
+ (BOOL)remindCleanCache:(long long)lessThanSize;


@end

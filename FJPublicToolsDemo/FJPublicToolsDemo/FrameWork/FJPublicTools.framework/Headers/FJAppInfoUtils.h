//
//  FJAppInfoUtils.h
//  FJPublicTools
//
//  Created by XY on 2017/3/15.
//  Copyright © 2017年 KFJ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FJAppInfoUtils : NSObject

//版本号
+ (NSString *)appVersion;

//build号
+ (NSString *)buildVersion;

//app名称
+ (NSString *)appName;

//设备名称
+ (NSString *)machineName;

//iOS系统版本号
+ (NSString *)systermVersion;
@end

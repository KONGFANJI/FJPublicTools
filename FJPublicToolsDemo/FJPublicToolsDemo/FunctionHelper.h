//
//  FunctionHelper.h
//  FJPublicToolsDemo
//
//  Created by XY on 2017/3/17.
//  Copyright © 2017年 KFJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,funcID) {
    SENDEMAIL = 1,
    OPENAPP,
    OPENAPPLIST,
    SHARE,
    EXPORT,
    CLEARCHACHE,
    ROUTER,
    COMMENT
};

@interface FunctionHelper : NSObject


+ (void)didselectWithFuncId:(funcID)funcId andVC:(UIViewController *)vc;
@end

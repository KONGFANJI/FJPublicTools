//
//  FJPublicHelper.h
//  FJPublicTools
//
//  Created by XY on 2017/3/15.
//  Copyright © 2017年 KFJ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>

typedef void(^EmailResultBlock)(MFMailComposeResult result, NSError *error);

typedef void(^ApplistResultBlock)(BOOL result, NSError *error);

@interface FJPublicHelper : NSObject

+(instancetype)shareInstance;

/*
 调用系统邮箱发送邮件
 */
@property (nonatomic,strong) NSArray *toRecipients;//收件人
@property (nonatomic,strong) NSArray *ccRecipients;//抄送人
@property (nonatomic,strong) NSArray *bccRecipients;//密送人
@property (nonatomic,copy)   NSString *subject;//主题
@property (nonatomic,copy)   NSString *body;//内容
@property (nonatomic,assign) BOOL isHTML;//默认是NO
@property (nonatomic,assign) BOOL isShowAppInfo;//默认是NO

- (void)sendEmailWithViewCotroller:(UIViewController *)vc result:(EmailResultBlock)resultBlock;


/*
 在app内部打开某个APP的App Store的页面
 */
- (void)openAppWithIdentifier:(NSString *)appId andVC:(UIViewController *)vc;


/*
 在app内部打开某个开发者的app列表
 */
- (void)openAppWithArtistId:(NSInteger)artistId andNavigationCotroller:(UINavigationController *)naviController completionBlock:(ApplistResultBlock)block;



/*
 调用系统分享
 */
- (UIActivityViewController *)createActivityViewController:(NSArray *)activityItems andExcludedActivityTypes:(NSArray *)typesArray withVC:(UIViewController *)vc;


/*
 导出文件 view是点击的view或button
 */
- (void)exportFileWithUrl:(NSURL *)url andView:(UIView *)view;

@end

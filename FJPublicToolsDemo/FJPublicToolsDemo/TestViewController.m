//
//  TestViewController.m
//  FJPublicToolsDemo
//
//  Created by XY on 2017/3/20.
//  Copyright © 2017年 KFJ. All rights reserved.
//

#import "TestViewController.h"
#import <StoreKit/StoreKit.h>
@interface TestViewController ()

@end

@implementation TestViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    NSLog(@"%@",self.FJRouterParameter);
    self.title = [self.FJRouterParameter objectForKey:@"key1"];
    
//    [SKStoreReviewController requestReview];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

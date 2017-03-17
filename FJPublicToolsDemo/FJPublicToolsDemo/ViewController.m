//
//  ViewController.m
//  FJPublicToolsDemo
//
//  Created by XY on 2017/3/17.
//  Copyright © 2017年 KFJ. All rights reserved.
//

#import "ViewController.h"
#import <FJPublicTools/FJPublicTools.h>
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    [[FJPublicHelper shareInstance] openAppWithIdentifier:@"1178540071" andVC:self];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

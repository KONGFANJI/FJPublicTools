//
//  ViewController.m
//  FJPublicToolsDemo
//
//  Created by XY on 2017/3/17.
//  Copyright © 2017年 KFJ. All rights reserved.
//

#import "ViewController.h"
#import "FunctionHelper.h"
#import <FJPublicTools/FJPublicTools.h>

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic,strong) NSMutableArray *dataArray;
@end

@implementation ViewController

- (NSMutableArray *)dataArray{
    if (!_dataArray) {
        NSMutableArray *muArray = [NSMutableArray array];
        NSString *plistPath = [[NSBundle mainBundle] pathForResource:@"TableViewList" ofType:@"plist"];
        NSMutableDictionary *dict = [[NSMutableDictionary alloc] initWithContentsOfFile:plistPath];
        
        muArray = [dict mutableArrayValueForKey:@"TableViewList"];
        
        _dataArray = muArray;
    }
    
    return _dataArray;
}


- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.title = @"功能列表";
}

#pragma mark UITableViewDelegate
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    if ([[self.dataArray[indexPath.row] objectForKey:@"fun_id"] integerValue] == EXPORT) {
        NSURL *url = [NSURL fileURLWithPath:[[NSBundle mainBundle] pathForResource:@"JinPingMei" ofType:@"txt"]];

        [[FJPublicHelper shareInstance] exportFileWithUrl:url andView:[tableView cellForRowAtIndexPath:indexPath]];
    }else{
        [FunctionHelper didselectWithFuncId:[[self.dataArray[indexPath.row] objectForKey:@"fun_id"] integerValue] andVC:self];
    }
}
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 44;
}
- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section{
    return 0.1;
}
- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section{
    return 0.1;
}
//headerview
- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section{
    UIView *headerView = [UIView new];
    
    return headerView;
}
//footerView
- (UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section{
    UIView *footerView = [UIView new];
    
    return footerView;
}


#pragma mark UITableViewDataSource
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cell"];
    
    if (!cell) {
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"cell"];
    }
    
    NSDictionary *dict = self.dataArray[indexPath.row];
    
    cell.textLabel.text = [dict objectForKey:@"fun_title"];
    
    return cell;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return self.dataArray.count;
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}


@end

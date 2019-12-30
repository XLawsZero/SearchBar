//
//  ViewController.m
//  Test
//
//  Created by 九元航空 on 2019/12/27.
//  Copyright © 2019 齐庆斌. All rights reserved.
//

#import "ViewController.h"
#import <SearchBarFramework/SearchBarFramework.h>

#define MWidth [UIScreen mainScreen].bounds.size.width
#define MHeight [UIScreen mainScreen].bounds.size.height

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
//    SearchBarView * searchBar = [[SearchBarView alloc]initWithFrame:CGRectMake(0, 0, MWidth, 64) andTitleString:@"测试" andSearchBarType:SearchBarNone andLeftString:@"" andLeftImage:@"" andRightString:@"" andRightImage:@""];
//    [self.view addSubview:searchBar];
    
    SearchBarView * searchBar = [[SearchBarView alloc]initWithFrame:CGRectMake(0, 0, MWidth, 64) andPlaceholderString:@"测试" andSearchString:@"啦啦啦" andSearchBarType:SearchBarNone andLeftString:@"" andLeftImage:@"" andRightString:@"" andRightImage:@""];
    [self.view addSubview:searchBar];
}


@end

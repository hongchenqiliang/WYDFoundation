//
//  WYDViewController.m
//  WYDFoundation
//
//  Created by wangyudong on 01/21/2021.
//  Copyright (c) 2021 wangyudong. All rights reserved.
//

#import "WYDViewController.h"
#import <WYDFoundation/JRXZDataSafeTools.h>
@interface WYDViewController ()

@end

@implementation WYDViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSString *s = [JRXZDataSafeTools safeObj:@"sss"];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

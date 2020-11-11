//
//  TTViewController.m
//  TestFF
//
//  Created by phq8219@qq.com on 11/11/2020.
//  Copyright (c) 2020 phq8219@qq.com. All rights reserved.
//

#import "TTViewController.h"
#import <HPFunction/HPFunction.h>
@interface TTViewController ()

@end

@implementation TTViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    HPAppStatus *status = [HPAppStatus shareInstance];
    
}

@end

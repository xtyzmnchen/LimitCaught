//
//  LimitCaughtTool.m
//  zetar
//
//  Created by Bingo on 2021/5/14.
//  Copyright © 2020 维度科技. All rights reserved.
//


#import "LimitCaughtTool.h"
#import <objc/runtime.h>
#import "NSURLSession+ZXHttpProxy.h"

@implementation LimitCaughtTool

+(void)disableHttpProxy{
    [NSURLSession disableHttpProxy];
}
+(void)enableHttpProxy{
    [NSURLSession enableHttpProxy];
}


@end

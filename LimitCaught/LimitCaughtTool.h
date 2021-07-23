//
//  LimitCaughtTool.h
//  zetar
//
//  Created by Bingo on 2021/5/14.
//  Copyright © 2020 维度科技. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface LimitCaughtTool : NSObject

/**
 禁止网络代理抓包（开启后使用代理方式抓包的程序无法抓到此App中的请求，且计时处于代理网络下也不会影响App本身的请求）
 */
+(void)disableHttpProxy;

/**
 允许网络代理抓包
 */
+(void)enableHttpProxy;

@end

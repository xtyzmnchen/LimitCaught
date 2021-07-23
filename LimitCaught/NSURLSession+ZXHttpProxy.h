//
//  NSURLSession+ZXHttpProxy.h
//  zetar
//
//  Created by Bingo on 2021/5/14.
//  Copyright © 2020 维度科技. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSURLSession (ZXHttpProxy)
+(void)disableHttpProxy;
+(void)enableHttpProxy;
@end

NS_ASSUME_NONNULL_END

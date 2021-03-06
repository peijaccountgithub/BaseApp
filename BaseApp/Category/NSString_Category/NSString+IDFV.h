//
//  NSString+IDFV.h
//  Lovers
//
//  Created by PeiJun on 2017/10/17.
//  Copyright © 2017年 LeMeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (IDFV)

/**
 储存在钥匙串（Keychain）的IDFV
 
 @return IDFV
 */
+ (NSString *)getUniqueDeviceIdentifierAsString;

@end

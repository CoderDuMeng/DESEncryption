//
//  DesE.h
//  jmt
//
//  Created by IKT on 16/2/21.
//  Copyright © 2016年 BingoSoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DesE : NSObject


+(NSString *)encryptUseDES:(NSString *)plainText key:(NSString *)key;

+(NSString *)decryptUseDES:(NSString *)cipherText key:(NSString *)key;

@end

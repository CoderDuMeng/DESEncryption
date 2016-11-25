//
//  NSData+AES.h
//  jmt
//
//  Created by IKT on 16/2/19.
//  Copyright © 2016年 BingoSoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (AES)
- (NSData *)AES128EncryptWithKey:(NSString *)key iv:(NSString *)iv;
- (NSData *)AES128DecryptWithKey:(NSString *)key iv:(NSString *)iv;
@end

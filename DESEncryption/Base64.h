//
//  Base64.h
//  jmt
//
//  Created by IKT on 16/2/21.
//  Copyright © 2016年 BingoSoft. All rights reserved.
//

#import <Foundation/Foundation.h>

static const char encodingTable[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

@interface Base64 : NSObject
+(int)char2Int:(char)c;
+(NSString *)encode:(NSData *)data;
+(NSData *)decode:(NSString *)data;
@end
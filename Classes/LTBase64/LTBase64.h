//
//  LTBase64.h
//  RSADemo
//
//  Created by yelon on 2018/5/22.
//  Copyright © 2018年 yelon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LTBase64 : NSObject

//编码 string 2 string
+ (NSString *)LT_base64StringByEncodingString:(NSString *)string;
//编码 data 2 string
+ (NSString *)LT_base64StringByEncodingData:(NSData *)data;
//编码 data 2 data
+ (NSData *)LT_base64DataByEncodingData:(NSData *)data;
//编码 data 2 data
+ (NSData *)LT_base64DataContainNewLineByEncodingData:(NSData *)data;

//解码 encodedstring 2 data
+ (NSData *)LT_dataByBase64EncodedString:(NSString *)encodedstring;
//解码 encodedstring 2 string
+ (NSString *)LT_stringByBase64EncodedString:(NSString *)encodedstring;
//解码 encodedData 2 string
+ (NSString *)LT_stringByBase64EncodedData:(NSData*)encodedData;
//解码 data 2 data
+ (NSData *)LT_dataByBase64EncodedData:(NSData *)encodedData;

@end

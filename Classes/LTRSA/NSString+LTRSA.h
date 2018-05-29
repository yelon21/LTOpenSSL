//
//  NSString+LTRSA.h
//  RSADemo
//
//  Created by yelon on 2018/5/21.
//  Copyright © 2018年 yelon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSData+LTRSA.h"

@interface NSString (LTRSA)
#pragma mark 加密
//RSA加密 string 2 hexString
- (NSString *)lt_rsaEncodedHexStringWithKey:(RSA *)rsa_key
                                    keyType:(LTRSAKeyType)keyType
                                paddingType:(LTRSAPaddingType)paddingType;

//RSA加密 string 2 base64string
- (NSString *)lt_rsaEncodedBase64StringWithKey:(RSA *)rsa_key
                                       keyType:(LTRSAKeyType)keyType
                                   paddingType:(LTRSAPaddingType)paddingType;
//RSA加密 string 2 data
- (NSData *)lt_rsaEncodedDataWithKey:(RSA *)rsa_key
                             keyType:(LTRSAKeyType)keyType
                         paddingType:(LTRSAPaddingType)paddingType;
#pragma mark 解密
///解密  base64 string 2 hexString
- (NSString *)lt_rsaDecodedHexStringWithKey:(RSA *)rsa_Key
                                    keyType:(LTRSAKeyType)keyType
                                paddingType:(LTRSAPaddingType)paddingType;
//解密 base64 string 2 string
- (NSString *)lt_rsaDecodedStringWithKey:(RSA *)rsa_Key
                                 keyType:(LTRSAKeyType)keyType
                             paddingType:(LTRSAPaddingType)paddingType;
//解密 base64 string 2 decode data
- (NSData *)lt_rsaDecodedDataWithKey:(RSA *)rsa_Key
                             keyType:(LTRSAKeyType)keyType
                         paddingType:(LTRSAPaddingType)paddingType;
@end

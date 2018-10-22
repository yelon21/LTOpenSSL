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
//RSA加密 string 2 Encrypted hexString
- (NSString *)lt_rsaEncryptedHexStringWithKey:(RSA *)rsa_key
                                      keyType:(LTRSAKeyType)keyType
                                  paddingType:(LTRSAPaddingType)paddingType;

//RSA加密 string 2 Encrypted base64string
- (NSString *)lt_rsaEncryptedBase64StringWithKey:(RSA *)rsa_key
                                         keyType:(LTRSAKeyType)keyType
                                     paddingType:(LTRSAPaddingType)paddingType;
//RSA加密 string 2 Encrypted data
- (NSData *)lt_rsaEncryptedDataWithKey:(RSA *)rsa_key
                               keyType:(LTRSAKeyType)keyType
                           paddingType:(LTRSAPaddingType)paddingType;
#pragma mark 解密
///解密  base64 string 2 Decrypted hexString
- (NSString *)lt_rsaDecryptedHexStringWithKey:(RSA *)rsa_Key
                                      keyType:(LTRSAKeyType)keyType
                                  paddingType:(LTRSAPaddingType)paddingType;
//解密 base64 string 2 Decrypted string
- (NSString *)lt_rsaDecryptedStringWithKey:(RSA *)rsa_Key
                                   keyType:(LTRSAKeyType)keyType
                               paddingType:(LTRSAPaddingType)paddingType;
//解密 base64 string 2 decode data
- (NSData *)lt_rsaDecryptedDataWithKey:(RSA *)rsa_Key
                               keyType:(LTRSAKeyType)keyType
                           paddingType:(LTRSAPaddingType)paddingType;
@end


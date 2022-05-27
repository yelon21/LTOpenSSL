//
//  NSData+LTRSA.h
//  LTOpenSSL
//
//  Created by yelon on 2018/5/26.
//

#import <Foundation/Foundation.h>
#import "LTRSA.h"

@interface NSData (LTRSA)

//RSA加密 data 2 Encrypted hexString
- (NSString *)lt_rsaEncryptedHexStringWithKey:(NSValue *)keyValue
                                      keyType:(LTRSAKeyType)keyType
                                  paddingType:(LTRSAPaddingType)paddingType;
//RSA加密 data 2 Encrypted base64string
- (NSString *)lt_rsaEncryptedBase64StringWithKey:(NSValue *)keyValue
                                       keyType:(LTRSAKeyType)keyType
                                   paddingType:(LTRSAPaddingType)paddingType;
//RSA加密 data 2 Encrypted data
- (NSData *)lt_rsaEncryptedDataWithKey:(NSValue *)keyValue
                             keyType:(LTRSAKeyType)keyType
                         paddingType:(LTRSAPaddingType)paddingType;

//解密 data 2 Decrypted hex string
- (NSString *)lt_rsaDecryptedHexStringWithKey:(NSValue *)keyValue
                                    keyType:(LTRSAKeyType)keyType
                                paddingType:(LTRSAPaddingType)paddingType;
//解密 data 2 Decrypted string
- (NSString *)lt_rsaDecryptedStringWithKey:(NSValue *)keyValue
                                 keyType:(LTRSAKeyType)keyType
                             paddingType:(LTRSAPaddingType)paddingType;
//解密 data 2 data
- (NSData *)lt_rsaDecryptedDataWithKey:(NSValue *)keyValue
                             keyType:(LTRSAKeyType)keyType
                         paddingType:(LTRSAPaddingType)paddingType;
@end

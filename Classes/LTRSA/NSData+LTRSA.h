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
- (NSString *)lt_rsaEncryptedHexStringWithKey:(RSA *)rsa_key
                                      keyType:(LTRSAKeyType)keyType
                                  paddingType:(LTRSAPaddingType)paddingType;
//RSA加密 data 2 Encrypted base64string
- (NSString *)lt_rsaEncryptedBase64StringWithKey:(RSA *)rsa_key
                                       keyType:(LTRSAKeyType)keyType
                                   paddingType:(LTRSAPaddingType)paddingType;
//RSA加密 data 2 Encrypted data
- (NSData *)lt_rsaEncryptedDataWithKey:(RSA *)rsa_key
                             keyType:(LTRSAKeyType)keyType
                         paddingType:(LTRSAPaddingType)paddingType;

//解密 data 2 Decrypted hex string
- (NSString *)lt_rsaDecryptedHexStringWithKey:(RSA *)rsa_Key
                                    keyType:(LTRSAKeyType)keyType
                                paddingType:(LTRSAPaddingType)paddingType;
//解密 data 2 Decrypted string
- (NSString *)lt_rsaDecryptedStringWithKey:(RSA *)rsa_Key
                                 keyType:(LTRSAKeyType)keyType
                             paddingType:(LTRSAPaddingType)paddingType;
//解密 data 2 data
- (NSData *)lt_rsaDecryptedDataWithKey:(RSA *)rsa_Key
                             keyType:(LTRSAKeyType)keyType
                         paddingType:(LTRSAPaddingType)paddingType;
@end

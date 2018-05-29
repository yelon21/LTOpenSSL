//
//  NSData+LTRSA.h
//  LTOpenSSL
//
//  Created by yelon on 2018/5/26.
//

#import <Foundation/Foundation.h>
#import "LTRSA.h"

@interface NSData (LTRSA)

//RSA加密 data 2 hexString
- (NSString *)lt_rsaEncodedHexStringWithKey:(RSA *)rsa_key
                                    keyType:(LTRSAKeyType)keyType
                                paddingType:(LTRSAPaddingType)paddingType;
//RSA加密 data 2 base64string
- (NSString *)lt_rsaEncodedBase64StringWithKey:(RSA *)rsa_key
                                       keyType:(LTRSAKeyType)keyType
                                   paddingType:(LTRSAPaddingType)paddingType;
//RSA加密 data 2 data
- (NSData *)lt_rsaEncodedDataWithKey:(RSA *)rsa_key
                             keyType:(LTRSAKeyType)keyType
                         paddingType:(LTRSAPaddingType)paddingType;

//解密 data 2 hex string
- (NSString *)lt_rsaDecodedHexStringWithKey:(RSA *)rsa_Key
                                    keyType:(LTRSAKeyType)keyType
                                paddingType:(LTRSAPaddingType)paddingType;
//解密 data 2 string
- (NSString *)lt_rsaDecodedStringWithKey:(RSA *)rsa_Key
                                 keyType:(LTRSAKeyType)keyType
                             paddingType:(LTRSAPaddingType)paddingType;
//解密 data 2 data
- (NSData *)lt_rsaDecodedDataWithKey:(RSA *)rsa_Key
                             keyType:(LTRSAKeyType)keyType
                         paddingType:(LTRSAPaddingType)paddingType;
@end

//bytes 2 hexString
NSString *LT_HexStringFromBytes(const unsigned char *bytes,int length);
//data 2 hexString
NSString *LT_HexStringFromData(NSData *data);

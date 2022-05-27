//
//  NSData+LTAES.h
//  LTOpenSSL
//
//  Created by yelon on 2018/6/19.
//

#import <Foundation/Foundation.h>
#import "LTAES.h"
@interface NSData (LTAES)

//ECB
//AES加密 data 2 Encrypted base64string
- (NSString *)lt_aesECBEncryptedBase64StringWithKey:(NSData *)key
                                        paddingType:(LTAESPaddingType)paddingType;
//AES加密 data 2 Encrypted data
- (NSData *)lt_aesECBEncryptedDataWithKey:(NSData *)key
                              paddingType:(LTAESPaddingType)paddingType;
//解密 data 2 data
- (NSData *)lt_aesECBDecryptedDataWithKey:(NSData *)key
                              paddingType:(LTAESPaddingType)paddingType;

//CBC
//AES加密 data 2 Encrypted base64string
- (NSString *)lt_aesCBCEncryptedBase64StringWithKey:(NSData *)key
                                        paddingType:(LTAESPaddingType)paddingType
                                             ivData:(NSData *)ivData;
//AES加密 data 2 Encrypted data
- (NSData *)lt_aesCBCEncryptedDataWithKey:(NSData *)key
                              paddingType:(LTAESPaddingType)paddingType
                                   ivData:(NSData *)ivData;
//解密 data 2 data
- (NSData *)lt_aesCBCDecryptedDataWithKey:(NSData *)key
                              paddingType:(LTAESPaddingType)paddingType
                                   ivData:(NSData *)ivData;

//AES加解密 data 2 data
//patternType=LTAESPatternType_CBC时ivData需传入数据
- (NSData *)lt_aesEncryptedDataWithKey:(NSData *)key
                           encryptType:(LTAESEncryptType)encryptType
                           patternType:(LTAESPatternType)patternType
                           paddingType:(LTAESPaddingType)paddingType
                                ivData:(NSData *)ivData;
@end


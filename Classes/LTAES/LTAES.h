//
//  LTAES.h
//  LTOpenSSL
//
//  Created by yelon on 2018/6/5.
//

#import <Foundation/Foundation.h>
#import <openssl/aes.h>

typedef NS_ENUM(NSUInteger, LTAESEncryptType) {
    LTAESEncryptType_DEC = AES_DECRYPT,
    LTAESEncryptType_ENC = AES_ENCRYPT
};

typedef NS_ENUM(NSUInteger, LTAESPatternType) {
    LTAESPatternType_ECB,
    LTAESPatternType_CBC,
//    LTAESPatternType_CTR,
//    LTAESPatternType_OFB,
//    LTAESPatternType_CFB
};

typedef NS_ENUM(NSUInteger, LTAESPaddingType) {
    LTAESPaddingType_ZERO,
    LTAESPaddingType_PKCS5,
    LTAESPaddingType_PKCS7,
    LTAESPaddingType_IOS10126,
    LTAESPaddingType_ANSIX923
};


@interface LTAES : NSObject

+(NSData *)LT_aesEncryptData:(NSData *)inData
                     keyData:(NSData *)keyData
                 encryptType:(LTAESEncryptType)encryptType
                 patternType:(LTAESPatternType)patternType
                 paddingType:(LTAESPaddingType)paddingType;

+(NSData *)LT_aesEncryptData:(NSData *)inData
                     keyData:(NSData *)keyData
                 encryptType:(LTAESEncryptType)encryptType
                 patternType:(LTAESPatternType)patternType
                 paddingType:(LTAESPaddingType)paddingType
                      ivData:(NSData *)ivData;
@end

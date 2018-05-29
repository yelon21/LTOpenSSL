//
//  LTRSA.h
//  LTOpenSSL
//
//  Created by yelon on 2018/5/26.
//

#import <Foundation/Foundation.h>
#import <openssl/rsa.h>
#import "LTBase64.h"

typedef NS_ENUM(NSUInteger, LTRSAKeyType) {
    LTRSAKeyTypePublic,
    LTRSAKeyTypePrivate
};

typedef NS_ENUM(NSUInteger, LTRSAPaddingType) {
    LTRSAPaddingTypeNone = RSA_NO_PADDING,
    LTRSAPaddingTypePKCS1 = RSA_PKCS1_PADDING,
    //    LTRSAPaddingTypePKCS1
};

@interface LTRSA : NSObject

//RSA加密 encodingData 2 encodedData
+ (NSData *)LT_rsaEncodeData:(NSData *)encodingData
                     withKey:(RSA *)rsa_key
                     keyType:(LTRSAKeyType)keyType
                 paddingType:(LTRSAPaddingType)paddingType;

//解密 encodedData 2 decodeData
+ (NSData *)LT_rsaDecodeData:(NSData *)encodedData
                     withKey:(RSA *)rsa_key
                     keyType:(LTRSAKeyType)keyType
                 paddingType:(LTRSAPaddingType)paddingType;
@end

//生成密钥对
int LT_RSAGenerateRSAKey(RSA *rsa_key,int keyBits,NSString **pubPEMBase64Content,NSString **priPEMBase64Content);
//根据公钥模指获取公钥对象
RSA *LT_RSAKeyWithModulusAndPublicExponent(NSString *modulus,unsigned int pubExponent);
//根据模指获取密钥对象
RSA *LT_RSAKeyWithModulusAndPublicPrivateExponent(NSString *modulus,
                                                  unsigned int pubExponent,
                                                  NSString *priExponent);
//根据未加密pem文件获取密钥对象
RSA *LT_RSAKeyWithPEMKeyPath(NSString *pemKeyPath,LTRSAKeyType keyType);
//根据未加密pem base64 key获取密钥对象
RSA *LT_RSAKeyWithPEMContent(NSString *pemContent,LTRSAKeyType keyType);
//释放
void LT_RSAKeyFree(RSA *rsa_key);

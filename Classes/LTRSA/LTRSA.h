//
//  LTRSA.h
//  LTOpenSSL
//
//  Created by yelon on 2018/5/26.
//

#import <Foundation/Foundation.h>
#import "LTBase64.h"

typedef NS_ENUM(int, LTRSAKeyType) {
    LTRSAKeyTypePublic,
    LTRSAKeyTypePrivate
};

typedef NS_ENUM(int, LTRSAPaddingType) {
    LTRSAPaddingTypeNone = 3, // RSA_NO_PADDING
    LTRSAPaddingTypePKCS1 = 1, // RSA_PKCS1_PADDING
    //    LTRSAPaddingTypePKCS1
};

@interface LTRSA : NSObject

//RSA加密 encryptingData 2 encryptedData
+ (NSData *)LT_rsaEncryptedData:(NSData *)encryptingData
                        withKey:(NSValue *)keyValue
                        keyType:(LTRSAKeyType)keyType
                    paddingType:(LTRSAPaddingType)paddingType;

//解密 encryptedData 2 decryptData
+ (NSData *)LT_rsaDecryptData:(NSData *)encryptedData
                      withKey:(NSValue *)keyValue
                      keyType:(LTRSAKeyType)keyType
                  paddingType:(LTRSAPaddingType)paddingType;
@end

//生成密钥对
int LT_RSAGenerateRSAKey(NSValue *keyValue,int keyBits,NSString **pubPEMBase64Content,NSString **priPEMBase64Content);
//根据公钥模指获取公钥对象
NSValue *LT_RSAKeyWithModulusAndPublicExponent(NSString *modulus,unsigned int pubExponent);
//根据模指获取密钥对象
NSValue *LT_RSAKeyWithModulusAndPublicPrivateExponent(NSString *modulus,
                                                      unsigned int pubExponent,
                                                      NSString *priExponent);
//根据未加密pem文件获取密钥对象
NSValue *LT_RSAKeyWithPEMKeyPath(NSString *pemKeyPath,LTRSAKeyType keyType);
//根据未加密pem base64 key获取密钥对象
NSValue *LT_RSAKeyWithPEMContent(NSString *pemContent,LTRSAKeyType keyType);
//释放
void LT_KeyValueFree(NSValue *keyValue);
void LT_OpenSSL_cleanup(void);

//
//  LTOpenSSLUtil.h
//  LTOpenSSL
//
//  Created by yelon on 2018/6/19.
//

#import <Foundation/Foundation.h>

@interface LTOpenSSLUtil : NSObject

@end

//bytes 2 hexString
NSString *LT_HexStringFromBytes(const unsigned char *bytes,int length);
//data 2 hexString
NSString *LT_HexStringFromData(NSData *data);
//hexString 2 NSData
NSData *LT_HexStringToData(NSString *hexString);

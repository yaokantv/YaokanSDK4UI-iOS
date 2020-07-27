//
//  YaokanSDKHeader.h
//  Pods
//
//  Created by Don on 2017/1/16.
//
//

#ifndef YaokanSDKHeader_h
#define YaokanSDKHeader_h


#import <YaokanSDK/YKRemoteDeviceType.h>
#import <YaokanSDK/YKRemoteDeviceBrand.h>
#import <YaokanSDK/YKRemoteMatchDeviceKey.h>
#import <YaokanSDK/YKRemoteMatchDevice.h>
#import <YaokanSDK/YKRemoteDevice+YKDB.h>
#import <YaokanSDK/YKRemoteDeviceKey+CoreDataClass.h>
#import <YaokanSDK/YKRemoteDeviceKey+YKDB.h>


#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:a]

#define YKRGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define YKRGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:a]

#define YKScreenWidth [[UIScreen mainScreen] bounds].size.width
#define YKScreenHeight [[UIScreen mainScreen] bounds].size.height

#define kScreenWidth [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight [[UIScreen mainScreen] bounds].size.height


#endif /* YaokanSDKHeader_h */

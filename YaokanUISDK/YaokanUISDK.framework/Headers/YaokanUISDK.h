//
//  YaokanUISDK.h
//  YaokanUISDK
//
//  Created by Don on 2019/4/15.
//  Copyright © 2017年 Shenzhen Yaokan Technology Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <YaokanUISDK/YaokanSDKHeader.h>
#import <YaokanSDK/YKDevice.h>
#import <YaokanSDK/YKSetboxCarrier.h>
#import <YaokanSDK/YKArea.h>
#import <YaokanSDK/YKRemoteDeviceType.h>
#import <YaokanSDK/YKRemoteDeviceBrand.h>
#import <YaokanSDK/YaokanSDK.h>
//
#import "YKFadeButton.h"
#import <SDWebImage/SDWebImage.h>

typedef void(^YKDeviceCreatedBlock)(YKRemoteDevice * _Nullable obj, NSError * _Nullable error);

@class YKDevice;


NS_ASSUME_NONNULL_BEGIN

@interface YaokanUISDK : NSObject

@property (nonatomic,readonly) BOOL isSDKRegist;

//! Project version number for YaokanSDK.
FOUNDATION_EXPORT double YaokanSDKVersionNumber;

//! Project version string for YaokanSDK.
FOUNDATION_EXPORT const unsigned char YaokanSDKVersionString[];

- (instancetype)init NS_UNAVAILABLE;

/*
 获取 YaokanSDK 单例的实例
 
 @return 返回初始化后 SDK 唯一的实例。SDK 不管有没有初始化，都会返回一个有效的值。
 */
+ (instancetype)sharedInstance;


/**
 注册并初始化 SDK，有注册结果回调方法。
 
 注意：此接口调用成功后，其他接口的功能才可以正常使用。
 
 @param appId 应用 ID 是在遥看开发者中心注册。
@param secret 应用 secret 是在遥看开发者中心获得。
 @param completion 注册成功回调。
 */
+ (void)registApp:(NSString *)appId secret:(NSString *)secret completion:(void (^ __nullable)(NSError *error))completion;


+ (void)startCreateDeviceIn:(UIViewController *)viewController
                     device:(YKDevice *)device
             withCompletion:(YKDeviceCreatedBlock)completion;


+ (void)showDeviceIn:(UIViewController *)viewController remoteDevice:(YKRemoteDevice *)device;


+ (NSString *)sdkVersion;

@end

NS_ASSUME_NONNULL_END

# Yaokan SDK4 iOS 说明文档


  文件编号：YAOKANUISDKIOS-20200727
  版本：v1.0.0

  深圳遥看科技有限公司
  （版权所有，切勿拷贝）



| 版本 | 说明 | 备注 | 日期 |
| --- | --- | --- | --- |
| v1 | 新建 | yaokan | 20200727 |




## 1. 概述
YaokanUISDK 提供遥控器创建界面、遥控器显示界面 、遥控器设置界面(包含 遥控器学习界面入口、遥控器重命名，删除遥控器)


## 2. 文档阅读对象
使用 YaokanUISDK iOS 版的开发者

## 3. 接入

需要先向商务申请 `APP_ID`

### 3.1 集成

  1. 打开 `[your_project].xcodeproj`, 选择 Target `[your_target_name]` 打开 General 标签项。

  2. 在 `Embedded Binaries` 中点击 `+` 号，点击 `Add Other..` 打开 `YaokanUISDK` 目录选择 `YaokanUISDK.framework` 和 `YaokanSDK.framework` `CocoaAsyncSocket.framework` `MQTTClient.framework` `SocketRocket.framework`  `SDWebImage.framework`。
    直接将这6个文件拖进 `Embedded Binaries` 一样可以。

  3. 本SDK 最低支持版本为 iOS 11.0
  4. 本SDK 支持 arm64 armv7 x86_64 i386 架构,支持bitcode.
  5. `YaokanUISDK` 目录 下的 `YaokanSDK.framework` 为 YaokanSDK4  (有关YaokanSDK4详情 请浏览 https://github.com/yaokantv/YaokanSDK4-iOS)
## 4. API 列表

### 4.1 初始化接口

  1. 注册SDK
      ```objc  
      [YaokanUISDK registApp:@"更换为你的ID" secret:@"更换为你的密钥" completion:^(NSError * _Nonnull error) {
          
      }];
      ```

### 4.2 使用    

1. 创建遥控器

    ```objc
    //以present 的方式弹出创建界面
    //viewcontroller 不能为UINavigationController 或 UITabBarController 类型
    
    [YaokanUISDK startCreateDeviceIn:viewcontroller device:YKDevice类型硬件设备 withCompletion:^(YKRemoteDevice * _Nullable obj, NSError * _Nullable error) {
                          
    }];
    ```
2. 显示遥控器

    ```objc
     //以present 的方式弹出显示遥控器界面
     // viewcontroller 不能为UINavigationController 或 UITabBarController 类型
    [YaokanUISDK showDeviceIn:viewcontroller remoteDevice:YKRemoteDevice类型遥控器对象];
    
    ```
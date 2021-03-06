//
//  CheckVersion.h
//  CPMerchant
//
//  Created by weibin on 2017/4/25.
//  Copyright © 2017年 cwb. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AppStoreInfoModel;

typedef void(^CheckVersionBlock)(AppStoreInfoModel *appInfo);
typedef void(^CheckVersionDicBlock)(NSDictionary *appInfo);

@interface CheckVersion : NSObject

/**
 *  检测新版本(使用系统默认提示框)
 *
 *  appID:应用在Store里面的ID (应用的AppStore地址里面可获取)
 *  containCtrl: 提示框显示在哪个控制器上
 */
+ (void)checkNewEditionWithAppID:(NSString *)appID ctrl:(UIViewController *)containCtrl;

/**
 *  检测新版本(使用自定义提示框)
 *
 *  @param appID应用在Store里面的ID (应用的AppStore地址里面可获取)
 *  @param checkVersionBlock AppStore上版本信息回调block
 */
+ (void)checkNewEditionWithAppID:(NSString *)appID CustomAlert:(CheckVersionBlock)checkVersionBlock;

+ (void)checkNewEditionWithAppID:(NSString *)appID customAlertAndDic:(CheckVersionDicBlock)customAlertAndDic;

@end

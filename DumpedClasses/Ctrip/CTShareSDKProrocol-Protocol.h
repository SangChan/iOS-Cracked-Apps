//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTShareCallBack, CTShareModel, NSDictionary, NSString, UIViewController;

@protocol CTShareSDKProrocol <NSObject>
- (void)doIMOnClickWithParentVC:(UIViewController *)arg1 ShareModel:(CTShareModel *)arg2 shareResult:(CTShareCallBack *)arg3;
- (NSDictionary *)getActivityConfig;
- (_Bool)isIMUser;
- (NSString *)setWeibo3rdKeyForShareSDK;
- (NSString *)setWeixin3rdKeyForShareSDK;
- (NSString *)setQQ3rdKeyForShareSDK;
- (NSString *)clientIDForShareSDK;
@end

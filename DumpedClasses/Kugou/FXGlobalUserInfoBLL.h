//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface FXGlobalUserInfoBLL : NSObject
{
    NSLock *_lockGetUserInfo;
}

+ (void)initFXUserInfoFrompListFile:(id)arg1;
+ (void)initAutoFXUserInfo;
+ (void)saveFXUserInfo:(id)arg1 TopListFile:(id)arg2;
+ (void)saveFXGlobalUserInfo;
+ (id)sharedFXGBUserInfoBLL;
+ (id)userInfo;
- (void).cxx_destruct;
- (void)notifyUserLogout;
- (void)notifyUserLogin;
- (void)initNotification;
- (void)updateFXUserInfo:(CDUnknownBlockType)arg1;
- (void)sendEditError:(id)arg1 AndOid:(long long)arg2 AndInput:(id)arg3;
- (void)getFXUserInfo:(CDUnknownBlockType)arg1;
- (void)uploadThirdPartImg:(id)arg1 nickName:(id)arg2 userId:(long long)arg3;
- (void)dealloc;
- (id)init;
- (id)userInfo;

@end


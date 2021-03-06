//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UICKeyChainStore;

@interface UserInfo : NSObject
{
    UICKeyChainStore *_chainWrapper;
}

+ (id)getUserVerifyStatus;
+ (id)getLastContryName;
+ (void)setLastContryName:(id)arg1;
+ (id)getLastLoginAreaCode;
+ (void)setLastLoginAreaCode:(id)arg1;
+ (long long)getLastLoginType;
+ (void)setLastLoginType:(long long)arg1;
+ (id)getLastLoginIcon;
+ (void)setLastLoginIcon:(id)arg1;
+ (id)getLastLoginUserName;
+ (void)setLastLoginUserName:(id)arg1;
+ (long long)uiUserStatus;
+ (_Bool)isSubExpiredVIPWithSubType:(int)arg1;
+ (long long)vipTypeBeforeExpired;
+ (_Bool)isSubExpiredVIP;
+ (_Bool)isExpiredVIP;
+ (id)P00002;
+ (id)getLastVipLoginTime;
+ (void)saveLastVipLoginTime;
+ (void)clearSubUserKeyChain;
+ (_Bool)isSubAccountLogined;
+ (void)setUserDealine:(id)arg1;
+ (void)setUserStatus:(id)arg1;
+ (_Bool)isSubVip;
+ (void)clearSubUserInfo;
+ (_Bool)isLoginedSubAccount;
+ (id)subBindedLoginName;
+ (void)setSubBindedLoginName:(id)arg1;
+ (id)getSubUserSelfIntro;
+ (id)getSubCoverUrl;
+ (id)getSubSignature;
+ (id)getSubGender;
+ (id)getSubBirthday;
+ (id)getSubVipTypeName;
+ (id)getSubLoginUserName;
+ (void)setSubVipTime:(id)arg1;
+ (id)subVipTimeStamp;
+ (id)subVipTime;
+ (id)subUserName;
+ (void)setSubCookie:(id)arg1;
+ (id)subCookie;
+ (id)subUserIcon;
+ (long long)subUserVipType;
+ (long long)subUserStatus;
+ (void)setSubUserStatus:(id)arg1;
+ (void)setSubQidian:(id)arg1;
+ (id)getSubQidian;
+ (void)setSubUID:(id)arg1;
+ (id)getSubUserSpaceBg;
+ (id)getSubUID;
+ (void)setQidianWithSubType:(int)arg1 qidian:(id)arg2 uid:(id)arg3;
+ (id)getQidianWithSubType:(int)arg1;
+ (id)vipTypeNameWithSubType:(int)arg1;
+ (id)vipTimeStampWithSubType:(int)arg1;
+ (id)vipTimeWithSubType:(int)arg1;
+ (id)cookieWithSubType:(int)arg1;
+ (long long)userVipTypeWithSubType:(int)arg1;
+ (long long)userStatusWithSubType:(int)arg1;
+ (id)getUIDWithSubType:(int)arg1;
+ (id)getUserSpaceBg;
+ (id)getUserSelfIntro;
+ (id)getCoverUrl;
+ (id)getSignature;
+ (id)getgender;
+ (id)getBirthday;
+ (void)setQichuanToken:(id)arg1;
+ (id)ppqQichuanToken;
+ (id)getVipTypeName;
+ (id)getLoginUserName;
+ (void)setLoginUserName:(id)arg1;
+ (id)get3gInfo;
+ (void)clear3gInfo;
+ (void)insertpay3ginfo:(id)arg1;
+ (void)setQidian:(id)arg1;
+ (id)getQidian;
+ (id)vipTimeStamp;
+ (id)vipTime;
+ (id)userName;
+ (id)cookie;
+ (_Bool)isAppleExamine;
+ (id)specialCookie;
+ (_Bool)isSpecialPayed;
+ (id)UserIcon;
+ (id)UserName;
+ (id)userLoginType;
+ (id)getUID;
+ (id)acountName;
+ (_Bool)isVIP;
+ (_Bool)isLogin;
+ (long long)userVipType;
+ (long long)userStatus;
+ (void)clearSubUserVipInfo;
+ (void)clearUserVipInfo;
+ (void)clearUserInfo;
+ (id)sharedInstance;
@property(retain, nonatomic) UICKeyChainStore *chainWrapper; // @synthesize chainWrapper=_chainWrapper;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface QQWalletPersonalityManager : NSObject
{
    NSDictionary *_skinConfig;
}

+ (id)getTenPaySkinConfigKey;
+ (id)getTenPaySkinKey;
+ (void)setTenPaySkinState:(_Bool)arg1;
+ (_Bool)isTenPaySkinOpen;
+ (void)addLog:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)resourceDownloadFinished:(id)arg1;
- (void)updateLocalTenPaySkinState:(_Bool)arg1;
- (id)cacheImageForURL:(id)arg1;
- (void)downloadResourceWithUrlList:(id)arg1;
- (id)filePathWithConfig:(id)arg1;
- (id)filePathForSkinResource;
- (void)requestTenPaySkinConfigWithSkinID:(int)arg1 type:(int)arg2;
- (void)downloadSkinResource:(id)arg1;
- (void)closeTenPaySkin;
- (void)handleSkinRsp:(id)arg1 type:(int)arg2;
- (id)init;

@end


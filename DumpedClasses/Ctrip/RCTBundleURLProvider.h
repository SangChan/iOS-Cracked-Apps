//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RCTBundleURLProvider : NSObject
{
}

+ (id)sharedSettings;
@property(nonatomic) _Bool enableMinification;
@property(copy, nonatomic) NSString *jsLocation;
@property(nonatomic) _Bool enableLiveReload;
@property(nonatomic) _Bool enableDev;
- (void)updateDefaults:(id)arg1 forKey:(id)arg2;
- (id)jsBundleURLForBundleRoot:(id)arg1 fallbackResource:(id)arg2;
- (id)packagerServerURL;
- (id)packagerServerRoot;
- (id)guessPackagerHost;
- (_Bool)isPackagerRunning:(id)arg1;
- (void)resetToDefaults;
- (void)setDefaults;
- (void)settingsUpdated;
- (id)defaults;
- (id)init;

@end

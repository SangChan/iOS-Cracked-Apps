//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IQYLoginEntrWhitelist : NSObject
{
    NSString *_bundleId;
    NSString *_appId;
    NSString *_appIcon;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSString *appIcon; // @synthesize appIcon=_appIcon;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


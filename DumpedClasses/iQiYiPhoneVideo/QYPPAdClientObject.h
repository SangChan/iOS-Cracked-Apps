//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AdsClient;

@interface QYPPAdClientObject : NSObject
{
    AdsClient *_adclient;
}

+ (id)sharedAdsClient;
+ (id)getFocusAdclient;
@property(retain, nonatomic) AdsClient *adclient; // @synthesize adclient=_adclient;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end


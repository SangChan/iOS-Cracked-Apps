//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBLocationAccessManager, FBLocationManager;

@protocol FBLocationAccessManagerDelegate <NSObject>
- (void)locationAccessManager:(FBLocationAccessManager *)arg1 accessDenied:(unsigned long long)arg2;
- (void)locationAccessManager:(FBLocationAccessManager *)arg1 accessGranted:(FBLocationManager *)arg2;
@end


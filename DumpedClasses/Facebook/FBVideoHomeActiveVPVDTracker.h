//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBFeedUnitDebugInfoManager, FBHScrollViewDurationTracker, FBVideoHomeSession, NSMutableDictionary;

@interface FBVideoHomeActiveVPVDTracker : NSObject
{
    NSMutableDictionary *_activeStoryVPVDs;
    NSMutableDictionary *_activeChannelVPVDs;
    FBHScrollViewDurationTracker *_viewDurationTracker;
    FBVideoHomeSession *_videoHomeSession;
    FBFeedUnitDebugInfoManager *_debugInfoManager;
}

- (void).cxx_destruct;
- (double)_stopTrackingHScrollElement:(id)arg1;
- (void)_stopTrackingHScrollElementWithChannelData:(id)arg1 uniqueID:(id)arg2;
- (void)_stopTrackingHScrollElementWithStoryTrackingData:(id)arg1 uniqueID:(id)arg2;
- (void)_startTrackingHScrollElementWithChannelData:(id)arg1 uniqueID:(id)arg2;
- (void)_startTrackingHScrollElementWithStoryTrackingData:(id)arg1 uniqueID:(id)arg2;
- (_Bool)videoHomeSessionIsActiveForVPVLogging:(id)arg1;
- (void)removeAll;
- (void)stopTrackingWhenViewDisappears;
- (void)startTrackingWhenViewAppearsWithPlayerSubOrigin:(id)arg1;
- (void)stopTrackingWithChannelData:(id)arg1;
- (void)stopTrackingWithStoryData:(id)arg1;
- (void)startTrackingWithChannelData:(id)arg1 playerSubOrigin:(id)arg2;
- (void)startTrackingWithStoryData:(id)arg1 playerSubOrigin:(id)arg2 feedUnit:(id)arg3;
- (id)initWithViewDurationTracker:(id)arg1 videoHomeSession:(id)arg2 debugInfoManager:(id)arg3;

@end

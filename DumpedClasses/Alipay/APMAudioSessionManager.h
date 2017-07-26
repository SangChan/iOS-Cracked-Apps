//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface APMAudioSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_requestedObjectMap;
    NSMutableDictionary *_configuration;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSMapTable *requestedObjectMap; // @synthesize requestedObjectMap=_requestedObjectMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (unsigned long long)getModeForObject:(id)arg1;
- (void)configAudioSessionMode:(id)arg1;
- (void)configAudioSessionCategory:(id)arg1 options:(unsigned long long)arg2 needStopOtherApp:(_Bool)arg3;
- (_Bool)needNotifyOtherApp;
- (void)resume;
- (_Bool)removeObject:(id)arg1;
- (void)addObject:(id)arg1 mode:(unsigned long long)arg2;
- (void)configAudioSession:(id)arg1;
- (_Bool)needStopModeInQueue:(unsigned long long)arg1 forMode:(unsigned long long)arg2;
- (void)notifyOtherSessionsToResume;
- (void)notifyOtherSessionsToStopForMode:(unsigned long long)arg1 object:(id)arg2;
- (void)resumeAudioSession;
- (void)configAudioSessionForMode:(unsigned long long)arg1 object:(id)arg2;
- (_Bool)hasHigherPriorityModesInQueueForMode:(unsigned long long)arg1;
- (_Bool)isOtherAudioPlaying;
- (void)requestResignActive:(id)arg1;
- (_Bool)requestBecomeActive:(id)arg1 mode:(unsigned long long)arg2;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface XMPPTimer : NSObject
{
    _Bool isStarted;
    unsigned long long start;
    unsigned long long timeout;
    unsigned long long interval;
    struct dispatch_source_s *timer;
}

- (void)cancel;
- (void)updateTimeout:(double)arg1 fromOriginalStartTime:(_Bool)arg2;
- (void)startWithTimeout:(double)arg1 interval:(double)arg2;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 eventHandler:(CDUnknownBlockType)arg2;

@end


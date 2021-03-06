//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol MQQSCBProgressTimerDelegate;

@interface MQQSCBProgressTimer : NSObject
{
    id <MQQSCBProgressTimerDelegate> _delegate;
    long long _progress;
    NSTimer *_progressTimer;
    double _totalProgress;
    double _actualProgress;
}

+ (id)timer;
@property(nonatomic) double actualProgress; // @synthesize actualProgress=_actualProgress;
@property(nonatomic) double totalProgress; // @synthesize totalProgress=_totalProgress;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
@property(nonatomic) id <MQQSCBProgressTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;
- (void)resume;
- (void)fireWithProgress:(long long)arg1;
- (void)updateProgress:(id)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface DRCMessageCenter : NSObject
{
    NSMutableSet *_eventSubjects;
}

+ (id)shareInstance;
@property(readonly, nonatomic) NSMutableSet *eventSubjects; // @synthesize eventSubjects=_eventSubjects;
- (void).cxx_destruct;
- (void)fireEvent:(id)arg1;
- (id)onEvent:(id)arg1 action:(CDUnknownBlockType)arg2 takeUntil:(id)arg3;
- (id)onEvent:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)init;

@end


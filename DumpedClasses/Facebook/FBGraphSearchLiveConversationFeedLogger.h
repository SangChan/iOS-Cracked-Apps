//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBGraphSearchLiveConversationFeedLogger : NSObject
{
    NSString *_serpSessionID;
    NSString *_querySemantic;
}

- (void).cxx_destruct;
- (id)_commonLoggingExtras;
- (void)logEvent:(id)arg1 extra:(id)arg2;
- (id)initWithSERPSessionID:(id)arg1 graphSearchQuerySemantic:(id)arg2;

@end


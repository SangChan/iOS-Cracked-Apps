//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUserSession, NSString;
@protocol FBServiceTransactionMutating;

@interface FBInstantGameFriendsLeaderboardFetcher : NSObject
{
    FBUserSession *_session;
    NSString *_gameAppID;
    id <FBServiceTransactionMutating> _requestToken;
}

- (void).cxx_destruct;
- (void)fetchGameLeaderboardWithCallbackQueue:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithSession:(id)arg1 gameAppID:(id)arg2;

@end

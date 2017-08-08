//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBEntityCardsPageDownloadQueryProvider-Protocol.h"

@class FBUserSession, NSArray, NSString;
@protocol FBMemPersonPaginatedFriendListHelper;

@interface FBMemPersonFriendsEntityCardDataSourceAdapter : NSObject <FBEntityCardsPageDownloadQueryProvider>
{
    FBUserSession *_session;
    NSArray *_friendIDsArray;
    id <FBMemPersonPaginatedFriendListHelper> _helper;
    NSString *_sourceID;
}

+ (id)entityCardDataSourceForFriendArray:(id)arg1 initialSelectedIndex:(unsigned long long)arg2 helper:(id)arg3 session:(id)arg4 sourceID:(id)arg5 tailPageInfo:(id)arg6;
- (void).cxx_destruct;
- (id)queryToDownloadPageInScrollDirection:(unsigned long long)arg1 pageInfo:(id)arg2 pageSize:(unsigned long long)arg3 contextItemCount:(unsigned long long)arg4 displaySurface:(id)arg5 displaySurfaceSourceId:(id)arg6 location:(id)arg7;
- (id)queryToDownloadEntityIDs:(id)arg1 contextItemCount:(unsigned long long)arg2 displaySurface:(id)arg3 displaySurfaceSourceId:(id)arg4 location:(id)arg5;
- (id)entityKeyPath;
- (id)pageInfoKeyPath;
- (id)initWithFriendArray:(id)arg1 session:(id)arg2 helper:(id)arg3 sourceID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

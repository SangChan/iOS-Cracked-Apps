//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QYBisonAlbum, QYUStarBillboardManager;

@interface QYUStarBillboardEntity : NSObject
{
    QYUStarBillboardManager *_manager;
    NSString *_imgUrl;
    NSString *_name;
    NSString *_voteText;
    long long _rank;
    long long _paopaoID;
    QYBisonAlbum *_album;
    CDUnknownBlockType _voteDoneAction;
    CDUnknownBlockType _toFansAction;
}

@property(copy, nonatomic) CDUnknownBlockType toFansAction; // @synthesize toFansAction=_toFansAction;
@property(copy, nonatomic) CDUnknownBlockType voteDoneAction; // @synthesize voteDoneAction=_voteDoneAction;
@property(retain, nonatomic) QYBisonAlbum *album; // @synthesize album=_album;
@property(nonatomic) long long paopaoID; // @synthesize paopaoID=_paopaoID;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(copy, nonatomic) NSString *voteText; // @synthesize voteText=_voteText;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;
- (_Bool)isTop;
- (void)toFansActionFired;
- (void)voteActionFired;
- (id)init;

@end


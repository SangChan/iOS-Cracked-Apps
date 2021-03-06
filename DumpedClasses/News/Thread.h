//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class Article, NSArray, NSDictionary, NSNumber, NSString, TTRichSpanText;

@interface Thread : ExploreOriginalData
{
    TTRichSpanText *_richContent;
    NSArray *_comments;
    NSString *_content;
    NSString *_contentRichSpanJSONString;
    NSDictionary *_forum;
    NSArray *_friendDiggList;
    NSDictionary *_groupDict;
    NSArray *_largeImageList;
    NSDictionary *_position;
    NSString *_schema;
    NSNumber *_threadId;
    NSArray *_thumbImageList;
    NSArray *_ugcCutImageList;
    NSString *_title;
    NSDictionary *_user;
    NSNumber *_isFake;
    NSNumber *_isPosting;
    NSNumber *_readCount;
    NSArray *_filterWords;
    NSNumber *_createTime;
    NSString *_score;
    NSNumber *_status;
    NSNumber *_repostType;
    NSNumber *_originGroupID;
    NSString *_originItemID;
    NSNumber *_originThreadID;
    NSDictionary *_forwardInfo;
    NSNumber *_showOrigin;
    NSString *_showTips;
    Article *_originGroup;
    Thread *_originThread;
    long long _updateToNotifyCount;
}

+ (void)setThreadAuthorOnlyWithThreadID:(id)arg1;
+ (void)setThreadHasBeDeletedWithThreadID:(id)arg1;
+ (unsigned long long)cacheLevel;
+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)dbName;
@property long long updateToNotifyCount; // @synthesize updateToNotifyCount=_updateToNotifyCount;
@property(retain, nonatomic) Thread *originThread; // @synthesize originThread=_originThread;
@property(retain, nonatomic) Article *originGroup; // @synthesize originGroup=_originGroup;
@property(retain, nonatomic) NSString *showTips; // @synthesize showTips=_showTips;
@property(retain, nonatomic) NSNumber *showOrigin; // @synthesize showOrigin=_showOrigin;
@property(retain, nonatomic) NSDictionary *forwardInfo; // @synthesize forwardInfo=_forwardInfo;
@property(retain, nonatomic) NSNumber *originThreadID; // @synthesize originThreadID=_originThreadID;
@property(copy, nonatomic) NSString *originItemID; // @synthesize originItemID=_originItemID;
@property(retain, nonatomic) NSNumber *originGroupID; // @synthesize originGroupID=_originGroupID;
@property(retain, nonatomic) NSNumber *repostType; // @synthesize repostType=_repostType;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *score; // @synthesize score=_score;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
@property(retain, nonatomic) NSNumber *readCount; // @synthesize readCount=_readCount;
@property(retain, nonatomic) NSNumber *isPosting; // @synthesize isPosting=_isPosting;
@property(retain, nonatomic) NSNumber *isFake; // @synthesize isFake=_isFake;
@property(retain, nonatomic) NSDictionary *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *ugcCutImageList; // @synthesize ugcCutImageList=_ugcCutImageList;
@property(retain, nonatomic) NSArray *thumbImageList; // @synthesize thumbImageList=_thumbImageList;
@property(retain, nonatomic) NSNumber *threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSDictionary *position; // @synthesize position=_position;
@property(retain, nonatomic) NSArray *largeImageList; // @synthesize largeImageList=_largeImageList;
@property(retain, nonatomic) NSDictionary *groupDict; // @synthesize groupDict=_groupDict;
@property(retain, nonatomic) NSArray *friendDiggList; // @synthesize friendDiggList=_friendDiggList;
@property(retain, nonatomic) NSDictionary *forum; // @synthesize forum=_forum;
@property(retain, nonatomic) NSString *contentRichSpanJSONString; // @synthesize contentRichSpanJSONString=_contentRichSpanJSONString;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
- (void).cxx_destruct;
- (void)diggWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)threadforwardSuccess:(id)arg1;
- (void)blockedUnblockedUserNotification:(id)arg1;
- (void)followNotification:(id)arg1;
- (void)threadAdminOperationNotification:(id)arg1;
- (void)entityPropertyChange:(id)arg1;
- (void)removeObserveNotification;
- (void)addObserveNotification;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeOriginThreadKVO;
- (void)addOriginThreadKVO;
- (void)removeKVO;
- (void)addKVO;
@property(readonly, retain, nonatomic) TTRichSpanText *richContent; // @synthesize richContent=_richContent;
- (id)getLargeImageModels;
- (id)getUGCCutImageModels;
- (id)getThumbImageModels;
@property(readonly, nonatomic) _Bool isThreadAudited;
@property(readonly, nonatomic) _Bool isThreadDeleted;
- (_Bool)isFollowed;
- (_Bool)isFollowing;
- (id)userAuthInfo;
- (id)verifiedContent;
- (id)screenName;
- (id)userID;
- (void)save;
- (id)mergeDictionary:(id)arg1 toDictionary:(id)arg2;
- (void)updateWithDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end


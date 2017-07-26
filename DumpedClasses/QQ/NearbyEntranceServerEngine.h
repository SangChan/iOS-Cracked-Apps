//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, QQLockDictionary, QQNearByFilterModel;

@interface NearbyEntranceServerEngine : NSObject
{
    NSString *_city;
    NSString *_province;
    _Bool _isWebFiltered;
    QQNearByFilterModel *_nearbyFilter;
    int _xo;
    QQLockDictionary *_aioTipsConfigDict;
    QQLockDictionary *_followStatusDict;
    NSMutableDictionary *_preservedDict;
    _Bool _isNeedChangeFilterModel;
}

+ (id)getInstance;
@property(nonatomic) _Bool isNeedChangeFilterModel; // @synthesize isNeedChangeFilterModel=_isNeedChangeFilterModel;
- (void).cxx_destruct;
- (void)saveCharmInfoModel:(id)arg1;
- (id)loadCharmInfoModel;
- (void)getNearByCharmInfo:(id)arg1 withFinishBlock:(CDUnknownBlockType)arg2;
- (void)getNearByDiffCharmInfo:(id)arg1;
- (void)makeupRichStateForEncounterListArray:(id)arg1;
- (id)init;
- (void)reqTmpMsgSig:(unsigned long long)arg1 from:(long long)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)parseMsgType0x210SubMsgType0xc9:(const void *)arg1 DataLen:(int)arg2 subMsgType:(unsigned int)arg3;
- (void)reqNearbyFollowUser:(id)arg1 isFollow:(_Bool)arg2 from:(int)arg3 sourceId:(long long)arg4 subSourceId:(long long)arg5 success:(CDUnknownBlockType)arg6 failed:(CDUnknownBlockType)arg7;
- (void)reqNearbyFollowStatus:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)reqFollowStatusFromPreserved:(id)arg1;
- (id)reqFollowStatusFromCache:(id)arg1;
- (void)preserveFollowStatus:(id)arg1;
- (id)nearbyAioTipsConfig:(id)arg1;
- (void)updateNearbyAioTipsConfig:(id)arg1;
- (void)loadNearbyAioTipsConfig;
- (void)clearNearbyAioAssistantCache;

// Remaining properties
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) _Bool isWebFiltered; // @dynamic isWebFiltered;
@property(retain, nonatomic) QQNearByFilterModel *nearbyFilter; // @dynamic nearbyFilter;
@property(copy, nonatomic) NSString *province; // @dynamic province;

@end

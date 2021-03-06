//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSMutableDictionary;

@interface FriendListReqItem : SAMRequestItem
{
    unsigned long long _myUIN;
    unsigned long long _friendUIN;
    _Bool _isAllFriend;
    int _fromIndex;
    int _reqCount;
    int _totalFriendCount;
    int _totalRetryTimes;
    double _reqTime;
    NSMutableDictionary *_friends;
    NSMutableDictionary *_groups;
}

@property(retain, nonatomic) NSMutableDictionary *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSMutableDictionary *friends; // @synthesize friends=_friends;
@property(nonatomic) double reqTime; // @synthesize reqTime=_reqTime;
@property(nonatomic) int totalRetryTimes; // @synthesize totalRetryTimes=_totalRetryTimes;
- (void).cxx_destruct;
- (_Bool)parseFriendIsMask:(struct FriendInfo)arg1;
- (void)updateVipInfo:(struct FriendInfo)arg1;
- (id)convertFriendFromInfo:(const struct FriendInfo *)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long friendUIN; // @dynamic friendUIN;
@property(nonatomic) int fromIndex; // @dynamic fromIndex;
@property(nonatomic) _Bool isAllFriend; // @dynamic isAllFriend;
@property(nonatomic) unsigned long long myUIN; // @dynamic myUIN;
@property(nonatomic) int reqCount; // @dynamic reqCount;
@property(nonatomic) int totalFriendCount; // @dynamic totalFriendCount;

@end


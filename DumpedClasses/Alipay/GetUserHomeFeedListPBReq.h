//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface GetUserHomeFeedListPBReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasLastFeedId; // @dynamic hasLastFeedId;
@property(readonly) _Bool hasPageSize; // @dynamic hasPageSize;
@property(readonly) _Bool hasTargetUserId; // @dynamic hasTargetUserId;
@property(retain, nonatomic) NSString *lastFeedId; // @dynamic lastFeedId;
@property(nonatomic) int pageSize; // @dynamic pageSize;
@property(retain, nonatomic) NSString *targetUserId; // @dynamic targetUserId;

@end

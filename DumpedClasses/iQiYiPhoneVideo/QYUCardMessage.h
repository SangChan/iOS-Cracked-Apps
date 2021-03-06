//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QYUCardMessage : NSObject
{
    unsigned long long _messageType;
    long long _messageSubType;
    id _data;
}

+ (id)messageWithType:(unsigned long long)arg1 subType:(long long)arg2 data:(id)arg3;
+ (id)messageWithPopupType:(long long)arg1 data:(id)arg2;
+ (id)messageWithRemoteEvent:(id)arg1 cell:(id)arg2;
+ (id)messageWithRemoteEvent:(id)arg1;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) long long messageSubType; // @synthesize messageSubType=_messageSubType;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;

@end


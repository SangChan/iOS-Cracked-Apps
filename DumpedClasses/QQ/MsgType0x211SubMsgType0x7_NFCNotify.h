//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MsgType0x211SubMsgType0x7_NFCNotify : NSObject
{
    long long _uSessionID;
    NSString *_strFileName;
    NSData *_vFileMd5;
    unsigned int _uServerIp;
    unsigned int _uServerPort;
    NSData *_vurlNotify;
    NSData *_vTokenKey;
    long long _uFileLen;
    NSData *_strOriginfile_md5;
    unsigned int _uOriginfiletype;
    unsigned int _uGroupID;
    unsigned int _uGroupSize;
    unsigned int _uGroupCurrentIndex;
    unsigned int _uBatchID;
    unsigned int _uGroupFlag;
    int _xo;
}

+ (id)parseFromMsgBodyPack:(struct CPBMessageDecoder *)arg1;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *strFileName; // @dynamic strFileName;
@property(retain, nonatomic) NSData *strOriginfile_md5; // @dynamic strOriginfile_md5;
@property(nonatomic) unsigned int uBatchID; // @dynamic uBatchID;
@property(nonatomic) long long uFileLen; // @dynamic uFileLen;
@property(nonatomic) unsigned int uGroupCurrentIndex; // @dynamic uGroupCurrentIndex;
@property(nonatomic) unsigned int uGroupFlag; // @dynamic uGroupFlag;
@property(nonatomic) unsigned int uGroupID; // @dynamic uGroupID;
@property(nonatomic) unsigned int uGroupSize; // @dynamic uGroupSize;
@property(nonatomic) unsigned int uOriginfiletype; // @dynamic uOriginfiletype;
@property(nonatomic) unsigned int uServerIp; // @dynamic uServerIp;
@property(nonatomic) unsigned int uServerPort; // @dynamic uServerPort;
@property(nonatomic) long long uSessionID; // @dynamic uSessionID;
@property(retain, nonatomic) NSData *vFileMd5; // @dynamic vFileMd5;
@property(retain, nonatomic) NSData *vTokenKey; // @dynamic vTokenKey;
@property(retain, nonatomic) NSData *vurlNotify; // @dynamic vurlNotify;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZStatisticsFile.h"

@class NSString;

@interface MQZStatisticsUpload : MQZStatisticsFile
{
    NSString *_serverIP;
    unsigned long long _compressTime;
    long long _flow;
    int _uppAppID;
    int _retry;
    long long _uploadType;
    long long _uploadSource;
    long long _ipValue;
    long long _videoType;
}

@property(nonatomic) long long flow; // @synthesize flow=_flow;
- (void).cxx_destruct;
- (void)reportUploadFlow:(unsigned long long)arg1;
- (void)endMonitor;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long compressTime; // @dynamic compressTime;
@property(nonatomic) long long ipValue; // @dynamic ipValue;
@property(nonatomic) int retry; // @dynamic retry;
@property(copy, nonatomic) NSString *serverIP; // @dynamic serverIP;
@property(nonatomic) long long uploadSource; // @dynamic uploadSource;
@property(nonatomic) long long uploadType; // @dynamic uploadType;
@property(nonatomic) long long videoType; // @dynamic videoType;

@end


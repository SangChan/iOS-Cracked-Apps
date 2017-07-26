//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface QBHTTPReportService : NSObject
{
    unsigned long long _reportQVCount;
    unsigned long long _reportTDNSCount;
    unsigned long long _reportSNDSCount;
    unsigned long long _bakReportQVCount;
    unsigned long long _bakReportTDNSCount;
    unsigned long long _bakReportSNDSCount;
    NSString *_desKey;
    NSString *_rsaKey;
    NSMutableDictionary *_subHostInfo;
    NSMutableDictionary *_tempSubHostInfo;
}

+ (void)statisticsPVWithHost:(id)arg1 Error:(id)arg2;
+ (id)sharedInstance;
@property(retain) NSMutableDictionary *tempSubHostInfo; // @synthesize tempSubHostInfo=_tempSubHostInfo;
@property(retain) NSMutableDictionary *subHostInfo; // @synthesize subHostInfo=_subHostInfo;
- (void).cxx_destruct;
- (void)handleRespError:(id)arg1;
- (void)handleRespData:(id)arg1;
- (id)validSubPVStringFromDic:(id)arg1;
- (id)getPostData:(_Bool)arg1;
- (void)restoreCounts;
- (void)resetCounts;
- (id)serviceUrl;
- (void)onDoIncreaseSTValueNotification:(id)arg1;
- (void)dealloc;
- (void)onDoReportNotification:(id)arg1;
- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;
- (void)generateKey;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSHTTPResponseProtocol.h"

@class NSData, NSDictionary, NSString;

@interface SSHTTPResponseProtocolItem : NSObject <SSHTTPResponseProtocol>
{
    NSData *_responseData;
    NSDictionary *_allHeaderFields;
}

@property(retain, nonatomic) NSDictionary *allHeaderFields; // @synthesize allHeaderFields=_allHeaderFields;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ARUPConnectionGroup, NSData, NSDictionary, NSError;

@protocol ARUPConnectionGroupDelegate <NSObject>

@optional
- (void)connection:(ARUPConnectionGroup *)arg1 onWritable:(int)arg2;
- (void)connection:(ARUPConnectionGroup *)arg1 sendDataError:(NSError *)arg2;
- (void)connection:(ARUPConnectionGroup *)arg1 receiveData:(NSData *)arg2;
- (void)connection:(ARUPConnectionGroup *)arg1 close:(NSError *)arg2;
- (void)connection:(ARUPConnectionGroup *)arg1 connectFail:(NSError *)arg2;
- (void)connection:(ARUPConnectionGroup *)arg1 didConnect:(NSDictionary *)arg2;
- (void)startConnect:(ARUPConnectionGroup *)arg1;
@end

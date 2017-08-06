//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSURLConnection;
@protocol QLWebCheckerDelegate;

@interface QLWebChecker : NSObject
{
    _Bool connectFinished;
    _Bool downloadFinished;
    _Bool failed;
    _Bool isCanceled;
    NSURLConnection *_connection;
    NSString *errorString;
    NSMutableArray *_aryURLs;
    id <QLWebCheckerDelegate> _delegate;
    NSMutableArray *_aryCheckItems;
}

+ (id)SharedInstance;
@property(readonly) NSMutableArray *aryCheckItems; // @synthesize aryCheckItems=_aryCheckItems;
@property id <QLWebCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSMutableArray *aryURLs; // @synthesize aryURLs=_aryURLs;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)checkWithDelegate:(id)arg1;
- (void)checkThread:(id)arg1;
- (void)cancel;
- (void)notifyFinished;
- (void)notifyProgress:(double)arg1;
- (id)ipAddressByHostname:(id)arg1;
- (id)itemWithHostname:(id)arg1;
- (void)addURL:(id)arg1;
- (void)clearCache;
- (_Bool)isReady;
- (void)dealloc;

@end

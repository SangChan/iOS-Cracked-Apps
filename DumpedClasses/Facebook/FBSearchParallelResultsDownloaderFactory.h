//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSearchResultsDownloaderFactoryProtocol-Protocol.h"

@class NSString;

@interface FBSearchParallelResultsDownloaderFactory : NSObject <FBSearchResultsDownloaderFactoryProtocol>
{
}

+ (id)downloaderForSession:(id)arg1 serpConfig:(id)arg2 announcers:(id)arg3 scenePath:(id)arg4 bootstrapEntityData:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

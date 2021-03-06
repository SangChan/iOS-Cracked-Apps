//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTShareAppMethodSource.h"

@class NSString;

@interface TTShareMethodSource : NSObject <TTShareAppMethodSource>
{
}

+ (void)load;
- (void)replaceQQImageURL:(id)arg1;
- (void)shareItem:(id)arg1 extroInfo:(id)arg2;
- (id)videoImageWith:(id)arg1;
- (void)activityHasSharedWith:(id)arg1 error:(id)arg2 desc:(id)arg3;
- (void)activityWillSharedWith:(id)arg1;
- (id)topmostViewController;
- (_Bool)isZoneVersion;
- (_Bool)isPadDevice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


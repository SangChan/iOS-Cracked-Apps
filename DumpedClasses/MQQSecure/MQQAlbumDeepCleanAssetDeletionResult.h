//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface MQQAlbumDeepCleanAssetDeletionResult : NSObject
{
    _Bool _success;
    NSArray *_successArray;
    NSArray *_failedArray;
    long long _deleteFileSize;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) long long deleteFileSize; // @synthesize deleteFileSize=_deleteFileSize;
@property(retain, nonatomic) NSArray *failedArray; // @synthesize failedArray=_failedArray;
@property(retain, nonatomic) NSArray *successArray; // @synthesize successArray=_successArray;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;
@protocol MQQPhotoFilterDelegate><NSObject, OS_dispatch_queue;

@interface MQQPhotoFilter : NSObject
{
    _Bool _isCancelled;
    _Bool _isFiltering;
    id <MQQPhotoFilterDelegate><NSObject> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_dataSource;
    NSMutableArray *_originalDataSource;
    unsigned long long _optionsHasFiltered;
    unsigned long long _optionsToFiltered;
    NSLock *_cancelledLock;
    long long _suspendIndex;
    NSMutableArray *_resultArray;
    id <MQQPhotoFilterDelegate><NSObject> _suspendDelegate;
}

+ (float)getSimilarityWith:(SEL)arg1 value1:(unsigned long long *)arg2 value2:(unsigned long long *)arg3;
+ (void)getValueWith:(SEL)arg1 value:(unsigned long long *)arg2 image:(id)arg3;
+ (id)imageForSimilaryWithAsset:(id)arg1;
+ (_Bool)isScreenShotForAssetSize:(struct CGSize)arg1;
@property(nonatomic) id <MQQPhotoFilterDelegate><NSObject> suspendDelegate; // @synthesize suspendDelegate=_suspendDelegate;
@property(retain, nonatomic) NSMutableArray *resultArray; // @synthesize resultArray=_resultArray;
@property(nonatomic) long long suspendIndex; // @synthesize suspendIndex=_suspendIndex;
@property(retain, nonatomic) NSLock *cancelledLock; // @synthesize cancelledLock=_cancelledLock;
@property(nonatomic) unsigned long long optionsToFiltered; // @synthesize optionsToFiltered=_optionsToFiltered;
@property(nonatomic) unsigned long long optionsHasFiltered; // @synthesize optionsHasFiltered=_optionsHasFiltered;
@property(retain, nonatomic) NSMutableArray *originalDataSource; // @synthesize originalDataSource=_originalDataSource;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool isFiltering; // @synthesize isFiltering=_isFiltering;
@property(nonatomic) id <MQQPhotoFilterDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (void)callbackForComplete;
- (void)callbackForInterruptWithErrorCode:(long long)arg1;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (long long)durationForBlock:(CDUnknownBlockType)arg1;
- (void)removeDataFromAssetArray:(id)arg1 andUpdateResultArray:(id)arg2;
- (void)resume;
- (void)suspend;
- (void)clearDelegateAndCancel;
- (void)startWithOptions:(unsigned long long)arg1;
- (void)reloadDataWithAssetArray:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)calcSimilarityWithLastAsset:(id)arg1 currAsset:(id)arg2 similarity:(float)arg3 assetArray:(id)arg4 resultArray:(id)arg5 addedResultArray:(id)arg6;
- (void)progressWithCurrCount:(unsigned long long *)arg1 totalCount:(unsigned long long)arg2 lastProgress:(double *)arg3 assetArray:(id)arg4 resultArray:(id)arg5 addedResultArray:(id)arg6;
- (void)filterSimilaryPhotos;
- (void)filterVideos;
- (void)filterBurstPhotos;
- (void)filterCustomPhotosWithOptions:(unsigned long long)arg1;
- (void)filterWeChatVideos;
- (_Bool)isScreenShotForAsset:(id)arg1;
- (void)filterScreenShotPhotos;
- (void)handleCacheWithEditedStatus:(id)arg1 cacheItem:(id)arg2 isFilter:(_Bool)arg3 resultSetType:(long long *)arg4 assetArrayToCache:(id)arg5;
- (void)getHDRWithLastAsset:(id)arg1 currAsset:(id)arg2 resultSetType:(long long *)arg3 isAssetHDR:(_Bool *)arg4;
- (void)progressWithCurrCount:(unsigned long long *)arg1 totalCount:(unsigned long long)arg2 lastProgress:(double *)arg3 resultArray:(id)arg4 addedResultArray:(id)arg5;
- (_Bool)isEditedForAsset:(id)arg1;
- (void)filterAdjustedPhotos;
- (void)saveGroupedAssetWithResultArray:(id)arg1 addedResult:(id)arg2 groupArray:(id)arg3;
- (void)filterSimilarVideos;
- (void)filterLivePhotos;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSFileManager, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SDImageCache : NSObject
{
    NSFileManager *_fileManager;
    long long _maxCacheAge;
    unsigned long long _maxCacheSize;
    NSCache *_memCache;
    NSString *_diskCachePath;
    NSMutableArray *_customPaths;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSString *_eternalDiskCachePath;
}

+ (id)sharedImageCache;
+ (id)formatNOSDownloadUrl:(id)arg1 size:(struct CGSize)arg2;
+ (id)formatCompressSingleSideImageUrl:(id)arg1 size:(struct CGSize)arg2 originSize:(struct CGSize)arg3;
+ (id)formatCompressSingleSideImageUrl:(id)arg1 size:(struct CGSize)arg2;
+ (id)generateUrl:(id)arg1 qualityParam:(unsigned long long)arg2;
+ (id)generalCompressParam:(struct CGSize)arg1 ratio:(unsigned long long)arg2;
+ (struct CGSize)generateNewImageSize:(struct CGSize)arg1 originSize:(struct CGSize)arg2;
+ (id)formatWebpDownloadUrl:(id)arg1 size:(struct CGSize)arg2 customQuality:(unsigned long long)arg3 ratio:(unsigned long long)arg4 originSize:(struct CGSize)arg5;
+ (id)formatJpgDownloadUrl:(id)arg1 size:(struct CGSize)arg2 customQuality:(unsigned long long)arg3 ratio:(unsigned long long)arg4 forceJpg:(_Bool)arg5;
+ (_Bool)isInMusicPictureHosts:(id)arg1;
+ (id)formatDownloadUrl:(id)arg1 size:(struct CGSize)arg2 customQuality:(unsigned long long)arg3 ratio:(unsigned long long)arg4 forceJpg:(_Bool)arg5 originSize:(struct CGSize)arg6;
+ (id)formatDownloadUrl:(id)arg1 size:(struct CGSize)arg2 customQuality:(unsigned long long)arg3 ratio:(unsigned long long)arg4 forceJpg:(_Bool)arg5;
+ (id)formatDownloadUrl:(id)arg1 size:(struct CGSize)arg2 customQuality:(unsigned long long)arg3 ratio:(unsigned long long)arg4 originSize:(struct CGSize)arg5;
+ (id)formatDownloadUrl:(id)arg1 size:(struct CGSize)arg2 customQuality:(unsigned long long)arg3 ratio:(unsigned long long)arg4;
+ (id)formatDownloadUrl:(id)arg1 size:(struct CGSize)arg2 customQuality:(unsigned long long)arg3 forceJpg:(_Bool)arg4;
+ (id)formatDownloadUrl:(id)arg1 size:(struct CGSize)arg2 customQuality:(unsigned long long)arg3;
+ (id)formatDownloadUrl:(id)arg1 size:(struct CGSize)arg2 forceJpg:(_Bool)arg3;
+ (id)formatDownloadUrl:(id)arg1 size:(struct CGSize)arg2;
+ (id)addFormatParamter:(id)arg1 forUrl:(id)arg2;
+ (id)forceJpgForUrl:(id)arg1;
+ (id)addPngParamterForUrl:(id)arg1;
@property(retain, nonatomic) NSString *eternalDiskCachePath; // @synthesize eternalDiskCachePath=_eternalDiskCachePath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSMutableArray *customPaths; // @synthesize customPaths=_customPaths;
@property(retain, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(nonatomic) long long maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
- (void).cxx_destruct;
- (_Bool)stringContainsQuerySymbol:(id)arg1;
- (id)transferURL:(id)arg1;
- (void)calculateSizeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (int)getDiskCount;
- (unsigned long long)getSize;
- (void)backgroundCleanDisk;
- (void)cleanDisk;
- (void)clearDisk;
- (void)clearMemory;
@property(nonatomic) unsigned long long maxMemoryCost;
- (void)removeImageFromEternalDisk:(id)arg1;
- (void)removeImageForKey:(id)arg1 fromDisk:(_Bool)arg2;
- (void)removeImageForKey:(id)arg1;
- (id)queryDiskCacheForKey:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
- (id)diskImageForKey:(id)arg1;
- (id)diskImageDataBySearchingAllPathsForKey:(id)arg1;
- (void)copyImageFileFromPath:(id)arg1 forKey:(id)arg2 sync:(_Bool)arg3 isEternal:(_Bool)arg4;
- (void)doCopyFromPathToEternal:(id)arg1 forKey:(id)arg2;
- (void)copyImageFileFromPath:(id)arg1 forKey:(id)arg2 sync:(_Bool)arg3 toMemory:(_Bool)arg4;
- (void)copyImageFileFromPath:(id)arg1 forKey:(id)arg2 sync:(_Bool)arg3;
- (void)doCopyFromPath:(id)arg1 forKey:(id)arg2;
- (id)imageFromDiskCacheForKey:(id)arg1;
- (id)imageFromMemoryCacheForKey:(id)arg1;
- (_Bool)diskImageExistsWithKey:(id)arg1;
- (_Bool)diskImageExistsWithKeyOnMainThread:(id)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2 toDisk:(_Bool)arg3;
- (void)storeImage:(id)arg1 forKey:(id)arg2 isEternal:(_Bool)arg3;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 recalculateFromImage:(_Bool)arg2 imageData:(id)arg3 forKey:(id)arg4 toMemeory:(_Bool)arg5 toDisk:(_Bool)arg6 isEternal:(_Bool)arg7;
- (void)storeImage:(id)arg1 recalculateFromImage:(_Bool)arg2 imageData:(id)arg3 forKey:(id)arg4 toDisk:(_Bool)arg5 isEternal:(_Bool)arg6;
- (void)storeImage:(id)arg1 recalculateFromImage:(_Bool)arg2 imageData:(id)arg3 forKey:(id)arg4 toDisk:(_Bool)arg5;
- (id)cachedFileNameForKey:(id)arg1;
- (id)eternalCachePathForKey:(id)arg1;
- (id)defaultCachePathForKey:(id)arg1;
- (id)cachePathForKey:(id)arg1 inPath:(id)arg2;
- (void)addReadOnlyCachePath:(id)arg1;
- (void)dealloc;
- (id)initWithNamespace:(id)arg1;
- (id)init;
- (void)removeImageFromEternalDisk:(id)arg1 size:(struct CGSize)arg2;

@end


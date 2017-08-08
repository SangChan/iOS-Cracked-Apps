//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBGraphQLConnectionController, FBImageDownloader, FBMemReactionSurfaceConfig, FBReactionCollectionViewDataSource, FBReactionComponentsCollectionViewDataSourceAdapter, FBReactionGraphQLManager, FBReactionSurfaceContentView;

@interface FBReactionSurfaceRenderConfig : NSObject
{
    FBImageDownloader *_imageDownloader;
    FBReactionSurfaceContentView *_contentView;
    FBReactionGraphQLManager *_manager;
    FBReactionCollectionViewDataSource *_collectionViewDataSource;
    FBReactionComponentsCollectionViewDataSourceAdapter *_dataSourceAdapter;
    FBGraphQLConnectionController *_connectionController;
    FBMemReactionSurfaceConfig *_surfaceConfig;
}

@property(retain, nonatomic) FBMemReactionSurfaceConfig *surfaceConfig; // @synthesize surfaceConfig=_surfaceConfig;
@property(retain, nonatomic) FBGraphQLConnectionController *connectionController; // @synthesize connectionController=_connectionController;
@property(readonly, nonatomic) FBReactionComponentsCollectionViewDataSourceAdapter *dataSourceAdapter; // @synthesize dataSourceAdapter=_dataSourceAdapter;
@property(readonly, nonatomic) FBReactionCollectionViewDataSource *collectionViewDataSource; // @synthesize collectionViewDataSource=_collectionViewDataSource;
@property(readonly, nonatomic) FBReactionGraphQLManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) FBReactionSurfaceContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_configureViewStateManager;
- (void)setCanDisplayData;
- (void)prepareForSurfaceReload;
- (void)setIsActive:(_Bool)arg1;
- (void)setViewStateManager:(id)arg1;
- (void)setPTRView:(id)arg1;
- (id)getTabText;
- (id)getViewStateManager;
- (id)getPullToRefreshView;
- (id)getSurface;
- (void)dealloc;
- (id)initWithManager:(id)arg1 dataSourceAdapter:(id)arg2 imageDownloader:(id)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLONAListCell.h"

#import "QLRequestModelDelegate.h"

@class NSString, QLJCEONAMarketingAttentPosterList, QLMarketDataModel, QLONAMarketAttentPosterView;

@interface QLONAMarketAttentPosterListCell : QLONAListCell <QLRequestModelDelegate>
{
    QLJCEONAMarketingAttentPosterList *_list;
    QLONAMarketAttentPosterView *_posterView;
    QLMarketDataModel *_dataModel;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
+ (double)heightForAttentPosterList:(id)arg1;
- (void).cxx_destruct;
- (void)refreshSelfData;
- (_Bool)canSlideMore:(struct CGPoint)arg1;
- (void)collectionViewCellDidEndNewExposure:(id)arg1;
- (void)reportShowUp;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)loadData:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)refreshOrderState;
- (void)setObject:(id)arg1;
- (void)setPseudoEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

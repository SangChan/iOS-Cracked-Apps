//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSBaseCellView.h"

@class UIImageView, UILabel;

@interface FTSFeedNetSearchEnterCellView : FTSBaseCellView
{
    UIImageView *_feedNetSearchEnterImgv;
    UILabel *_feedTitle;
    UILabel *_searchKeyword;
    UILabel *_netSearchSummary;
    UIImageView *_feedMoreImgv;
}

- (void).cxx_destruct;
- (void)loadCellWithFTSFeedInfo:(id)arg1;
- (void)initCellUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end


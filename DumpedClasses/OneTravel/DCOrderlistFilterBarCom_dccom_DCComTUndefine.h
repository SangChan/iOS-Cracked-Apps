//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseComponent.h"

@class DCCommonFilterBaseView, UIView;

@interface DCOrderlistFilterBarCom_dccom_DCComTUndefine : DCBaseComponent
{
    _Bool _filterBtnSelected;
    UIView *_tableHeaderView;
    DCCommonFilterBaseView *_attractedView;
    DCCommonFilterBaseView *_topBarView;
    long long _btnType;
    DCCommonFilterBaseView *_filterHeaderView;
}

+ (double)defaultHeaderHeightWithPageType:(int)arg1;
@property(retain, nonatomic) DCCommonFilterBaseView *filterHeaderView; // @synthesize filterHeaderView=_filterHeaderView;
@property(nonatomic) _Bool filterBtnSelected; // @synthesize filterBtnSelected=_filterBtnSelected;
@property(nonatomic) long long btnType; // @synthesize btnType=_btnType;
@property(retain, nonatomic) DCCommonFilterBaseView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) DCCommonFilterBaseView *attractedView; // @synthesize attractedView=_attractedView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool listIsOpen;
- (void)setupTopBarViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)setupAttractedView;
- (void)setupWithDataModel:(id)arg1 viewModel:(id)arg2;
- (void)setupWithContentDataModel:(id)arg1;
- (void)removeAttracedView;
- (void)hideAttracedContentView;
- (_Bool)isFilerLonger;
- (void)_alphaChanedWithContentOffSetY:(double)arg1;
- (id)_scrollView;
- (double)_layoutYInWindow;
- (double)_attractedYInWindow;
- (void)comDidAppear;
- (void)comWillDisAppear;
- (void)scrollViewDidEndScrollingAnimation;
- (void)comDidLoad;

// Remaining properties
@property(nonatomic) __weak id <DCOrderlistFilterBarDelegate> delegate;

@end

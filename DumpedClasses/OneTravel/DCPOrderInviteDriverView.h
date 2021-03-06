//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCEmergeCustomBaseView.h"

@class DCInputThankPriceView, DCInviteTipsView, DCThanksSelectPriceView, DCYSRouteDetailView;

@interface DCPOrderInviteDriverView : DCEmergeCustomBaseView
{
    DCYSRouteDetailView *_routeView;
    DCInviteTipsView *_tipsView;
    DCThanksSelectPriceView *_selectedView;
    DCInputThankPriceView *_selectInputView;
}

@property(retain, nonatomic) DCInputThankPriceView *selectInputView; // @synthesize selectInputView=_selectInputView;
@property(retain, nonatomic) DCThanksSelectPriceView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) DCInviteTipsView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) DCYSRouteDetailView *routeView; // @synthesize routeView=_routeView;
- (void).cxx_destruct;
- (void)removeIncreaseInputView;
- (void)updateIncrease:(id)arg1;
- (void)showInputPriceView;
- (void)reloadContentView;
- (void)makeAutoLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end


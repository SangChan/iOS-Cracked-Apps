//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

#import "QYUCardCellCustomProtocol-Protocol.h"

@class NSString, QYHighLightLabel, QYUCardBtn, UIControl, UIImageView, UILabel;

@interface QYUCardVIPRightCell : QYUPhoneCardBaseCell <QYUCardCellCustomProtocol>
{
    UIImageView *_imageViewIcon;
    UILabel *_labelTitle;
    QYUCardBtn *_btnExpandCollapse;
    UIImageView *_imageViewAd;
    QYHighLightLabel *_labelAd;
    UILabel *_labelAdButton;
    UIControl *_controlAdButton;
}

+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (double)customizedTopBannerHeight;
+ (void)load;
- (void).cxx_destruct;
- (void)onRightClicked:(id)arg1;
- (void)layoutCustomTopBannerView;
- (void)layoutSubviews;
- (void)p_RecoverTopBannerHeight;
- (void)setCellModel:(id)arg1;
- (void)onExpandCollapseButtonClicked;
- (void)onAdButtonClicked;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


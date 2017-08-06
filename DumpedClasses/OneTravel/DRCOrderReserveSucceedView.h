//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface DRCOrderReserveSucceedView : UIView
{
    UIImageView *_iconSuccessView;
    UIView *_detailInfoBgView;
    UILabel *_reserveSuccessLabel;
    UILabel *_carInfoLabel;
    UIView *_splitView;
    UILabel *_carPlateLabel;
    UILabel *_otherTipLabel;
}

@property(retain, nonatomic) UILabel *otherTipLabel; // @synthesize otherTipLabel=_otherTipLabel;
@property(retain, nonatomic) UILabel *carPlateLabel; // @synthesize carPlateLabel=_carPlateLabel;
@property(retain, nonatomic) UIView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) UILabel *carInfoLabel; // @synthesize carInfoLabel=_carInfoLabel;
@property(retain, nonatomic) UILabel *reserveSuccessLabel; // @synthesize reserveSuccessLabel=_reserveSuccessLabel;
@property(retain, nonatomic) UIView *detailInfoBgView; // @synthesize detailInfoBgView=_detailInfoBgView;
@property(retain, nonatomic) UIImageView *iconSuccessView; // @synthesize iconSuccessView=_iconSuccessView;
- (void).cxx_destruct;
- (void)setCellWithReservelStatus:(id)arg1 carInfo:(id)arg2 carPlate:(id)arg3 otherTips:(id)arg4;
- (void)setSubViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

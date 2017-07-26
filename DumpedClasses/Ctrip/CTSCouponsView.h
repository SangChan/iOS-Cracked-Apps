//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BookingRouteModel, CTImageView, CTVectorButton, NSLayoutConstraint, UIButton, UILabel;

@interface CTSCouponsView : UIView
{
    id <CTSCouponsViewDelegate> _delegate;
    id _promotionModel;
    BookingRouteModel *_bookingModel;
    UIView *_bottomBackView;
    CTVectorButton *_closeBtn;
    UIButton *_agreeBtn;
    UILabel *_couponTitlte;
    UILabel *_couponSubtitle;
    CTImageView *_remindeBgImage;
    NSLayoutConstraint *_bottomViewHeightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *bottomViewHeightConstraint; // @synthesize bottomViewHeightConstraint=_bottomViewHeightConstraint;
@property(nonatomic) __weak CTImageView *remindeBgImage; // @synthesize remindeBgImage=_remindeBgImage;
@property(nonatomic) __weak UILabel *couponSubtitle; // @synthesize couponSubtitle=_couponSubtitle;
@property(nonatomic) __weak UILabel *couponTitlte; // @synthesize couponTitlte=_couponTitlte;
@property(nonatomic) __weak UIButton *agreeBtn; // @synthesize agreeBtn=_agreeBtn;
@property(nonatomic) __weak CTVectorButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak UIView *bottomBackView; // @synthesize bottomBackView=_bottomBackView;
@property(retain, nonatomic) BookingRouteModel *bookingModel; // @synthesize bookingModel=_bookingModel;
@property(retain, nonatomic) id promotionModel; // @synthesize promotionModel=_promotionModel;
@property(nonatomic) __weak id <CTSCouponsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bookOrderAction:(id)arg1;
- (void)showBottomView;
- (void)awakeFromNib;

@end

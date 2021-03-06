//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface CTTrainRecommandQiangPiaoView : UIView
{
    UIImageView *_imageViewIcon;
    UIImageView *_imageViewLoading;
    UILabel *_labelTitle;
    UILabel *_labelSubtitle;
    UILabel *_labelType;
    UILabel *_labelTicket;
    UILabel *_labelSeat;
    NSLayoutConstraint *_iconWidth;
    NSLayoutConstraint *_iconHeight;
    NSLayoutConstraint *_labelTypeWidth;
}

@property(retain, nonatomic) NSLayoutConstraint *labelTypeWidth; // @synthesize labelTypeWidth=_labelTypeWidth;
@property(retain, nonatomic) NSLayoutConstraint *iconHeight; // @synthesize iconHeight=_iconHeight;
@property(retain, nonatomic) NSLayoutConstraint *iconWidth; // @synthesize iconWidth=_iconWidth;
@property(retain, nonatomic) UILabel *labelSeat; // @synthesize labelSeat=_labelSeat;
@property(retain, nonatomic) UILabel *labelTicket; // @synthesize labelTicket=_labelTicket;
@property(retain, nonatomic) UILabel *labelType; // @synthesize labelType=_labelType;
@property(retain, nonatomic) UILabel *labelSubtitle; // @synthesize labelSubtitle=_labelSubtitle;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) UIImageView *imageViewLoading; // @synthesize imageViewLoading=_imageViewLoading;
@property(retain, nonatomic) UIImageView *imageViewIcon; // @synthesize imageViewIcon=_imageViewIcon;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)setupContentWithType:(int)arg1 title:(id)arg2 subtitle:(id)arg3 ticketInfo:(id)arg4 seatInfo:(id)arg5;
- (id)initViewWithFrame:(struct CGRect)arg1;

@end


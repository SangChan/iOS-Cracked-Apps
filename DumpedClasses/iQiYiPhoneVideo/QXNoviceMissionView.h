//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface QXNoviceMissionView : UIView
{
    CDUnknownBlockType _close;
    UIButton *_confirmBtn;
    UIButton *_closeBtn;
    UIView *_contentView;
    UILabel *_noticeLabel;
    UIImageView *_giftImage;
    UIImageView *_giftNumImage;
    UIImageView *_badgeBackgroundImage;
    UIImageView *_badgeImage;
    UILabel *_dayLabel;
}

@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) UIImageView *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) UIImageView *badgeBackgroundImage; // @synthesize badgeBackgroundImage=_badgeBackgroundImage;
@property(retain, nonatomic) UIImageView *giftNumImage; // @synthesize giftNumImage=_giftNumImage;
@property(retain, nonatomic) UIImageView *giftImage; // @synthesize giftImage=_giftImage;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(copy, nonatomic) CDUnknownBlockType close; // @synthesize close=_close;
- (void).cxx_destruct;
- (void)closeBtnTap;
- (void)qxUpdateViewContent;
- (void)convertToSuccessStatusWithBadgePic:(id)arg1 days:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface AliDetailAreaTitleView : UIView
{
    CDUnknownBlockType _backBlock;
    UILabel *_backLabel;
    UIView *_backBtn;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UILabel *backLabel; // @synthesize backLabel=_backLabel;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
- (void).cxx_destruct;
- (void)backHit;
- (void)layoutSubviews;
- (void)setTitleText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

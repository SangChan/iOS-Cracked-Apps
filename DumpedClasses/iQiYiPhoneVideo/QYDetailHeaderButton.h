//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface QYDetailHeaderButton : UIButton
{
    UIImageView *_thumbView;
    UILabel *_titleLbl;
    UILabel *_hotpotL;
}

@property(retain, nonatomic) UILabel *hotpotL; // @synthesize hotpotL=_hotpotL;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
- (void).cxx_destruct;
- (void)setNumber:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setThumbImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isPaoPao:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface QYGLGiftAssetsLabel : UIControl
{
    NSString *_qiDian;
    NSString *_goldCoin;
    UILabel *_qiDianLabel;
    UILabel *_goldCoinLabel;
    double _fontSize;
    UIImageView *_imageView;
    UIColor *_textColor;
}

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UILabel *goldCoinLabel; // @synthesize goldCoinLabel=_goldCoinLabel;
@property(retain, nonatomic) UILabel *qiDianLabel; // @synthesize qiDianLabel=_qiDianLabel;
@property(copy, nonatomic) NSString *goldCoin; // @synthesize goldCoin=_goldCoin;
@property(copy, nonatomic) NSString *qiDian; // @synthesize qiDian=_qiDian;
- (void).cxx_destruct;
- (id)p_createAttributedStringWithString:(id)arg1 fontColor:(id)arg2;
- (void)p_updateUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withTextColor:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UIView;

@interface QRCellBottomView : UIControl
{
    UIView *_lineView;
    long long _type;
    UILabel *_label;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 WithType:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


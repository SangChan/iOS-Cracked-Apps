//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface PPao_EmptyNoteView : UIView
{
    int _alignment;
    CDUnknownBlockType _tapCallback;
    UIImageView *_image;
    UILabel *_title;
    double _topMargin;
}

@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onTap:(id)arg1;
- (void)createSubView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEmptyTopMargin:(double)arg1;
- (void)setEmptyAlignment:(int)arg1;
- (void)setEmptyNote:(id)arg1;
- (void)setEmptyImage:(id)arg1;

@end


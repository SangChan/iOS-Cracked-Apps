//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MQQHexagonLoadingView, UIImageView, UILabel;

@interface MQQInfomationBlankView : UIView
{
    long long _style;
    MQQHexagonLoadingView *_loadingView;
    UIImageView *_imageView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MQQHexagonLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)stopAnimation;
- (void)startAnimation;
- (void)dismiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)show:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_backgroundColorWithStyle:(long long)arg1;
- (id)_textColorWithStyle:(long long)arg1;
- (id)_textWithStyle:(long long)arg1;
- (double)_loadingAlphaWithStyle:(long long)arg1;
- (void)_updateStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

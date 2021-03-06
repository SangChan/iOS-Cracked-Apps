//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBAudioVisualizerWave, FBButton, NSDictionary, UIActivityIndicatorView;

@interface FBVoiceSearchMicPad : UIView
{
    FBButton *_searchButton;
    FBButton *_closeButton;
    NSDictionary *_buttonConfigForState;
    FBAudioVisualizerWave *_wave;
    UIView *_backgroundView;
    UIActivityIndicatorView *_spinner;
    CDUnknownBlockType _onTapClose;
    CDUnknownBlockType _onTapSearch;
}

@property(retain, nonatomic) FBAudioVisualizerWave *wave; // @synthesize wave=_wave;
@property(copy, nonatomic) CDUnknownBlockType onTapSearch; // @synthesize onTapSearch=_onTapSearch;
@property(copy, nonatomic) CDUnknownBlockType onTapClose; // @synthesize onTapClose=_onTapClose;
- (void).cxx_destruct;
- (void)didTapClose;
- (void)didTapSearch;
- (void)displayStep:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setupSearchButtonConfigs;
- (void)setupButtons;
- (void)setupBackground;
- (id)initWithFrame:(struct CGRect)arg1;

@end


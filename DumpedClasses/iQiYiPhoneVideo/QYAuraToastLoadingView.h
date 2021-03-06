//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer, CAShapeLayer, UIImageView;

@interface QYAuraToastLoadingView : UIView
{
    float _progress;
    unsigned long long _loadingType;
    CAReplicatorLayer *_loadingLayer;
    CAShapeLayer *_finishCircleLayer;
    CAShapeLayer *_successLayer;
    CAShapeLayer *_failLayer;
    CALayer *_progressBgLayer;
    CAShapeLayer *_progressInsideLayer;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) CAShapeLayer *progressInsideLayer; // @synthesize progressInsideLayer=_progressInsideLayer;
@property(retain, nonatomic) CALayer *progressBgLayer; // @synthesize progressBgLayer=_progressBgLayer;
@property(retain, nonatomic) CAShapeLayer *failLayer; // @synthesize failLayer=_failLayer;
@property(retain, nonatomic) CAShapeLayer *successLayer; // @synthesize successLayer=_successLayer;
@property(retain, nonatomic) CAShapeLayer *finishCircleLayer; // @synthesize finishCircleLayer=_finishCircleLayer;
@property(retain, nonatomic) CAReplicatorLayer *loadingLayer; // @synthesize loadingLayer=_loadingLayer;
@property(nonatomic) unsigned long long loadingType; // @synthesize loadingType=_loadingType;
- (void).cxx_destruct;
- (void)clearLoadingViewAnimations;
- (void)clearAll;
- (void)setProgressLayersHidden:(_Bool)arg1;
- (void)performFailAnimation;
- (void)performSuccessAnimation;
- (void)performNewLoadingAnimation;
- (void)checkLoadingStatusAndPerformAnimation;
- (void)updateProgress:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


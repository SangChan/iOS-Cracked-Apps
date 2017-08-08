//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIImageView;

@interface MQQScreenSaverCircleView : UIView <CAAnimationDelegate>
{
    UIImageView *_leftView;
    UIImageView *_leftLightView;
    UIView *_leftMaskView;
    UIView *_leftTailContainView;
    UIImageView *_leftTailView;
    UIImageView *_rightView;
    UIImageView *_rightLightView;
    UIView *_rightMaskView;
    UIView *_rightTailContainView;
    UIImageView *_rightTailView;
    _Bool _isAnimating;
}

- (void)rightTailAnimation;
- (void)leftTailAnimation;
- (void)zoomInAnimation;
- (void)rightViewRotaionAnimation;
- (void)leftViewRotaionAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)endAnimation;
- (void)beginAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

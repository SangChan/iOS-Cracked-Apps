//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIImageView;

@interface CTIndicatorView : UIView
{
    _Bool _hidesWhenStopped;
    _Bool _animationing;
    long long _activityIndicatorViewStyle;
    UIImageView *_animationView;
    NSTimer *_timer;
}

@property(nonatomic) _Bool animationing; // @synthesize animationing=_animationing;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle;
- (void).cxx_destruct;
- (void)repeatAnimation;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithActivityIndicatorStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

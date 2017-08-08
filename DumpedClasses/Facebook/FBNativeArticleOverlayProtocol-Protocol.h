//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBGestureTouchProvider;

@protocol FBNativeArticleOverlayProtocol <NSObject>
- (void)setExpansionPercentage:(double)arg1;
- (struct UIEdgeInsets)requiredArticleInsets;
- (_Bool)canRespondToGestureInDirection:(long long)arg1 withTouches:(id <FBGestureTouchProvider>)arg2;
- (void)setVisibilityPercentage:(double)arg1;
- (void)setContentVisible:(_Bool)arg1 animationConfig:(CDStruct_d1ca95b4)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBComposerSproutsTransitionAnimator-Protocol.h"

@class FBComposerSproutsSheetContainerViewForSlideUpSprouts, UIView;

@interface FBComposerSproutsTransitionAnimatorForSlideUpSproutSheet : NSObject <FBComposerSproutsTransitionAnimator>
{
    UIView *_opaqueView;
    FBComposerSproutsSheetContainerViewForSlideUpSprouts *_sproutSheetContainerView;
}

- (void).cxx_destruct;
- (void)performClosingAnimationFromView:(id)arg1 toView:(id)arg2 animationGroup:(id)arg3;
- (void)performOpeningAnimationFromView:(id)arg1 sproutsViewControllerView:(id)arg2 animationGroup:(id)arg3;
- (double)closingAnimationDuration;
- (double)openingAnimationDuration;
- (id)initWithSproutSheetView:(id)arg1 opaqueView:(id)arg2;

@end

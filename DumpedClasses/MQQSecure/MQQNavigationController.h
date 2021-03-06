//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIScreenEdgePanGestureRecognizer;

@interface MQQNavigationController : UINavigationController <UIGestureRecognizerDelegate>
{
    _Bool _enablePopGestureAnyway;
    UIScreenEdgePanGestureRecognizer *_edgePan;
}

@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgePan; // @synthesize edgePan=_edgePan;
@property(nonatomic) _Bool enablePopGestureAnyway; // @synthesize enablePopGestureAnyway=_enablePopGestureAnyway;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)addScreenEdgePanGesture;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


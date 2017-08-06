//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView, UIView<ErrorViewProtocal>;

@interface UIViewController (Refresh_ErrorHandler)
- (void)tt_endUpdataData:(_Bool)arg1 error:(id)arg2 tip:(id)arg3 duration:(double)arg4 tipTouchBlock:(CDUnknownBlockType)arg5;
- (void)tt_ShowTip:(id)arg1 duration:(double)arg2 tipTouchBlock:(CDUnknownBlockType)arg3;
- (void)tt_endUpdataData:(_Bool)arg1 error:(id)arg2 tip:(id)arg3 tipTouchBlock:(CDUnknownBlockType)arg4;
- (void)tt_endUpdataData:(_Bool)arg1 error:(id)arg2;
- (void)tt_endUpdataData;
- (void)tt_startUpdate;
- (void)tt_registerErrorToastViewWithClass:(Class)arg1;
- (void)tt_registerErrorViewWithClass:(Class)arg1;
- (void)tt_registerErrorViewWithNib:(id)arg1;
- (void)tt_registerLoadingViewWithClass:(Class)arg1;
- (void)tt_registerLoadingViewWithNib:(id)arg1;
@property(nonatomic) unsigned long long ttViewType;
@property(nonatomic) _Bool ttNeedShowIndicator;
@property(nonatomic) _Bool ttHasLoadCachedData;
@property(retain, nonatomic) UIView *ttTargetView;
@property(retain, nonatomic) UIView *ttErrorToastView;
@property(retain, nonatomic) UIView<ErrorViewProtocal> *ttErrorView;
@property(retain, nonatomic) UIView *ttLoadingView;
@property(nonatomic) struct UIEdgeInsets ttContentInset;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol AVFilterScrViewDelegate <NSObject>
- (void)onAVFilterPanelItemUsed;
- (void)onVideoShowPanelOutAreaTouchDelegate;
- (void)onControlPanelAntiTouchCancel;
- (void)onControlPanelAntiTouchStop;
- (void)onControlPanelAntiTouchStart;
- (void)onFilterViewSingleTouch;
- (void)onSelectFilter:(NSString *)arg1;
@end


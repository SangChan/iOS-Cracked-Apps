//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBar.h"

@class NSMutableArray;

@interface NMTabBar : UITabBar
{
    NSMutableArray *_confirmedPoints;
    id <NMTabBarTouchDelegate> _touchDelegate;
}

@property(nonatomic) __weak id <NMTabBarTouchDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface UPALineView : UIView
{
    long long lineWidth;
    UIColor *lineColor;
    _Bool _dotted;
}

@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 dotted:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBadgeView.h"

@class NSString, UILabel;

@interface NMBadgeTextView : NMBadgeView
{
    UILabel *_textLabel;
}

- (void).cxx_destruct;
- (void)setTextColor;
- (void)setInsideType:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCount:(long long)arg1;

@end

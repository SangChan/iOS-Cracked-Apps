//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CAShapeLayer, ExploreDislikeWord;

@interface ExploreDislikeTag : UIButton
{
    ExploreDislikeWord *_dislikeWord;
    CAShapeLayer *_borderLayer;
}

+ (double)tagHeight;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) ExploreDislikeWord *dislikeWord; // @synthesize dislikeWord=_dislikeWord;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)refreshBorder;
- (double)fontSizeForTag;
- (double)paddingX;
- (double)minTagWidth;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol FBStorylineEditorSelectionBarDelegate;

@interface FBStorylineEditorSelectionBar : UIView
{
    UIView *_topBorderLine;
    UIView *_bottomBorderLine;
    NSArray *_dividers;
    _Bool _showsDividerBetweenItems;
    NSArray *_items;
    id <FBStorylineEditorSelectionBarDelegate> _delegate;
}

@property(nonatomic) _Bool showsDividerBetweenItems; // @synthesize showsDividerBetweenItems=_showsDividerBetweenItems;
@property(nonatomic) __weak id <FBStorylineEditorSelectionBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
@property(nonatomic) long long selectedItemIndex;
- (void)reset;
- (void)_buttonTapped:(id)arg1;
- (void)_updateDividers;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end


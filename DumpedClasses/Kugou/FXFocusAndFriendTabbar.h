//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITabBarDelegate.h"

@class NSMutableArray, NSString;

@interface FXFocusAndFriendTabbar : UIView <UITabBarDelegate>
{
    long long _preSelectedItemTag;
    long long _selectIndex;
    NSMutableArray *_items;
    CDUnknownBlockType _tabarBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tabarBlock; // @synthesize tabarBlock=_tabarBlock;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (void)tapActonDown:(id)arg1;
- (void)customTabarItem:(id)arg1;
- (void)setItems:(id)arg1 withCallBack:(CDUnknownBlockType)arg2;
- (void)setFeature;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


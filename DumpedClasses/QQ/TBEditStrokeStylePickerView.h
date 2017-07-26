//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSMutableArray, TBEditStrokeStylePickerViewItem, UIView;

@interface TBEditStrokeStylePickerView : UIScrollView
{
    id <TBEditStrokeStylePickerViewDelegate> _strokeDelegate;
    id <TBEditStrokeStylePickerViewDataDelegate> _strokeDataDelegate;
    double _pickerItemMerge;
    NSMutableArray *_items;
    TBEditStrokeStylePickerViewItem *_selectedItem;
    TBEditStrokeStylePickerViewItem *_previousItem;
    UIView *_cursorView;
}

+ (id)compatibleLowDevice:(id)arg1;
+ (_Bool)lowerThanIphone6;
+ (id)textureBarItems;
+ (id)defaultTextureBarItems;
+ (id)defaultMosaicBarItems;
+ (id)defaultScrawColorBarItems;
+ (id)defaultColorBarItems;
@property(retain, nonatomic) UIView *cursorView; // @synthesize cursorView=_cursorView;
@property(nonatomic) TBEditStrokeStylePickerViewItem *previousItem; // @synthesize previousItem=_previousItem;
@property(nonatomic) TBEditStrokeStylePickerViewItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) double pickerItemMerge; // @synthesize pickerItemMerge=_pickerItemMerge;
@property(nonatomic) __weak id <TBEditStrokeStylePickerViewDataDelegate> strokeDataDelegate; // @synthesize strokeDataDelegate=_strokeDataDelegate;
@property(nonatomic) __weak id <TBEditStrokeStylePickerViewDelegate> strokeDelegate; // @synthesize strokeDelegate=_strokeDelegate;
- (void).cxx_destruct;
- (void)resetWhiteColor;
- (void)selectItemWithColor:(id)arg1;
- (void)resetDefauleItem;
- (void)resetToPreviusItem;
- (id)compositeColorCursorWithColor:(id)arg1;
- (void)selectItem:(id)arg1;
- (void)reload;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

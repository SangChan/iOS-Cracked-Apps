//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestPopupMaskView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIPickerView, UIToolbar, UIView;

@interface CTDestCommentEditDatePicker : CTDestPopupMaskView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSString *_selectedDate;
    CDUnknownBlockType _selectedBlock;
    CDUnknownBlockType _willDismissionBlock;
    UIView *_containerView;
    UIToolbar *_toolbar;
    UIPickerView *_pickerView;
    NSArray *_dateArray;
}

@property(retain, nonatomic) NSArray *dateArray; // @synthesize dateArray=_dateArray;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType willDismissionBlock; // @synthesize willDismissionBlock=_willDismissionBlock;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(copy, nonatomic) NSString *selectedDate; // @synthesize selectedDate=_selectedDate;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (_Bool)shouldTapToDismissWithTouchPosition:(struct CGPoint)arg1;
- (void)maskDidDisappear;
- (void)maskDoDisappear;
- (void)maskWillDisappear;
- (void)maskDidAppear;
- (void)maskDoAppear;
- (void)maskWillAppear;
- (id)init;
@property(readonly, nonatomic) double heightForPickerView;
- (void)perpareData;
- (void)loadView;
- (void)doSubmit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

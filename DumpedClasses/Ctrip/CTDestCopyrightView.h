//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class CTRootViewController, NSString, UIButton, UITextView;

@interface CTDestCopyrightView : UIView <UITextViewDelegate>
{
    _Bool _checked;
    CDUnknownBlockType _checkBlock;
    UIButton *_checkboxButton;
    UITextView *_protocolTextView;
    CTRootViewController *_superVC;
}

@property(retain, nonatomic) CTRootViewController *superVC; // @synthesize superVC=_superVC;
@property(retain, nonatomic) UITextView *protocolTextView; // @synthesize protocolTextView=_protocolTextView;
@property(retain, nonatomic) UIButton *checkboxButton; // @synthesize checkboxButton=_checkboxButton;
@property(copy, nonatomic) CDUnknownBlockType checkBlock; // @synthesize checkBlock=_checkBlock;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)layoutAllViews;
- (void)checkCopyright;
- (id)initWithChecked:(_Bool)arg1 superVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

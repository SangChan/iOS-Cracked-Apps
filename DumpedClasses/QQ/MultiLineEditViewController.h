//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EditViewController.h"

#import "UITextViewDelegate.h"

@class LeftWordsHintButton, NSString, QQFaceDefaultAndSystemKeyBoard, UIButton, UITextView, UIView;

@interface MultiLineEditViewController : EditViewController <UITextViewDelegate>
{
    UIView *_bgView;
    UITextView *_textView;
    _Bool _showLeftWordsHint;
    _Bool _showFaceController;
    double _editHeight;
    UIView *_extraBottomView;
    LeftWordsHintButton *_leftWordsHintButton;
    UIButton *_faceButton;
    QQFaceDefaultAndSystemKeyBoard *_facePanelBoard;
}

@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool showLeftWordsHint; // @synthesize showLeftWordsHint=_showLeftWordsHint;
- (struct _NSRange)GetDeletedIOSEmojiRangeToIndex:(long long)arg1;
- (void)sendEmoji:(id)arg1;
- (void)faceChoosed:(id)arg1;
- (void)backSpaceFace;
- (void)backSpaceFaceAtIndex:(long long)arg1;
- (void)flipFaceBoard;
- (void)showFaceController:(_Bool)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)didLeftWordsHintButtonClicked;
- (void)loadView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeKeyboardNotification;
- (void)listenKeyboardNotification;
- (id)findFirstResponderBeneathView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


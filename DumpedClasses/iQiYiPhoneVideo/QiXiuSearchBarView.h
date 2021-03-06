//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIImage, UIImageView, UITextField;
@protocol QiXiuSearchBarViewDelegate;

@interface QiXiuSearchBarView : UIView <UITextFieldDelegate>
{
    UIButton *_cleanTextBtn;
    id <QiXiuSearchBarViewDelegate> _delegate;
    UITextField *_searchInputView;
    UIButton *_cancelBtn;
    UIImage *_searchBackgroundImage;
    UIImageView *_searchBackground;
}

@property(retain, nonatomic) UIImageView *searchBackground; // @synthesize searchBackground=_searchBackground;
@property(retain, nonatomic) UIImage *searchBackgroundImage; // @synthesize searchBackgroundImage=_searchBackgroundImage;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UITextField *searchInputView; // @synthesize searchInputView=_searchInputView;
@property(nonatomic) __weak id <QiXiuSearchBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *cleanTextBtn; // @synthesize cleanTextBtn=_cleanTextBtn;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)configSearchInputText:(id)arg1;
- (void)shouldResignFirstResponder:(_Bool)arg1;
- (void)toCancel;
- (void)cleanText;
- (void)textFieldEditChanged:(id)arg1;
- (void)initShow;
- (id)seaerchBackGroundView;
- (void)initFrames;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


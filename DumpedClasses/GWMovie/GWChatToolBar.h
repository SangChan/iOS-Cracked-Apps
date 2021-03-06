//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class GWCommentTextView, UIButton, UIImageView;
@protocol GWChatToolBarDelegate;

@interface GWChatToolBar : UIToolbar
{
    GWCommentTextView *_textView;
    id _toolBarDelegate;
    UIImageView *_inputImageView;
    UIButton *_imageButton;
    UIButton *_voiceButton;
    UIButton *_sendButton;
    UIButton *_emotionButton;
    id <GWChatToolBarDelegate> _chatToolBarDelegate;
}

@property(nonatomic) __weak id <GWChatToolBarDelegate> chatToolBarDelegate; // @synthesize chatToolBarDelegate=_chatToolBarDelegate;
@property(retain, nonatomic) UIButton *emotionButton; // @synthesize emotionButton=_emotionButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIImageView *inputImageView; // @synthesize inputImageView=_inputImageView;
@property(nonatomic) __weak id toolBarDelegate; // @synthesize toolBarDelegate=_toolBarDelegate;
@property(retain, nonatomic) GWCommentTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)btnClicked:(id)arg1;
- (void)createToolBarButtons;
- (void)loadAllViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


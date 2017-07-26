//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface TBBuyAlertView : UIView
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSString *_title;
    NSString *_message;
    NSString *_errorCode;
    CDUnknownBlockType _completionBlock;
    UIView *_maskView;
    UIButton *_lastbtn;
    double _leftPadding;
    double _contentPadding;
    double _messagePadding;
    double _animateTime;
}

+ (void)initialize;
@property(nonatomic) double animateTime; // @synthesize animateTime=_animateTime;
@property(nonatomic) double messagePadding; // @synthesize messagePadding=_messagePadding;
@property(nonatomic) double contentPadding; // @synthesize contentPadding=_contentPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(retain, nonatomic) UIButton *lastbtn; // @synthesize lastbtn=_lastbtn;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)createImageWithColor:(id)arg1;
- (id)targetView;
- (void)showInView:(id)arg1;
- (void)onClick:(id)arg1;
- (void)show;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (_Bool)isShow;
- (double)getBtnTop;
- (void)configMoreBtn;
- (id)createBtnWithText:(id)arg1;
- (void)configMessage;
- (void)configTitle;
- (void)configUI;
- (id)initWithTitle:(id)arg1 message:(id)arg2 errorCode:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)realMessage:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableAttributedString, NSString;

@interface QYCMPopupView : UIView
{
    CDUnknownBlockType _viewClick;
    CDUnknownBlockType _buttonClick;
    NSDictionary *_taskInfo;
    long long _type;
    NSString *_text_top;
    NSMutableAttributedString *_text_middle;
    NSMutableAttributedString *_vip_content;
    NSString *_text_bottom;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *text_bottom; // @synthesize text_bottom=_text_bottom;
@property(retain, nonatomic) NSMutableAttributedString *vip_content; // @synthesize vip_content=_vip_content;
@property(retain, nonatomic) NSMutableAttributedString *text_middle; // @synthesize text_middle=_text_middle;
@property(retain, nonatomic) NSString *text_top; // @synthesize text_top=_text_top;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(copy, nonatomic) CDUnknownBlockType buttonClick; // @synthesize buttonClick=_buttonClick;
@property(copy, nonatomic) CDUnknownBlockType viewClick; // @synthesize viewClick=_viewClick;
- (void).cxx_destruct;
- (void)tap;
- (void)hide;
- (void)onViewClick;
- (void)onButtonClick;
- (void)setup;
- (void)setupBottomView;
- (id)init;
- (id)initWithType:(long long)arg1 taskInfo:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString, UIColor, UIImage;

@interface SPayBillCancelItem : TRBaseModel
{
    _Bool _supportClick;
    NSString *_title;
    UIColor *_titleColor;
    NSString *_msg;
    UIColor *_msgColor;
    UIImage *_icon;
    NSString *_url;
    UIImage *_tipIcon;
    NSString *_tipTitle;
}

@property(retain, nonatomic) NSString *tipTitle; // @synthesize tipTitle=_tipTitle;
@property(retain, nonatomic) UIImage *tipIcon; // @synthesize tipIcon=_tipIcon;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool supportClick; // @synthesize supportClick=_supportClick;
@property(retain, nonatomic) UIColor *msgColor; // @synthesize msgColor=_msgColor;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIFont, UIImageView, UILabel;

@interface GWMyFriendSayView : UIView
{
    NSString *_friendSayNumber;
    UIFont *_rightLabelFont;
    UIImageView *_leftImageView;
    UILabel *_rightNumber;
}

@property(retain, nonatomic) UILabel *rightNumber; // @synthesize rightNumber=_rightNumber;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UIFont *rightLabelFont; // @synthesize rightLabelFont=_rightLabelFont;
@property(copy, nonatomic) NSString *friendSayNumber; // @synthesize friendSayNumber=_friendSayNumber;
- (void).cxx_destruct;
- (id)createDisplayLabelWithText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


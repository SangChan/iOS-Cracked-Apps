//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface QTextSettings : NSObject
{
    float _contentFontSize;
    float _titleFontSize;
    UIColor *_contentFontColor;
    NSString *_fontID;
    int _xo;
}

- (void).cxx_destruct;
- (float)getTitleFontSize;

// Remaining properties
@property(retain, nonatomic) UIColor *contentFontColor; // @dynamic contentFontColor;
@property(nonatomic) float contentFontSize; // @dynamic contentFontSize;
@property(retain, nonatomic) NSString *fontID; // @dynamic fontID;
@property(nonatomic) float titleFontSize; // @dynamic titleFontSize;

@end

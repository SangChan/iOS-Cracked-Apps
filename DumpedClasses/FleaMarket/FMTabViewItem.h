//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, UIImage;

@interface FMTabViewItem : NSObject
{
    NSString *_title;
    UIImage *_image;
    NSString *_imageURLString;
    UIImage *_selectedImage;
    NSString *_selectedImageURLString;
    NSMutableDictionary *_attributesForStates;
}

@property(retain, nonatomic) NSMutableDictionary *attributesForStates; // @synthesize attributesForStates=_attributesForStates;
@property(copy, nonatomic) NSString *selectedImageURLString; // @synthesize selectedImageURLString=_selectedImageURLString;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAsset, NSString, NSURL, PHAsset, UIImage;

@interface QYRCTAssetPhoto : NSObject
{
    NSString *_identifier;
    UIImage *_thumbnail;
    UIImage *_aspectThumbnail;
    UIImage *_screenSizeImage;
    UIImage *_fullResolutionImage;
    NSURL *_uri;
    long long _size;
    ALAsset *_alAsset;
    PHAsset *_phAsset;
    long long _group;
}

@property(nonatomic) long long group; // @synthesize group=_group;
@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(retain, nonatomic) ALAsset *alAsset; // @synthesize alAsset=_alAsset;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) UIImage *fullResolutionImage; // @synthesize fullResolutionImage=_fullResolutionImage;
@property(retain, nonatomic) UIImage *screenSizeImage; // @synthesize screenSizeImage=_screenSizeImage;
@property(retain, nonatomic) UIImage *aspectThumbnail; // @synthesize aspectThumbnail=_aspectThumbnail;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end


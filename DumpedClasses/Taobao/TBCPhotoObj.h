//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIImage, UIImageView;

@interface TBCPhotoObj : NSObject
{
    _Bool _isVideo;
    UIImageView *_srcImageView;
    NSURL *_thumbUrl;
    NSURL *_url;
    UIImage *_image;
    long long _index;
}

@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSURL *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) UIImageView *srcImageView; // @synthesize srcImageView=_srcImageView;
- (void).cxx_destruct;
- (id)init;

@end

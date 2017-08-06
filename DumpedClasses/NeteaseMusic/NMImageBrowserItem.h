//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UIImage;

@interface NMImageBrowserItem : NSObject
{
    NSString *_url;
    NSString *_format;
    UIImage *_image;
    UIImage *_loadedInmage;
    struct CGSize _originSize;
    id <NMImageBrowserItemDelegate> _delegate;
    _Bool _loadOriginalImageDirectly;
    _Bool _originalImageLoaded;
    float _progress;
    UIImage *_loadedImage;
    NSString *_loadedUrl;
    UIImage *_cacheImage;
    NSMutableArray *_downloadOperation;
}

@property(retain, nonatomic) NSMutableArray *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
@property(readonly, nonatomic) UIImage *cacheImage; // @synthesize cacheImage=_cacheImage;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) NSString *loadedUrl; // @synthesize loadedUrl=_loadedUrl;
@property(readonly, nonatomic) UIImage *loadedImage; // @synthesize loadedImage=_loadedImage;
@property(readonly, nonatomic) __weak id <NMImageBrowserItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool originalImageLoaded; // @synthesize originalImageLoaded=_originalImageLoaded;
@property(readonly, nonatomic) _Bool loadOriginalImageDirectly; // @synthesize loadOriginalImageDirectly=_loadOriginalImageDirectly;
- (void).cxx_destruct;
- (void)setCacheImage:(id)arg1;
- (id)originalImageUrl;
- (void)download:(id)arg1 original:(_Bool)arg2;
- (void)_doLoadImageWithOriginal:(_Bool)arg1;
- (void)finishLoadImage:(id)arg1 original:(_Bool)arg2 url:(id)arg3;
- (void)failedLoadImage:(_Bool)arg1;
- (void)loadOriginalImage;
- (void)loadImage;
- (void)tearDown;
- (void)setupWithDelegate:(id)arg1;
- (void)dealloc;
- (void)commentInit;
- (id)initWithImage:(id)arg1;
- (id)initWithOriginalImageUrl:(id)arg1 format:(id)arg2 originSize:(struct CGSize)arg3;
- (id)initWithOriginalImageUrl:(id)arg1 format:(id)arg2;

@end

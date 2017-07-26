//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBGuideCaptionView, TBGuidePhotoBrowser;

@protocol TBGuidePhotoBrowserDelegate <NSObject>
- (id <TBGuidePhoto>)photoBrowser:(TBGuidePhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(TBGuidePhotoBrowser *)arg1;

@optional
- (void)photoBrowserDidFinishModalPresentation:(TBGuidePhotoBrowser *)arg1;
- (void)photoBrowser:(TBGuidePhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2 selectedChanged:(_Bool)arg3;
- (_Bool)photoBrowser:(TBGuidePhotoBrowser *)arg1 isPhotoSelectedAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(TBGuidePhotoBrowser *)arg1 actionButtonPressedForPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(TBGuidePhotoBrowser *)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (NSString *)photoBrowser:(TBGuidePhotoBrowser *)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (TBGuideCaptionView *)photoBrowser:(TBGuidePhotoBrowser *)arg1 captionViewForPhotoAtIndex:(unsigned long long)arg2;
- (id <TBGuidePhoto>)photoBrowser:(TBGuidePhotoBrowser *)arg1 thumbPhotoAtIndex:(unsigned long long)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIImage;

@protocol QLGifDecodeProtocol <NSObject>
- (void)doFirstFrameImageFinished:(UIImage *)arg1;
- (void)doGifFinishDecoded:(NSArray *)arg1 animationDuration:(double)arg2;
@end

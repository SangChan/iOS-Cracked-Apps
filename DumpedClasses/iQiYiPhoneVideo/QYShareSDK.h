//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QYShareSDK : NSObject
{
}

+ (void)launchImageSharePageWithTitle:(id)arg1 image:(id)arg2 imgURL:(id)arg3 description:(id)arg4 parentVC:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)launchShareWithType:(int)arg1 Title:(id)arg2 H5URL:(id)arg3 ImgURL:(id)arg4 description:(id)arg5 parentVC:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)customizedSharePageWithKey:(unsigned long long)arg1 Title:(id)arg2 H5URL:(id)arg3 ImgURL:(id)arg4 description:(id)arg5 parentVC:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)launchSharePageWithTitle:(id)arg1 H5URL:(id)arg2 ImgURL:(id)arg3 description:(id)arg4 parentVC:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQWebViewController.h"

@class MQQInfomation;

@interface MQQInfomationWebViewController : MQQWebViewController
{
    MQQInfomation *_infomation;
}

@property(retain, nonatomic) MQQInfomation *infomation; // @synthesize infomation=_infomation;
- (id)_sharedThumbnailURL;
- (id)_sharedContent;
- (id)_sharedTitle;
- (id)_sharedURLString;
- (void)fetchThumbnailURLForSharing:(CDUnknownBlockType)arg1;
- (void)fetchContentForSharing:(CDUnknownBlockType)arg1;
- (void)fetchTitleForSharing:(CDUnknownBlockType)arg1;
- (void)fetchURLStringForSharing:(CDUnknownBlockType)arg1;
- (void)didFinishSharingToDestination:(long long)arg1;
- (void)share;
- (void)refreshMoreBarButtonItem;
- (_Bool)canPopViewController;
- (void)viewDidLoad;
- (id)init;
- (id)initWithInfomation:(id)arg1;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBFeedVideoThumbnailComponentControllerPointer, FBSaveDashboardContext, FBSavedListViewItemDataModel;

@interface FBSavedItemWildeComponent : CKCompositeComponent
{
    FBSaveDashboardContext *_toolbox;
    FBSavedListViewItemDataModel *_dataModel;
    FBFeedVideoThumbnailComponentControllerPointer *_videoThumbnailComponentControllerPointer;
}

+ (id)newWithDataModel:(id)arg1 toolbox:(id)arg2;
@property(retain, nonatomic) FBFeedVideoThumbnailComponentControllerPointer *videoThumbnailComponentControllerPointer; // @synthesize videoThumbnailComponentControllerPointer=_videoThumbnailComponentControllerPointer;
@property(retain, nonatomic) FBSavedListViewItemDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) FBSaveDashboardContext *toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;
- (void)didTapVideoPlayer:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBBookmarksDownloaderSection, FBBookmarksListKitToolbox, FBMemBookmark, NSIndexPath;

@interface FBBookmarksProfileComponent : CKCompositeComponent
{
    FBMemBookmark *_bookmark;
    FBBookmarksDownloaderSection *_section;
    NSIndexPath *_indexPath;
    FBBookmarksListKitToolbox *_toolbox;
}

+ (id)newWithBookmark:(id)arg1 section:(id)arg2 indexPath:(id)arg3 toolbox:(id)arg4;
@property(readonly, nonatomic) FBBookmarksListKitToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) FBBookmarksDownloaderSection *section; // @synthesize section=_section;
@property(readonly, nonatomic) FBMemBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (void).cxx_destruct;
- (void)bookmarkTapped;

@end

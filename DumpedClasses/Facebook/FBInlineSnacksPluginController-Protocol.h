//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBFeedViewControllerLifecycleListener-Protocol.h"
#import "FBGraphQLConnectionControllerLoadListener-Protocol.h"
#import "FBGraphQLConnectionControllerNetworkListener-Protocol.h"
#import "FBStreamListener-Protocol.h"

@class FBInlineSnacksModel, FBSnacksToolbox;
@protocol FBInlineSnacksControllerDelegate;

@protocol FBInlineSnacksPluginController <FBStreamListener, FBGraphQLConnectionControllerLoadListener, FBGraphQLConnectionControllerNetworkListener, FBFeedViewControllerLifecycleListener>
@property(readonly, nonatomic) FBSnacksToolbox *toolbox;
@property(readonly, nonatomic) FBInlineSnacksModel *model;
@property(nonatomic) __weak id <FBInlineSnacksControllerDelegate> delegate;
- (void)updateVisibilityForCellShown:(_Bool)arg1;
- (void)reloadSnacksWithForceRefresh:(_Bool)arg1 delayCacheLoadDuringAppStart:(_Bool)arg2;
@end


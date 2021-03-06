//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBTableViewController.h>

#import "FBFriendsNearbyDataListener-Protocol.h"
#import "FBFriendsNearbySearchBarDelegate-Protocol.h"
#import "FBFriendsNearbyTableViewCellDelegate-Protocol.h"
#import "FBFriendsNearbyTableViewDelegate-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FBContentInsetTracker, FBFNInviteFriendPickerController, FBFNTableViewDataSourceHelper, FBFNTableViewInviteDataSource, FBFNTableViewSearchDataSource, FBFNWaveDataController, FBFriendsNearbyBarHeaderPositionManager, FBFriendsNearbySearchBar, FBKVOController, FBNetworkErrorBar, FBNuxController, FBNuxStepChainController, FBPullToRefreshView, FBSecondaryActionMenuController, FBUserSession, FIGFriendsNearbyExperimentationParams, NSArray, NSDate, NSMutableArray, NSMutableSet, NSObject, NSString, UIActivityIndicatorView, UIBarButtonItem, UINavigationItem;
@protocol FBFriendsNearbyDataSource;

@interface FBFriendsNearbyTableViewController : FBTableViewController <FBFriendsNearbyDataListener, FBFriendsNearbySearchBarDelegate, FBFriendsNearbyTableViewCellDelegate, FBFriendsNearbyTableViewDelegate, FBPullToRefreshViewDelegate, UIScrollViewDelegate>
{
    FBPullToRefreshView *_pullToRefreshView;
    FBUserSession *_session;
    NSMutableArray *_numberOfFriendsToShow;
    FBNuxStepChainController *_nuxController;
    long long _currentState;
    FBContentInsetTracker *_contentInsetTracker;
    UIBarButtonItem *_previousRightButton;
    NSObject *_scenePath;
    UIActivityIndicatorView *_activityIndicator;
    FBNetworkErrorBar *_errorBar;
    FBFriendsNearbySearchBar *_searchBar;
    FBFriendsNearbyBarHeaderPositionManager *_searchBarPositionManager;
    FBFNInviteFriendPickerController *_inviteController;
    FBFNTableViewInviteDataSource *_tableViewInviteDataSource;
    FBFNTableViewSearchDataSource *_tableViewSearchDataSource;
    FBFNTableViewDataSourceHelper *_tableViewDatasourceHelper;
    FBKVOController *_KVOController;
    unsigned long long _dashboardViewLoadTime;
    unsigned long long _firstForwardScrollTime;
    double _scrollViewLastContentOffset;
    FBSecondaryActionMenuController *_secondaryActionMenuController;
    _Bool _typeInSearch;
    NSMutableSet *_loadingMoreNearbySections;
    unsigned long long _totalTimeSpentMs;
    NSDate *_dashboardAppearTime;
    NSMutableArray *_interactions;
    _Bool _showInlineInvite;
    FIGFriendsNearbyExperimentationParams *_figExperimentationParams;
    FBFNWaveDataController *_waveDataController;
    FBNuxController *_waveNuxController;
    UINavigationItem *_parentNavigationItems;
    id <FBFriendsNearbyDataSource> _dataSource;
    NSArray *_visibleDashboardSections;
}

+ (id)viewForHeaderWithTitle:(id)arg1 width:(double)arg2 enableFIGUI:(_Bool)arg3;
@property(copy, nonatomic) NSArray *visibleDashboardSections; // @synthesize visibleDashboardSections=_visibleDashboardSections;
@property(nonatomic) __weak id <FBFriendsNearbyDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UINavigationItem *parentNavigationItems; // @synthesize parentNavigationItems=_parentNavigationItems;
- (void).cxx_destruct;
- (void)_initializeWaveToolTipsWithWaveButton:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)_updateInvitedSet;
- (void)_startInviteFlowWithSelectedFBIDs:(id)arg1;
- (void)_didTapInviteButton;
- (void)_scrollToTop;
- (void)_dismissSearchResult;
- (void)_hideErrorBar;
- (void)showErrorBarWithErrorType:(unsigned long long)arg1 subjectName:(id)arg2 error:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)friendsNearbyDataDidLoad:(_Bool)arg1;
- (void)pullToRefreshViewDidNotAnimateLoadingState:(id)arg1;
- (void)pullToRefreshView:(id)arg1 didChangeVisibility:(_Bool)arg2 userInitiated:(_Bool)arg3;
- (void)pullToRefreshViewDidStartAnimatingLoadingState:(id)arg1;
- (void)pullToRefreshViewDidAttemptToTriggerRefresh:(id)arg1;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)_didFinishWaveMutationForCell:(id)arg1 didSendWave:(_Bool)arg2;
- (void)friendsNearbyTableViewCellDidTapWaveButton:(id)arg1;
- (void)friendsNearbyTableViewCellDidTapMessageButton:(id)arg1;
- (void)friendsNearbyTableViewCellDidTapInviteButton:(id)arg1;
- (void)friendsNearbyTableViewCellDidTapActionButton:(id)arg1;
- (void)_didTapCheckinCellWithStoryId:(id)arg1;
- (void)_handleLoadMoreInNearbySection:(id)arg1 error:(id)arg2;
- (void)_loadMoreFriendsInSection:(long long)arg1;
- (void)_refreshNumberOfFriendsToShow;
- (void)_resetNumberOfFriendsToShow;
- (void)_configureNumberOfFriendsToShow;
- (_Bool)_hasMore:(long long)arg1;
- (_Bool)_isMoreCell:(id)arg1;
- (_Bool)_isEmptyMandatorySection:(long long)arg1;
- (void)_updateTableView;
- (id)_indexPathForFBID:(id)arg1 inSection:(unsigned long long)arg2;
- (void)friendsNearbyTableViewCellDidTapCell:(id)arg1;
- (void)friendsNearbyTableViewCellDidTapMoreButtonWithLocation:(id)arg1 cell:(id)arg2 fromView:(id)arg3;
- (void)reloadCells:(id)arg1;
- (id)tableView:(id)arg1 cellForNearbyFriend:(id)arg2 indexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForSelfView:(id)arg2 indexPath:(id)arg3;
- (id)createCell:(id)arg1 indexPath:(id)arg2;
- (void)reloadData;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)cellIdentifierAtIndexPath:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (_Bool)fb_automaticallyAdjustsTableViewInsets;
- (_Bool)fb_showNavBarSearchField;
- (void)fb_handleTapBackButton;
- (SEL)fb_actionForBackArrowButton;
- (_Bool)fb_showBackArrowButton;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithSession:(id)arg1 dataSource:(id)arg2 experimentationParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


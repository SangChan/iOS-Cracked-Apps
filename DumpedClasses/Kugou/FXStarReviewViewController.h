//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXViewController.h"

#import "AVVideoViewDelegate.h"
#import "FFPullToLoadMoreViewDelegate.h"
#import "RemoteControl.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AVVideoView, FFPullToLoadMoreView, FXInterviewVideoInfo, FXReviewDetailView, FXThemeCustomTabBar, KGDefaultNetErrorView, KGDefaultTopView, NSDictionary, NSMutableArray, NSString, UIScrollView, UISegmentedControl, UITableView, UIView;

@interface FXStarReviewViewController : FXViewController <UITableViewDelegate, UITableViewDataSource, AVVideoViewDelegate, FFPullToLoadMoreViewDelegate, RemoteControl>
{
    _Bool isClickFullScreen;
    _Bool isTapRotate;
    KGDefaultTopView *_dtopView;
    _Bool waitLoading;
    _Bool _isHighLimpid;
    _Bool _refreshingFooter;
    _Bool _hadSendMonitor;
    int _showId;
    int _pageNo;
    FXInterviewVideoInfo *_interviewInfo;
    NSMutableArray *_moreVideoArray;
    AVVideoView *_videoView;
    UIScrollView *_svbg;
    FXReviewDetailView *_detailView;
    UITableView *_moreTableView;
    UIView *_tabBgView;
    FXThemeCustomTabBar *_tabView2;
    UISegmentedControl *_segmentControl;
    FFPullToLoadMoreView *_refreshFooterView;
    NSDictionary *_videoDictionary;
    long long _tabIndex;
    UIView *_blueTipView;
    KGDefaultNetErrorView *_errorView;
}

@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIView *blueTipView; // @synthesize blueTipView=_blueTipView;
@property(nonatomic) _Bool hadSendMonitor; // @synthesize hadSendMonitor=_hadSendMonitor;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) NSDictionary *videoDictionary; // @synthesize videoDictionary=_videoDictionary;
@property(nonatomic) _Bool refreshingFooter; // @synthesize refreshingFooter=_refreshingFooter;
@property(nonatomic) __weak FFPullToLoadMoreView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) UISegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) FXThemeCustomTabBar *tabView2; // @synthesize tabView2=_tabView2;
@property(retain, nonatomic) UIView *tabBgView; // @synthesize tabBgView=_tabBgView;
@property(retain, nonatomic) UITableView *moreTableView; // @synthesize moreTableView=_moreTableView;
@property(retain, nonatomic) FXReviewDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIScrollView *svbg; // @synthesize svbg=_svbg;
@property(retain, nonatomic) AVVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) _Bool isHighLimpid; // @synthesize isHighLimpid=_isHighLimpid;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSMutableArray *moreVideoArray; // @synthesize moreVideoArray=_moreVideoArray;
@property(nonatomic) int showId; // @synthesize showId=_showId;
@property(retain, nonatomic) FXInterviewVideoInfo *interviewInfo; // @synthesize interviewInfo=_interviewInfo;
- (void).cxx_destruct;
- (void)showAlertMsgWithText:(id)arg1 cancelBtnText:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 confirmText:(id)arg4 confirmBlock:(CDUnknownBlockType)arg5;
- (void)kgUserLogined;
- (void)login;
- (void)refreshVideoAndDetailInfo;
- (void)requestInterviewInfo;
- (void)didReceiveMemoryWarning;
- (void)avvideoViewNoNetwork;
- (void)appNetworkChanged:(id)arg1;
- (void)actionBack:(id)arg1;
- (void)dismissStartReview;
- (void)httpRequest;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)sendErrorLogWithError:(id)arg1;
- (void)AVVideoViewPlayState:(long long)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)AVVideoViewWantToExitFullscreen;
- (void)AVVideoViewWantToEnterFullscreen;
- (void)resizeScrollViewContainer;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)ffPullToLoadMoreViewDataSourceIsLoading;
- (void)ffPullToLoadMoreViewDidTriggerRefresh;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateDetailView;
- (void)noWifiAndClickCancel;
- (_Bool)kgRemoteControlReceivedWithEvent:(id)arg1;
- (void)playControlNotification:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)addNavigationBar;
- (void)appWillResignActive:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)closeBlueTipView:(id)arg1;
- (void)loadDataAndPlay;
- (void)flowTipLogic;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


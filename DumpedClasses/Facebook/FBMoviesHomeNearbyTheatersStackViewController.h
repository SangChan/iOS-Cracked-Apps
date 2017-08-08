//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComponentScrollEventListener-Protocol.h"
#import "FBMoviesHomeTheatersListViewControllerDelegate-Protocol.h"
#import "FBMoviesHomeTheatersMapViewControllerDelegate-Protocol.h"

@class FBMoviesHomeFunnelLogger, FBMoviesHomeLocationContext, FBMoviesHomeNearbyTheatersStackView, FBMoviesHomeTheatersListViewController, FBMoviesHomeTheatersMapViewController, FBUserSession, NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;
@protocol FBMoviesHomeNearbyTheatersStackViewControllerDelegate;

@interface FBMoviesHomeNearbyTheatersStackViewController : UIViewController <FBMoviesHomeTheatersListViewControllerDelegate, FBMoviesHomeTheatersMapViewControllerDelegate, FBComponentScrollEventListener>
{
    FBUserSession *_session;
    FBMoviesHomeTheatersListViewController *_listViewController;
    FBMoviesHomeTheatersMapViewController *_mapViewController;
    FBMoviesHomeNearbyTheatersStackView *_stackView;
    UITapGestureRecognizer *_mapTapGestureRecognizer;
    UIPanGestureRecognizer *_mapPanGestureRecognizer;
    UIPinchGestureRecognizer *_mapPinchGestureRecognizer;
    double _listOriginCenterY;
    double _listScrollViewContentOffsetY;
    FBMoviesHomeFunnelLogger *_funnelLogger;
    FBMoviesHomeLocationContext *_locationContext;
    id <FBMoviesHomeNearbyTheatersStackViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMoviesHomeNearbyTheatersStackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateMapUserInteractionState:(_Bool)arg1;
- (void)_didInteractWithMap:(id)arg1;
- (void)_setUpMapGestureRecognizers;
- (void)_loadMapWithTheaters:(id)arg1;
- (void)_loadTheatersList;
- (id)_listScrollView;
- (void)_addListContentOffsetSpringAnimationWithVelocity:(double)arg1 toValue:(double)arg2;
- (void)_addListContentOffsetDecayAnimationWithVelocity:(double)arg1;
- (id)_listContentOffsetAnimableProperty;
- (void)_addListCenterDecayAnimationWithVelocity:(double)arg1;
- (void)_addListCenterSpringAnimationWithVelocity:(double)arg1 toValue:(double)arg2;
- (id)_listCenterAnimableProperty;
- (double)_constrainedListCenter:(double)arg1;
- (double)_fullScreenMapListCenter;
- (double)_initialListCenter;
- (_Bool)_isMapVisible;
- (_Bool)_isListCenterBelowInitial:(double)arg1;
- (_Bool)_isListCenterAboveButCloseEnoughToInitial;
- (_Bool)_isListCenterBelowButFarEnoughToInitial;
- (void)_didEndDraggingListWithVelocity:(double)arg1;
- (void)_updateListViewContentOffset:(double)arg1;
- (void)_updateListViewCenter:(double)arg1;
- (void)_removeAllAnimations;
- (void)scrollViewWillBeginDecelerating:(struct FBScrollViewState)arg1;
- (void)scrollViewDidEndDragging:(struct FBScrollViewState)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(struct FBScrollViewState)arg1;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (void)cancelCurrentQuery;
- (void)fetchTheatersInMapRegion:(CDStruct_b7cb895d)arg1;
- (void)didTapViewListItemView;
- (void)didInteractWithMapForRegionChange;
- (void)didFetchSuccessWithNearbyTheaters:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1 locationContext:(id)arg2 funnelLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

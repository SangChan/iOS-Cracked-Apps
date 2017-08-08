//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBReactionDataFetcherListener-Protocol.h"
#import "FBReactionRequestDataStateTrackerProtocol-Protocol.h"
#import "FBReactionTriggerDataPrefetcherDelegate-Protocol.h"

@class FBPTState, FBReactionAggregatedDataFetcher, FBReactionCompositionStateTracker, FBReactionResponseLogger, FBReactionTriggerDataPrefetcher, FBUserSession, NSMutableSet, NSString;
@protocol FBNavigationCoordinator, FBReactionRequestSupportedStylesProtocol;

@interface FBReactionSessionCoordinator : NSObject <FBReactionTriggerDataPrefetcherDelegate, FBReactionDataFetcherListener, FBReactionRequestDataStateTrackerProtocol>
{
    NSMutableSet *_unfinishedPrefetchers;
    unsigned long long *_currentPlaceTipsPageNumber;
    unsigned long long _composerContentType;
    id <FBReactionRequestSupportedStylesProtocol> _supportedStyles;
    _Bool _hasDisplayedResults_UNSYNCHRONIZED_BACKING_IVAR;
    _Bool _publicationInProcess_UNSYNCHRONIZED_BACKING_IVAR;
    _Bool _responseIsPending;
    _Bool _timeoutIsOn;
    FBReactionAggregatedDataFetcher *_storyDataFetcher_UNSYNCHRONIZED_BACKING_IVAR;
    FBUserSession *_session;
    NSString *_reactionSessionId;
    NSString *_compositionSessionId;
    NSString *_referrer;
    NSString *_surface;
    FBReactionResponseLogger *_responseLogger;
    FBPTState *_placeTipState;
    unsigned long long _requestSequenceId;
    FBReactionTriggerDataPrefetcher *_finishedPrefetcher;
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBReactionCompositionStateTracker *_compositionStateTracker;
    double _timeout;
    unsigned long long _timeoutBeginTime;
}

@property(nonatomic) unsigned long long timeoutBeginTime; // @synthesize timeoutBeginTime=_timeoutBeginTime;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool timeoutIsOn; // @synthesize timeoutIsOn=_timeoutIsOn;
@property(retain, nonatomic) FBReactionCompositionStateTracker *compositionStateTracker; // @synthesize compositionStateTracker=_compositionStateTracker;
@property(retain, nonatomic) id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(retain, nonatomic) FBReactionTriggerDataPrefetcher *finishedPrefetcher; // @synthesize finishedPrefetcher=_finishedPrefetcher;
@property(nonatomic) unsigned long long requestSequenceId; // @synthesize requestSequenceId=_requestSequenceId;
@property(nonatomic) _Bool responseIsPending; // @synthesize responseIsPending=_responseIsPending;
@property(copy, nonatomic) FBPTState *placeTipState; // @synthesize placeTipState=_placeTipState;
@property(retain, nonatomic) FBReactionResponseLogger *responseLogger; // @synthesize responseLogger=_responseLogger;
@property(copy, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(copy, nonatomic) NSString *compositionSessionId; // @synthesize compositionSessionId=_compositionSessionId;
@property(copy, nonatomic) NSString *reactionSessionId; // @synthesize reactionSessionId=_reactionSessionId;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property _Bool publicationInProcess; // @synthesize publicationInProcess=_publicationInProcess_UNSYNCHRONIZED_BACKING_IVAR;
@property(retain) FBReactionAggregatedDataFetcher *storyDataFetcher; // @synthesize storyDataFetcher=_storyDataFetcher_UNSYNCHRONIZED_BACKING_IVAR;
@property _Bool hasDisplayedResults; // @synthesize hasDisplayedResults=_hasDisplayedResults_UNSYNCHRONIZED_BACKING_IVAR;
- (void).cxx_destruct;
- (void)dataFetcher:(id)arg1 didReplaceUnits:(id)arg2 fromLoadedUnits:(id)arg3 withNewUnits:(id)arg4 loadedFromCache:(_Bool)arg5 sessionId:(id)arg6 networkTime:(unsigned long long)arg7 hasNextPage:(_Bool)arg8 userInfo:(id)arg9;
- (void)dataFetcher:(id)arg1 didUpdateExpirationCondition:(id)arg2;
- (void)dataFetcher:(id)arg1 willAttemptToReloadUnit:(id)arg2;
- (void)dataFetcher:(id)arg1 didFailToReloadUnit:(id)arg2 withError:(id)arg3;
- (void)dataFetcher:(id)arg1 didMoveUnit:(id)arg2 toPosition:(unsigned long long)arg3;
- (void)dataFetcher:(id)arg1 didAddUnit:(id)arg2 toPosition:(unsigned long long)arg3;
- (void)dataFetcher:(id)arg1 didReplaceUnit:(id)arg2 withUnit:(id)arg3;
- (void)_dataFetcher:(id)arg1 didRemoveUnits:(id)arg2 fromLoadedUnits:(id)arg3;
- (void)loadFailedForDataFetcher:(id)arg1 sessionId:(id)arg2 cancelled:(_Bool)arg3 error:(id)arg4 userInfo:(id)arg5;
- (void)dataFetcherWillStartLoading:(id)arg1 userInfo:(id)arg2;
- (void)_dataFetcher:(id)arg1 didLoadUnits:(id)arg2 sessionId:(id)arg3 networkTime:(unsigned long long)arg4 hasNextPage:(_Bool)arg5;
- (void)_abortWithErrorDescription:(id)arg1 isNetworkError:(_Bool)arg2;
- (void)_saveMostRecentlyFinishedFetcher:(id)arg1;
- (id)_mostRecentDataFetcherAndSequenceNumber:(unsigned long long *)arg1;
- (void)_displayResults;
- (id)_newViewControllerWithDataFetcher:(id)arg1 referrer:(id)arg2;
- (id)overlayViewControllerWithReferrer:(id)arg1;
- (void)_displaySetup;
- (void)_displaySetupForOneSession;
- (void)_startTimeoutByMilliseconds:(double)arg1;
- (void)_displayWhenLoadedWithTimeout:(float)arg1 navigationCoordinator:(id)arg2;
- (void)displayWhenLoadedWithTimeout:(float)arg1 navigationCoordinator:(id)arg2 postContentType:(unsigned long long)arg3 referrer:(id)arg4;
- (void)firstLoadSucceededForPrefetcher:(id)arg1 networkTime:(unsigned long long)arg2;
- (void)firstLoadFailedForPrefetcher:(id)arg1 cancelled:(_Bool)arg2 error:(id)arg3;
- (void)logComposerEventAbort;
- (void)updateCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)publicationHasStarted;
- (void)setPublicationStarted;
- (void)prepareReactionResultsWithNeighborhoodTriggerData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)prepareReactionResultsWithNeighborhoodTriggerData:(id)arg1;
- (void)prepareReactionResultsWithRequestData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 placeTipState:(id)arg3;
- (void)prepareReactionResultsWithRequestData:(id)arg1;
- (void)composerRequestStateTrackerDidUpdateRequestData:(id)arg1;
- (id)initWithSession:(id)arg1 compositionSessionID:(id)arg2 surface:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWNewParentVoteView.h"

#import "GWVSOpinionViewDelegate-Protocol.h"

@class GWNewVoteVSBackView, GWVSOpinionView, NSString;

@interface GWNewVoteVSView : GWNewParentVoteView <GWVSOpinionViewDelegate>
{
    GWNewVoteVSBackView *_vsBackView;
    GWVSOpinionView *_redOpinionView;
    GWVSOpinionView *_blueOpinionView;
    unsigned long long _currentVotedStatus;
}

@property(nonatomic) unsigned long long currentVotedStatus; // @synthesize currentVotedStatus=_currentVotedStatus;
@property(retain, nonatomic) GWVSOpinionView *blueOpinionView; // @synthesize blueOpinionView=_blueOpinionView;
@property(retain, nonatomic) GWVSOpinionView *redOpinionView; // @synthesize redOpinionView=_redOpinionView;
@property(retain, nonatomic) GWNewVoteVSBackView *vsBackView; // @synthesize vsBackView=_vsBackView;
- (void).cxx_destruct;
- (id)blueCommentTag;
- (id)redCommentTag;
- (void)changeToNewVotedStatusWithClickOpinionView:(unsigned long long)arg1;
- (void)vsOpinionView:(id)arg1 opinionType:(unsigned long long)arg2;
- (void)showVoteCountViewWithRedCount:(long long)arg1 blueCount:(long long)arg2;
- (double)calculateVoteTextHeightWithText:(id)arg1;
- (double)calculateVoteBackHeightWithComment:(id)arg1;
- (double)getHeightWithComement:(id)arg1;
- (void)updateDisplay;
- (void)setComment:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andHeightChange:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCardViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, QYBisonAlbum, QYBisonAlbumClick, UIButton;

@interface QYVoteDetailViewController : QYCardViewController <UIAlertViewDelegate>
{
    QYBisonAlbum *shareBisonAlbum;
    QYBisonAlbum *ruleBisonAlbum;
    QYBisonAlbumClick *knowButtonClick;
    UIButton *ruleButton;
    UIButton *shareBtn;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)sendPingbackWithBisonAlbum:(id)arg1 clickEvent:(id)arg2;
- (void)ruleAction;
- (void)shareAction;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


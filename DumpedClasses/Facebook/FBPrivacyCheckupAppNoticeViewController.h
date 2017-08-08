//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CKComponentHostingViewDelegate-Protocol.h"

@class CKComponentHostingView, FBPrivacyCheckupModalNoticeData, FBPrivacyReviewCoreToolbox, NSString;
@protocol FBPrivacyCheckupAppNoticeViewControllerDelegate;

@interface FBPrivacyCheckupAppNoticeViewController : UIViewController <CKComponentHostingViewDelegate>
{
    CKComponentHostingView *_hostingView;
    FBPrivacyReviewCoreToolbox *_toolbox;
    FBPrivacyCheckupModalNoticeData *_noticeData;
    id <FBPrivacyCheckupAppNoticeViewControllerDelegate> _delegate;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
@property(nonatomic) __weak id <FBPrivacyCheckupAppNoticeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapSecondaryButton:(id)arg1;
- (void)didTapPrimaryButton:(id)arg1;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setNoticeData:(id)arg1;
- (id)initWithToolbox:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

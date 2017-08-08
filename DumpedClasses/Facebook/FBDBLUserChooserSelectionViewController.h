//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBAuthenticationRoundedImageView, FBDBLStoredUser, FBDBLUserChooserSelectionView, FBImageDownloader;
@protocol FBDBLViewConfiguring;

@interface FBDBLUserChooserSelectionViewController : UIViewController
{
    id <FBDBLViewConfiguring> _configuration;
    FBImageDownloader *_imageDownloader;
    FBAuthenticationRoundedImageView *_userImageView;
    FBDBLStoredUser *_userInfo;
    FBDBLUserChooserSelectionView *_userChooserSelectionView;
}

@property(readonly, nonatomic) FBDBLUserChooserSelectionView *userChooserSelectionView; // @synthesize userChooserSelectionView=_userChooserSelectionView;
@property(readonly, nonatomic) FBDBLStoredUser *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)analyticsModule;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserInfo:(id)arg1 configuration:(id)arg2 imageDownloader:(id)arg3;

@end

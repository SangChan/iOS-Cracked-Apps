//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "GuideViewControllerDelegate-Protocol.h"
#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "QYLoginDoneDelegate-Protocol.h"
#import "QYQRCodeAlertViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoPreviewLayer, DLNAGuideViewController, IQYOttTokenBindManager, IQYPhoneTokenLoginManager, IQYQrcodeIsLoginManager, IQYQrcodeRequestLoginManager, IQYTokenLoginConfirmManager, IQYUserManager, NSMutableDictionary, NSString, QYAccountViewController, QYQRCodeView, UIActivityIndicatorView, UILabel;

@interface QYQRCodeScannerViewController : QYCommonViewController <QYQRCodeAlertViewDelegate, QYLoginDoneDelegate, GuideViewControllerDelegate, AVCaptureMetadataOutputObjectsDelegate, IQYDataLoadManagerDelegate, UIAlertViewDelegate>
{
    _Bool _shouldScan;
    _Bool _alertLock;
    _Bool _cartoonShowing;
    int _vcType;
    AVCaptureSession *_session;
    QYQRCodeView *_scanRectView;
    IQYPhoneTokenLoginManager *_tokenManager;
    IQYTokenLoginConfirmManager *_confirmManager;
    IQYQrcodeIsLoginManager *_isLoginManager;
    IQYQrcodeRequestLoginManager *_requestManager;
    IQYUserManager *_userManager;
    NSMutableDictionary *_paramDic;
    UILabel *_errorLabel;
    double _startTime;
    QYAccountViewController *_accountViewController;
    DLNAGuideViewController *_guide;
    AVCaptureVideoPreviewLayer *_layer;
    AVCaptureMetadataOutput *_output;
    UIActivityIndicatorView *_waitingIndicatorView;
    CDUnknownBlockType _scanCompleteBlock;
    IQYOttTokenBindManager *_ottTokenBindManager;
}

@property(nonatomic) _Bool cartoonShowing; // @synthesize cartoonShowing=_cartoonShowing;
@property(retain, nonatomic) IQYOttTokenBindManager *ottTokenBindManager; // @synthesize ottTokenBindManager=_ottTokenBindManager;
@property(copy, nonatomic) CDUnknownBlockType scanCompleteBlock; // @synthesize scanCompleteBlock=_scanCompleteBlock;
@property(retain, nonatomic) UIActivityIndicatorView *waitingIndicatorView; // @synthesize waitingIndicatorView=_waitingIndicatorView;
@property(retain, nonatomic) AVCaptureMetadataOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *layer; // @synthesize layer=_layer;
@property(retain, nonatomic) DLNAGuideViewController *guide; // @synthesize guide=_guide;
@property(retain, nonatomic) QYAccountViewController *accountViewController; // @synthesize accountViewController=_accountViewController;
@property(nonatomic) _Bool alertLock; // @synthesize alertLock=_alertLock;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) NSMutableDictionary *paramDic; // @synthesize paramDic=_paramDic;
@property(retain, nonatomic) IQYUserManager *userManager; // @synthesize userManager=_userManager;
@property(retain, nonatomic) IQYQrcodeRequestLoginManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) IQYQrcodeIsLoginManager *isLoginManager; // @synthesize isLoginManager=_isLoginManager;
@property(retain, nonatomic) IQYTokenLoginConfirmManager *confirmManager; // @synthesize confirmManager=_confirmManager;
@property(retain, nonatomic) IQYPhoneTokenLoginManager *tokenManager; // @synthesize tokenManager=_tokenManager;
@property(nonatomic) _Bool shouldScan; // @synthesize shouldScan=_shouldScan;
@property(retain, nonatomic) QYQRCodeView *scanRectView; // @synthesize scanRectView=_scanRectView;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) int vcType; // @synthesize vcType=_vcType;
- (void)guideViewDidRemoved:(id)arg1;
- (void)showGuideViewAnimated:(_Bool)arg1;
- (void)popGuideView;
- (void)playerClosed:(id)arg1;
- (void)popReLoginAlertViewWithInfo:(id)arg1;
- (void)enableScan;
- (id)agentName;
- (void)loginSuccessed;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openH5WithURLString:(id)arg1;
- (void)backFromPaoPao:(id)arg1;
- (void)toPaoPaoViewController:(id)arg1;
- (void)playVideoWithInfo:(id)arg1;
- (void)helpIOSLoginWithInfo:(id)arg1;
- (void)doLogin;
- (void)checkToLogin:(id)arg1;
- (void)moduleDone:(id)arg1;
- (void)helpPcLoginWithInfo:(id)arg1;
- (void)toBindFutureCarWith:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)qrCodeAlertView:(id)arg1 clickedAtIndex:(long long)arg2;
- (void)sendConfirm;
- (void)sendToken;
- (void)setupRectOnInterest;
- (void)captureResult:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)qyCommonViewDisappear;
- (void)qyCommonViewAppear;
- (void)addHelpBtn;
- (void)addCenterView;
- (void)viewDidLoad;
- (void)initCapture;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithScanCompleteBlock:(CDUnknownBlockType)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


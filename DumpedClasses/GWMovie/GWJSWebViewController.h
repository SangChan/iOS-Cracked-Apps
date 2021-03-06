//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "GWWebViewDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class GWWebShareItem, GWWebView, NSDictionary, NSString, UIButton;

@interface GWJSWebViewController : GWBaseViewController <WKUIDelegate, GWWebViewDelegate>
{
    int _jsType;
    GWWebView *_webView;
    CDUnknownBlockType _viewDidAppearHandler;
    UIButton *_shareButton;
    GWWebShareItem *_shareItem;
    CDUnknownBlockType _viewNotiBack;
    CDUnknownBlockType _jsBlock;
    NSDictionary *_jsParameterDic;
}

@property(nonatomic) int jsType; // @synthesize jsType=_jsType;
@property(retain, nonatomic) NSDictionary *jsParameterDic; // @synthesize jsParameterDic=_jsParameterDic;
@property(copy, nonatomic) CDUnknownBlockType jsBlock; // @synthesize jsBlock=_jsBlock;
@property(copy, nonatomic) CDUnknownBlockType viewNotiBack; // @synthesize viewNotiBack=_viewNotiBack;
@property(retain, nonatomic) GWWebShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppearHandler; // @synthesize viewDidAppearHandler=_viewDidAppearHandler;
@property(retain, nonatomic) GWWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)callMethodsWithString:(id)arg1;
- (void)updateTitleWithText:(id)arg1;
- (void)backProcess;
- (void)webViewTitleDidChange:(id)arg1 title:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)showShareDrmaController;
- (void)saveScreenImage;
- (void)updateJSHandleWebAction:(id)arg1 Type:(int)arg2;
- (void)shareWithLogo:(id)arg1;
- (void)linkShares:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)postWalaNotification:(id)arg1;
- (void)appNotificationWithCheck:(id)arg1;
- (void)appScoreReward:(id)arg1 des:(id)arg2;
- (void)appRefresh:(id)arg1;
- (void)setAppTitle:(id)arg1;
- (id)appClose;
- (id)setCity:(id)arg1;
- (id)setArgByKeyword:(id)arg1;
- (id)shareViaNative:(id)arg1;
- (void)setupShareArgs:(id)arg1;
- (id)getArgByKeyword:(id)arg1;
- (id)getCommonArgs;
- (id)open:(id)arg1;
- (void)handleWithJSONString:(id)arg1;
- (id)webView:(id)arg1 previewingViewControllerForElement:(id)arg2 defaultActions:(id)arg3;
- (_Bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)webView:(id)arg1 commitPreviewingViewController:(id)arg2;
- (void)webViewDidClose:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


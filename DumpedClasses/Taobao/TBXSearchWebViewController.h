//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBXSearchBaseViewController.h"

#import "TBNXViewControllerDelegate.h"
#import "TBSearchExpandOrContractScrollViewDelegate.h"
#import "TBSearchPanRelationRecognizerExpandAndContractDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, TBNXViewController, TBScrollViewCompensator, TBSearchOnesearchNXConfigManager, TBSearchOnesearchNXConfigModel, TBSearchPanRelationRecognizer, TBSearchWebViewManager, UIView;

@interface TBXSearchWebViewController : TBXSearchBaseViewController <UIScrollViewDelegate, TBNXViewControllerDelegate, UIGestureRecognizerDelegate, TBSearchExpandOrContractScrollViewDelegate, TBSearchPanRelationRecognizerExpandAndContractDelegate>
{
    _Bool _enableNewWebviewScroll;
    NSString *_url;
    TBSearchOnesearchNXConfigModel *_nxConfigModel;
    TBSearchWebViewManager *_webViewManager;
    TBScrollViewCompensator *_expandOrContractScrollViewDelegateObject;
    TBSearchOnesearchNXConfigManager *_onesearchNXConfigManager;
    TBNXViewController *_nxVc;
    UIView *_containerView;
    TBSearchPanRelationRecognizer *_panRelationRecognizer;
}

@property(nonatomic) _Bool enableNewWebviewScroll; // @synthesize enableNewWebviewScroll=_enableNewWebviewScroll;
@property(retain, nonatomic) TBSearchPanRelationRecognizer *panRelationRecognizer; // @synthesize panRelationRecognizer=_panRelationRecognizer;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TBNXViewController *nxVc; // @synthesize nxVc=_nxVc;
@property(retain, nonatomic) TBSearchOnesearchNXConfigManager *onesearchNXConfigManager; // @synthesize onesearchNXConfigManager=_onesearchNXConfigManager;
@property(retain, nonatomic) TBScrollViewCompensator *expandOrContractScrollViewDelegateObject; // @synthesize expandOrContractScrollViewDelegateObject=_expandOrContractScrollViewDelegateObject;
@property(retain, nonatomic) TBSearchWebViewManager *webViewManager; // @synthesize webViewManager=_webViewManager;
@property(retain, nonatomic) TBSearchOnesearchNXConfigModel *nxConfigModel; // @synthesize nxConfigModel=_nxConfigModel;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewShouldContact:(id)arg1;
- (void)scrollViewShouldExpand:(id)arg1;
- (void)contract:(id)arg1;
- (void)expand:(id)arg1;
- (void)viewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;
- (void)search;
- (void)layoutResultViewWithMode:(unsigned long long)arg1;
- (void)clearResultComponent;
- (void)loadResultComponentWithMode:(unsigned long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ONEBusinessModule.h"
#import "ONEHomeContentAware.h"

@class NSString, ONEPreheatViewController;

@interface ONEPreheatPlaceholderViewController : UIViewController <ONEHomeContentAware, ONEBusinessModule>
{
    ONEPreheatViewController *_webViewController;
    double _contentHeight;
}

+ (id)businessId;
+ (void)load;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) ONEPreheatViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void).cxx_destruct;
- (void)product:(id)arg1 openURL:(id)arg2 info:(id)arg3;
- (_Bool)product:(id)arg1 canOpenURL:(id)arg2 info:(id)arg3;
- (void)configWebViewFrame;
- (void)setContentFrame:(struct CGRect)arg1;
- (void)didSelected;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

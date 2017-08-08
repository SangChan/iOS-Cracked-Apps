//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MNActionSheetViewController, UIAlertController, UINavigationController, UIViewController;
@protocol MNActionSheetPresenting, MNModalPresentationDelegate;

@protocol MNModalPresentation
@property(nonatomic) __weak id <MNModalPresentationDelegate> delegate;
- (UIViewController *)presentedViewController;
- (MNActionSheetViewController *)presentedActionSheetViewController;
- (UIViewController *)presentedActionSheetContentViewController;
- (void)dismissActionSheetViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentViewControllerInFullHeightActionSheet:(UIViewController<MNActionSheetPresenting> *)arg1 animated:(_Bool)arg2 keyboardAware:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)presentViewControllerInActionSheet:(UIViewController<MNActionSheetPresenting> *)arg1 maxHeightRatio:(double)arg2 animated:(_Bool)arg3 keyboardAware:(_Bool)arg4 completion:(void (^)(void))arg5;
- (void)presentViewControllerInActionSheet:(UIViewController<MNActionSheetPresenting> *)arg1 animated:(_Bool)arg2 keyboardAware:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)presentAlertController:(UIAlertController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (UINavigationController *)presentingNavigationControllerWithRootVC:(UIViewController *)arg1;
- (void)dismissViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (_Bool)dismissAllViewControllersAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (_Bool)dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
@end

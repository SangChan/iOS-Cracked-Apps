//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class UIViewController;

@interface UINavigationController (PTHUINavigationControllerCategory)
+ (void)setDefaultNavicationControllerClass:(Class)arg1;
- (id)popToRootViewControllerCompletion:(CDUnknownBlockType)arg1;
- (id)popToViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)popViewControllerCompletion:(CDUnknownBlockType)arg1;
- (void)pushViewController:(id)arg1 pushBlock:(CDUnknownBlockType)arg2;
@property(readonly, retain, nonatomic) UIViewController *currentViewController;
@property(readonly, retain, nonatomic) UIViewController *rootViewController;
@end


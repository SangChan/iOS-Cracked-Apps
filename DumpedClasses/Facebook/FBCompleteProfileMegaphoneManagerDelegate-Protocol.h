//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBCompleteProfileMegaphoneManager, UIViewController;

@protocol FBCompleteProfileMegaphoneManagerDelegate <NSObject>
- (void)completeProfileMegaphone:(FBCompleteProfileMegaphoneManager *)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)completeProfileMegaphone:(FBCompleteProfileMegaphoneManager *)arg1 didOpenViewController:(UIViewController *)arg2;
- (void)completeProfileMegaphoneWillDisappear:(FBCompleteProfileMegaphoneManager *)arg1 desiredAnimation:(long long)arg2;
- (void)completeProfileMegaphoneWillAdjustHeight:(FBCompleteProfileMegaphoneManager *)arg1 desiredAnimation:(long long)arg2;
- (void)completeProfileMegaphoneWillAppear:(FBCompleteProfileMegaphoneManager *)arg1 desiredAnimation:(long long)arg2;
@end

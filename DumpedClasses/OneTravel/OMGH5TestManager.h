//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseManager.h"

@class NSString, OMGAdvertiseAlertView, OMGH5TestAdvertisModel;

@interface OMGH5TestManager : BaseManager
{
    _Bool _enable;
    _Bool _gatedLaunchEnable;
    _Bool _hasOpenH5Test;
    long long _unreadNumber;
    NSString *_userID;
    OMGAdvertiseAlertView *_alertView;
    OMGH5TestAdvertisModel *_advertisModel;
}

+ (id)sharedInstance;
@property(retain, nonatomic) OMGH5TestAdvertisModel *advertisModel; // @synthesize advertisModel=_advertisModel;
@property(retain, nonatomic) OMGAdvertiseAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) long long unreadNumber; // @synthesize unreadNumber=_unreadNumber;
@property(nonatomic) _Bool hasOpenH5Test; // @synthesize hasOpenH5Test=_hasOpenH5Test;
@property(nonatomic) _Bool gatedLaunchEnable; // @synthesize gatedLaunchEnable=_gatedLaunchEnable;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void).cxx_destruct;
- (void)updateBadge:(CDUnknownBlockType)arg1;
- (id)showPopTipWithTitle:(id)arg1 text:(id)arg2 forView:(id)arg3;
- (id)showPopTipWithText:(id)arg1 forView:(id)arg2;
- (void)showAdvertisementInWebViewWithNavigation:(id)arg1;
- (void)showH5TestListController;
- (void)showAdvertisementInView:(id)arg1 ifNeeds:(CDUnknownBlockType)arg2;
- (id)init;

@end


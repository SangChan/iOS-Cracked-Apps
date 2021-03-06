//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTRouteLogicDatasource.h"
#import "TTRouteLogicDelegate.h"

@class NSString;

@interface TTRouteService : NSObject <TTRouteLogicDatasource, TTRouteLogicDelegate>
{
}

- (id)_suitableNavigationController;
- (void)_goToLoginVC;
- (void)_goToMobileLoginVC;
- (void)_goToUserProfileVC;
- (void)_goToMobileLoginWithType:(long long)arg1;
- (_Bool)_isLoginRelatedLogic:(id)arg1;
- (void)ttRouteLogic_configNavigationController:(id)arg1;
- (void)ttRouteLogic_sendOpenTrackWithFromKey:(id)arg1;
- (id)ttRouteLogic_classForKey:(id)arg1;
- (_Bool)ttRouteLogic_isLoginRelatedLogic:(id)arg1;
- (id)ttRouteLogic_registeredNavigationControllerClass;
- (_Bool)ttRouteLogic_detailViewABEnabled;
- (_Bool)ttRouteLogic_isLogin;
- (void)registerTTRouteService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


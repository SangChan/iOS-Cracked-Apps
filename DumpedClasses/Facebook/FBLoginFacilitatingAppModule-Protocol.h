//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBDeprecatedAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED-Protocol.h"

@protocol FBAppSessionLoginHelperProviding, FBNetworkDispatch;

@protocol FBLoginFacilitatingAppModule <FBDeprecatedAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED>
- (void)setRequesterConfiguration:(id <FBNetworkDispatch>)arg1;
- (void)setLoginHelperProvider:(id <FBAppSessionLoginHelperProviding>)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALPAUTHORIZEAuthBaseResult.h"

@class ALPAUTHORIZEAuthInfo, NSArray, NSString;

@interface ALPAUTHORIZESubmitTidResult : ALPAUTHORIZEAuthBaseResult
{
    ALPAUTHORIZEAuthInfo *_authInfo;
    NSArray *_permPoints;
    NSString *_validType;
}

+ (Class)permPointsElementClass;
@property(retain, nonatomic) NSString *validType; // @synthesize validType=_validType;
@property(retain, nonatomic) NSArray *permPoints; // @synthesize permPoints=_permPoints;
@property(retain, nonatomic) ALPAUTHORIZEAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
- (void).cxx_destruct;

@end

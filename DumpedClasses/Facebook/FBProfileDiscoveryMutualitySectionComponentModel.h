//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class FBMemPerson;

@interface FBProfileDiscoveryMutualitySectionComponentModel : FBValueObject <NSCopying>
{
    FBMemPerson *_person;
}

@property(readonly, copy, nonatomic) FBMemPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)initWithPerson:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBObjectReference.h"

@class NSArray, NSString;

@interface FBObjectInStructReference : NSObject <FBObjectReference>
{
    unsigned long long _index;
    NSArray *_namePath;
}

- (void).cxx_destruct;
- (id)namePath;
- (unsigned long long)indexInIvarLayout;
- (id)objectReferenceFromObject:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithIndex:(unsigned long long)arg1 namePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMapFoundationKeychainManager : NSObject
{
    unsigned long long _synchronizationMode;
    void *_accessibilityType;
}

+ (_Bool)isSynchronizationAvailable;
@property(nonatomic) void *accessibilityType; // @synthesize accessibilityType=_accessibilityType;
@property(nonatomic) unsigned long long synchronizationMode; // @synthesize synchronizationMode=_synchronizationMode;
- (id)getKeychainItemForKey:(id)arg1;
- (_Bool)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

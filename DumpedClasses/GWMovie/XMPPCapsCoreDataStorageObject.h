//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class DDXMLElement, NSSet, NSString;

@interface XMPPCapsCoreDataStorageObject : NSManagedObject
{
}

@property(retain, nonatomic) DDXMLElement *capabilities; // @dynamic capabilities;

// Remaining properties
@property(retain, nonatomic) NSString *capabilitiesStr; // @dynamic capabilitiesStr;
@property(retain, nonatomic) NSString *hashAlgorithm; // @dynamic hashAlgorithm;
@property(retain, nonatomic) NSString *hashStr; // @dynamic hashStr;
@property(retain, nonatomic) NSSet *resources; // @dynamic resources;

@end

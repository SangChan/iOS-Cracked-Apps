//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface QLHotspotItem : NSObject <NSCoding, NSCopying>
{
    unsigned long long _itemType;
    long long _itemHotLevel;
    NSString *_itemAccountID;
    NSString *_itemAccountName;
    NSString *_itemIconURL;
    NSString *_itemLevelMessage;
    NSString *_itemMessage1;
    NSString *_itemMessage2;
    NSString *_itemMessageURL1;
    NSString *_itemMessageURL2;
}

@property(copy, nonatomic) NSString *itemMessageURL2; // @synthesize itemMessageURL2=_itemMessageURL2;
@property(copy, nonatomic) NSString *itemMessageURL1; // @synthesize itemMessageURL1=_itemMessageURL1;
@property(copy, nonatomic) NSString *itemMessage2; // @synthesize itemMessage2=_itemMessage2;
@property(copy, nonatomic) NSString *itemMessage1; // @synthesize itemMessage1=_itemMessage1;
@property(copy, nonatomic) NSString *itemLevelMessage; // @synthesize itemLevelMessage=_itemLevelMessage;
@property(copy, nonatomic) NSString *itemIconURL; // @synthesize itemIconURL=_itemIconURL;
@property(copy, nonatomic) NSString *itemAccountName; // @synthesize itemAccountName=_itemAccountName;
@property(copy, nonatomic) NSString *itemAccountID; // @synthesize itemAccountID=_itemAccountID;
@property(nonatomic) long long itemHotLevel; // @synthesize itemHotLevel=_itemHotLevel;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end


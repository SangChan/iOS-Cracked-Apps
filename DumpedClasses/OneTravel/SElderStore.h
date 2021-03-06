//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, TRPoiSearchData;

@interface SElderStore : NSObject
{
    NSMutableArray *_onlineAddress;
    NSArray *_localFromAddress;
    NSArray *_localToAddress;
    TRPoiSearchData *_poiSearch;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TRPoiSearchData *poiSearch; // @synthesize poiSearch=_poiSearch;
@property(copy, nonatomic) NSArray *localToAddress; // @synthesize localToAddress=_localToAddress;
@property(copy, nonatomic) NSArray *localFromAddress; // @synthesize localFromAddress=_localFromAddress;
@property(retain, nonatomic) NSMutableArray *onlineAddress; // @synthesize onlineAddress=_onlineAddress;
- (void).cxx_destruct;
- (id)encryptPhone;
- (void)cancelQueryAddress;
- (void)queryAddressWithText:(id)arg1 cityId:(id)arg2 cityName:(id)arg3 withSuccessBlock:(CDUnknownBlockType)arg4 withFailure:(CDUnknownBlockType)arg5;
- (id)getOlderAddressesWithType:(long long)arg1;
- (void)deleteOlderLocalAddressList;
- (void)saveAddress:(id)arg1 target:(id)arg2 type:(long long)arg3;
- (void)saveOlderAddress:(id)arg1 withType:(long long)arg2;
- (id)filePathWithType:(long long)arg1;
- (id)addressFolder;
- (void)requestOlderAddressListWithSuccess:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (id)init;

@end


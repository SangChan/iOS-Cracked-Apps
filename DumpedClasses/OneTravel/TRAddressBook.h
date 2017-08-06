//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface TRAddressBook : NSObject
{
    _Bool _isReady;
    NSArray *_contacts;
    NSMutableArray *_allcontacts;
    void *_addressBookRef;
    NSMutableArray *_actions;
}

@property(retain) NSMutableArray *actions; // @synthesize actions=_actions;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) void *addressBookRef; // @synthesize addressBookRef=_addressBookRef;
@property(retain, nonatomic) NSMutableArray *allcontacts; // @synthesize allcontacts=_allcontacts;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (void)ready:(CDUnknownBlockType)arg1;
- (void)handleActions;
- (void)getFilterAddressBook;
- (id)getMobilePhoneProperty:(void *)arg1;
- (void)getContactsFromAddressBookWithOffset:(unsigned long long)arg1 andSize:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

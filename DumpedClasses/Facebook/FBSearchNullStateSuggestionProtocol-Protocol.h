//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FBSearchNullStateSuggestionProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long suggestionType;
@property(readonly, nonatomic) unsigned long long numberOfLines;
@property(readonly, copy, nonatomic) NSString *tracking;
@property(readonly, nonatomic) _Bool isProminent;
@property(readonly, copy, nonatomic) NSString *imageURLString;
@property(readonly, copy, nonatomic) NSString *suggestionServerSource;
@end

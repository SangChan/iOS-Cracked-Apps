//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSDictionary;

@interface NSURL (RequestUtils)
+ (id)URLWithComponents:(id)arg1;
- (id)URLWithFragment:(id)arg1;
- (id)URLWithQuery:(id)arg1;
- (id)URLWithParameterString:(id)arg1;
- (id)URLWithPath:(id)arg1;
- (id)URLWithPassword:(id)arg1;
- (id)URLWithUser:(id)arg1;
- (id)URLWithPort:(id)arg1;
- (id)URLWithHost:(id)arg1;
- (id)URLWithScheme:(id)arg1;
- (id)URLWithValue:(id)arg1 forComponent:(id)arg2;
@property(readonly, nonatomic) NSDictionary *components;
@end


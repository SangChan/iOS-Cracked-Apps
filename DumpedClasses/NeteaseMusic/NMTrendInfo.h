//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMTrendInfo : NSObject
{
    unsigned long long _type;
    long long _number;
}

+ (id)trendFromMVContent:(id)arg1 currentRank:(long long)arg2;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 number:(long long)arg2;

@end

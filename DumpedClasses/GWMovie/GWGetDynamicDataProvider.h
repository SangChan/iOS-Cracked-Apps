//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWGetDynamicDataProvider : GWBaseInfoProvider
{
    NSString *_from;
    NSString *_maxnum;
}

@property(copy, nonatomic) NSString *maxnum; // @synthesize maxnum=_maxnum;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (void)requestWithDynamicDataHanlder:(CDUnknownBlockType)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUStatisticsHandler.h"

@class NSMutableArray;

@interface QYUDragonStatisticsHandler : QYUStatisticsHandler
{
    NSMutableArray *_statHanders;
}

+ (void)load;
@property(retain, nonatomic) NSMutableArray *statHanders; // @synthesize statHanders=_statHanders;
- (void).cxx_destruct;
- (_Bool)Allowed:(id)arg1;
- (id)getSwitch;
- (void)handlePageView:(id)arg1 pageData:(id)arg2;
- (void)handleClickEvent:(id)arg1 cardData:(id)arg2;
- (void)handleShowEvent:(id)arg1 cardData:(id)arg2;

@end


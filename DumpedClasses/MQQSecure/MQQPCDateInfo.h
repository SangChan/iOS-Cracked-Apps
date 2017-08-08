//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQPCDateNumber, NSString;

@interface MQQPCDateInfo : NSObject
{
    MQQPCDateNumber *_solarDateNumber;
    MQQPCDateNumber *_lunarDateNumber;
    NSString *_lunarMonthString;
    NSString *_lunarDayString;
    NSString *_solarTerm;
    NSString *_holiday;
    long long _holidayType;
}

@property(nonatomic) long long holidayType; // @synthesize holidayType=_holidayType;
@property(retain, nonatomic) NSString *holiday; // @synthesize holiday=_holiday;
@property(retain, nonatomic) NSString *solarTerm; // @synthesize solarTerm=_solarTerm;
@property(retain, nonatomic) NSString *lunarMonthString; // @synthesize lunarMonthString=_lunarMonthString;
@property(retain, nonatomic) NSString *lunarDayString; // @synthesize lunarDayString=_lunarDayString;
@property(retain, nonatomic) MQQPCDateNumber *lunarDateNumber; // @synthesize lunarDateNumber=_lunarDateNumber;
@property(retain, nonatomic) MQQPCDateNumber *solarDateNumber; // @synthesize solarDateNumber=_solarDateNumber;
- (void)dealloc;
- (id)init;

@end

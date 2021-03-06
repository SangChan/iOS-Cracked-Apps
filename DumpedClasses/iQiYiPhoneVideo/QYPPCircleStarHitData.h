//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class NSArray, NSString, QYPPCSHitMyData, QYPPCSHitPropData, QYPPCSHitStarData, QYPPCircleCloudControlData;
@protocol Optional, Optional><ConvertOnDemand, Optional><QYPPCSFansContributeData><ConvertOnDemand, Optional><QYPPCircleTaskDailySingleData><ConvertOnDemand;

@interface QYPPCircleStarHitData : QYPPJsonData
{
    NSString<Optional> *_collected;
    NSString<Optional> *_topUrl;
    NSString<Optional> *_descUrl;
    NSString<Optional> *_memberCount;
    NSArray<Optional><ConvertOnDemand> *_hitTopWelfareDesc;
    QYPPCSHitStarData<Optional> *_star;
    QYPPCSHitMyData<Optional> *_my;
    QYPPCSHitPropData<Optional> *_prop;
    NSArray<Optional><QYPPCircleTaskDailySingleData><ConvertOnDemand> *_task;
    NSArray<Optional><QYPPCSFansContributeData><ConvertOnDemand> *_fansContribute;
    QYPPCircleCloudControlData<Optional> *_cloudControl;
}

@property(retain, nonatomic) QYPPCircleCloudControlData<Optional> *cloudControl; // @synthesize cloudControl=_cloudControl;
@property(retain, nonatomic) NSArray<Optional><QYPPCSFansContributeData><ConvertOnDemand> *fansContribute; // @synthesize fansContribute=_fansContribute;
@property(retain, nonatomic) NSArray<Optional><QYPPCircleTaskDailySingleData><ConvertOnDemand> *task; // @synthesize task=_task;
@property(retain, nonatomic) QYPPCSHitPropData<Optional> *prop; // @synthesize prop=_prop;
@property(retain, nonatomic) QYPPCSHitMyData<Optional> *my; // @synthesize my=_my;
@property(retain, nonatomic) QYPPCSHitStarData<Optional> *star; // @synthesize star=_star;
@property(retain, nonatomic) NSArray<Optional><ConvertOnDemand> *hitTopWelfareDesc; // @synthesize hitTopWelfareDesc=_hitTopWelfareDesc;
@property(retain, nonatomic) NSString<Optional> *memberCount; // @synthesize memberCount=_memberCount;
@property(retain, nonatomic) NSString<Optional> *descUrl; // @synthesize descUrl=_descUrl;
@property(retain, nonatomic) NSString<Optional> *topUrl; // @synthesize topUrl=_topUrl;
@property(retain, nonatomic) NSString<Optional> *collected; // @synthesize collected=_collected;
- (void).cxx_destruct;

@end


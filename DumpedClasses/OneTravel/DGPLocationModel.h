//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGPBaseModel.h"

@class NSArray<DGPBusRealtimeInfoModel>;

@interface DGPLocationModel : DGPBaseModel
{
    NSArray<DGPBusRealtimeInfoModel> *_location;
    NSArray<DGPBusRealtimeInfoModel> *_arrival;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSArray<DGPBusRealtimeInfoModel> *arrival; // @synthesize arrival=_arrival;
@property(retain, nonatomic) NSArray<DGPBusRealtimeInfoModel> *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)transformToOneResonse;

@end

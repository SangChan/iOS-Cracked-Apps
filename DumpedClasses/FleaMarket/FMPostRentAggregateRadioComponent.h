//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

#import "FMCardParserProtocol.h"
#import "FMWantRentPropertyValueProtocol.h"
#import "NSCopying.h"

@class FMCardDataAggregateRadioDO, FMCategoryDO, NSString;

@interface FMPostRentAggregateRadioComponent : FMCellComponent <FMCardParserProtocol, FMWantRentPropertyValueProtocol, NSCopying>
{
    FMCategoryDO *categoryDO;
    FMCardDataAggregateRadioDO *_aggregateRadioDO;
}

@property(retain, nonatomic) FMCardDataAggregateRadioDO *aggregateRadioDO; // @synthesize aggregateRadioDO=_aggregateRadioDO;
@property(nonatomic) __weak FMCategoryDO *categoryDO; // @synthesize categoryDO;
- (void).cxx_destruct;
- (id)checkReqParams;
- (id)propertyValueString;
- (Class)viewClass;
- (_Bool)parseCardData:(id)arg1 withType:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

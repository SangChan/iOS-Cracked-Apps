//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@interface HotelImageCategoryInfoRequest : CTBusinessBean
{
    int _hotelId;
    int _cityId;
    int _countryType;
    int _sourceFrom;
}

@property(nonatomic) int sourceFrom; // @synthesize sourceFrom=_sourceFrom;
@property(nonatomic) int countryType; // @synthesize countryType=_countryType;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
@property(nonatomic) int hotelId; // @synthesize hotelId=_hotelId;
- (id)getPBAnnotationArray;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_PBMutableArray, NSString;

@interface GMSx_GMPCMultiZoomStyle : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *configSet; // @dynamic configSet;
@property(nonatomic) _Bool global; // @dynamic global;
@property(nonatomic) _Bool hasConfigSet; // @dynamic hasConfigSet;
@property(nonatomic) _Bool hasGlobal; // @dynamic hasGlobal;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasKeyZoomArray; // @dynamic hasKeyZoomArray;
@property(nonatomic) _Bool hasZPlaneForSorting; // @dynamic hasZPlaneForSorting;
@property(nonatomic) unsigned long long id_p; // @dynamic id_p;
@property(retain, nonatomic) GMSx_PBMutableArray *keyZoomArray; // @dynamic keyZoomArray;
@property(nonatomic) int zPlaneForSorting; // @dynamic zPlaneForSorting;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class CTBasicDescriptionViewModel, CTIntlFlightPurchaseExplainViewModel, NSMutableArray, NSString;

@interface CTIntlFlightAnnouncementsViewModel : CTViewModel
{
    NSString *_remarkTitle;
    NSMutableArray *_flightRemarkModelList;
    NSString *_purchaseExplainTitle;
    CTIntlFlightPurchaseExplainViewModel *_flightPurchaseExplainModel;
    CTBasicDescriptionViewModel *_flightSignLimitsModel;
    CTBasicDescriptionViewModel *_commentsDescModel;
}

@property(retain, nonatomic) CTBasicDescriptionViewModel *commentsDescModel; // @synthesize commentsDescModel=_commentsDescModel;
@property(retain, nonatomic) CTBasicDescriptionViewModel *flightSignLimitsModel; // @synthesize flightSignLimitsModel=_flightSignLimitsModel;
@property(retain, nonatomic) CTIntlFlightPurchaseExplainViewModel *flightPurchaseExplainModel; // @synthesize flightPurchaseExplainModel=_flightPurchaseExplainModel;
@property(copy, nonatomic) NSString *purchaseExplainTitle; // @synthesize purchaseExplainTitle=_purchaseExplainTitle;
@property(retain, nonatomic) NSMutableArray *flightRemarkModelList; // @synthesize flightRemarkModelList=_flightRemarkModelList;
@property(copy, nonatomic) NSString *remarkTitle; // @synthesize remarkTitle=_remarkTitle;
- (void).cxx_destruct;
- (void)setUpWithProtoModel:(id)arg1;
- (void)initData;
- (id)init;

@end


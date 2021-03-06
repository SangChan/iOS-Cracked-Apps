//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CTDiscoverTravelPartnerModel, CTImageView, UIImageView, UILabel;

@interface CTDiscoverDestinationDetailsPartnerCollectionViewCell : UICollectionViewCell
{
    CTImageView *_avatarImageView;
    UILabel *_ageLabel;
    UILabel *_departureTimeLabel;
    UILabel *_interestingsLabel;
    UIImageView *_genderImageView;
    CTDiscoverTravelPartnerModel *_model;
}

+ (double)viewHeight;
+ (double)distanceBetweenCells:(id)arg1;
+ (double)cellWidth;
+ (double)cellHeight;
@property(retain, nonatomic) CTDiscoverTravelPartnerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(retain, nonatomic) UILabel *interestingsLabel; // @synthesize interestingsLabel=_interestingsLabel;
@property(retain, nonatomic) UILabel *departureTimeLabel; // @synthesize departureTimeLabel=_departureTimeLabel;
@property(retain, nonatomic) UILabel *ageLabel; // @synthesize ageLabel=_ageLabel;
@property(retain, nonatomic) CTImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end


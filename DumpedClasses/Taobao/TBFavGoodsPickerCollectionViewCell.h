//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TBFavoriteGoodModel, TBPriceTextView, UIImageView, UIView;

@interface TBFavGoodsPickerCollectionViewCell : UICollectionViewCell
{
    UIImageView *_backgroundImageView;
    TBFavoriteGoodModel *_good;
    UIImageView *_markImageView;
    UIView *_grayMaskView;
    TBPriceTextView *_priceTextView;
}

@property(retain, nonatomic) TBPriceTextView *priceTextView; // @synthesize priceTextView=_priceTextView;
@property(retain, nonatomic) UIView *grayMaskView; // @synthesize grayMaskView=_grayMaskView;
@property(retain, nonatomic) UIImageView *markImageView; // @synthesize markImageView=_markImageView;
@property(retain, nonatomic) TBFavoriteGoodModel *good; // @synthesize good=_good;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (id)roundUnselectedImage;
- (id)roundSelectedImage;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateMarkedState;
- (void)configureWithGood:(id)arg1;
- (void)prepareForReuse;

@end

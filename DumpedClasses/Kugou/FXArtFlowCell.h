//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class KGThemeImageView, KGThemeView, NSString, UIImage, UIImageView, UILabel, UIView;

@interface FXArtFlowCell : UICollectionViewCell
{
    NSString *_cellID;
    UIImageView *_headImgView;
    UIImageView *_liveImgView;
    UILabel *_musicLabel;
    UILabel *_nameLabel;
    KGThemeImageView *_musicImageView;
    NSString *_headUrl;
    UIImageView *_mobileLiveIcon;
    UIImageView *_vipImage;
    UILabel *_mobileLiveTitleLabel;
    UIImageView *_shadowImageView;
    UIImageView *_grandCeremonyIcon;
    UIView *_headerMaskView;
    UIImage *_defalutImage;
    UILabel *_numPeopleLabel;
    UIView *_fxSelectedView;
    KGThemeView *_bgView;
    UIImageView *_concernLogo;
}

@property(retain, nonatomic) UIImageView *concernLogo; // @synthesize concernLogo=_concernLogo;
@property(retain, nonatomic) KGThemeView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *fxSelectedView; // @synthesize fxSelectedView=_fxSelectedView;
@property(retain, nonatomic) UILabel *numPeopleLabel; // @synthesize numPeopleLabel=_numPeopleLabel;
@property(retain, nonatomic) UIImage *defalutImage; // @synthesize defalutImage=_defalutImage;
@property(retain, nonatomic) UIView *headerMaskView; // @synthesize headerMaskView=_headerMaskView;
@property(retain, nonatomic) UIImageView *grandCeremonyIcon; // @synthesize grandCeremonyIcon=_grandCeremonyIcon;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UILabel *mobileLiveTitleLabel; // @synthesize mobileLiveTitleLabel=_mobileLiveTitleLabel;
@property(retain, nonatomic) UIImageView *vipImage; // @synthesize vipImage=_vipImage;
@property(retain, nonatomic) UIImageView *mobileLiveIcon; // @synthesize mobileLiveIcon=_mobileLiveIcon;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) KGThemeImageView *musicImageView; // @synthesize musicImageView=_musicImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *musicLabel; // @synthesize musicLabel=_musicLabel;
@property(retain, nonatomic) UIImageView *liveImgView; // @synthesize liveImgView=_liveImgView;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) NSString *cellID; // @synthesize cellID=_cellID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)lastOnlineTimeForShow:(double)arg1;
- (id)numFormat:(float)arg1;
- (void)setLastOnlineTime:(double)arg1;
- (void)setPeopleNum:(long long)arg1;
- (void)cancelCurrentImageLoad;
- (void)downloadAndHandleImage:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)showSelectedStyle:(_Bool)arg1;
- (void)setIsShowGrandCeremonyIcon:(id)arg1;
- (void)setIsLive:(_Bool)arg1;
- (void)setName:(id)arg1;
- (void)setIsConcern:(_Bool)arg1;
- (void)setIsVip:(int)arg1;
- (void)setMusicImageStatus:(id)arg1 isSing:(_Bool)arg2;
- (void)setMobileLiveTitle:(id)arg1;
- (void)setSongName:(id)arg1 isSing:(_Bool)arg2;
- (void)setSongName:(id)arg1;
- (void)resetContentFrame;
- (void)resetFrame:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)fxConfigFullSelectedStyle;
- (void)installSelectedView;
- (void)initView;
- (void)changeColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end


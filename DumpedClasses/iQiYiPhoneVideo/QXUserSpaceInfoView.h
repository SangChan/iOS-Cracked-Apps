//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, QXPopMedalInfoView, QXUserSpaceModel, UIButton, UIImageView, UILabel;

@interface QXUserSpaceInfoView : UIView
{
    NSMutableArray *_medalImages;
    QXPopMedalInfoView *_medalinfoView;
    UILabel *_nickNameLabel;
    UIImageView *_levelBgImageView;
    UILabel *_levelLabel;
    UIButton *_locationBtn;
    UILabel *_roomNumLabel;
    UIButton *_followBtn;
    UIButton *_fanBtn;
    UIButton *_guardBtn;
    UILabel *_guardCountLabel;
    UIView *_separatedLineOne;
    UIView *_separatedLineTwo;
    QXUserSpaceModel *_model;
}

@property(retain, nonatomic) QXUserSpaceModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *separatedLineTwo; // @synthesize separatedLineTwo=_separatedLineTwo;
@property(retain, nonatomic) UIView *separatedLineOne; // @synthesize separatedLineOne=_separatedLineOne;
@property(retain, nonatomic) UILabel *guardCountLabel; // @synthesize guardCountLabel=_guardCountLabel;
@property(retain, nonatomic) UIButton *guardBtn; // @synthesize guardBtn=_guardBtn;
@property(retain, nonatomic) UIButton *fanBtn; // @synthesize fanBtn=_fanBtn;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *roomNumLabel; // @synthesize roomNumLabel=_roomNumLabel;
@property(retain, nonatomic) UIButton *locationBtn; // @synthesize locationBtn=_locationBtn;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) UIImageView *levelBgImageView; // @synthesize levelBgImageView=_levelBgImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void).cxx_destruct;
- (id)medalinfoView;
- (void)_initSubviews;
- (void)medalImageViewDidTap:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end


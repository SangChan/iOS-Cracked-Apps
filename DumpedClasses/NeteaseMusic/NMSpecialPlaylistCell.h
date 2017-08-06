//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class NMBadgePointView, NMLocalMusicGuideView, NMPlaylist, UIImageView, UILabel;

@interface NMSpecialPlaylistCell : NMCommonCell
{
    NMLocalMusicGuideView *_localMusicGuideView;
    _Bool _showBadge;
    NMPlaylist *_playlist;
    UIImageView *_arrowView;
    UILabel *_nameLabel;
    UILabel *_countLabel;
    UIImageView *_imgIcon;
    NMBadgePointView *_dotImageView;
    UIImageView *_imgPlaying;
    UILabel *_subTitleLabel;
}

+ (double)height;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIImageView *imgPlaying; // @synthesize imgPlaying=_imgPlaying;
@property(retain, nonatomic) NMBadgePointView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(retain, nonatomic) UIImageView *imgIcon; // @synthesize imgIcon=_imgIcon;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) NMPlaylist *playlist; // @synthesize playlist=_playlist;
@property(nonatomic) _Bool showBadge; // @synthesize showBadge=_showBadge;
- (void).cxx_destruct;
- (void)setDetailAccessibility;
- (void)resetCell;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)hideSubTitle;
- (void)showSubtitle:(id)arg1;
- (void)setDownloadSuccCount:(long long)arg1;
- (void)setDetail;
- (void)genAccessoryView;
- (void)createBadgeView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeButton, KGThemeLabel, NSIndexPath, SongInfo;

@interface KGSelectedSongCell : UITableViewCell
{
    id <KGSelectedSongCellDelegate> _delegate;
    SongInfo *_songInfo;
    NSIndexPath *_indexPath;
    KGThemeLabel *_songNameLabel;
    KGThemeLabel *_singerNameLabel;
    KGThemeButton *_playBtn;
    KGThemeButton *_deleteBtn;
}

@property(nonatomic) __weak KGThemeButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(nonatomic) __weak KGThemeButton *playBtn; // @synthesize playBtn=_playBtn;
@property(nonatomic) __weak KGThemeLabel *singerNameLabel; // @synthesize singerNameLabel=_singerNameLabel;
@property(nonatomic) __weak KGThemeLabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) SongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(nonatomic) __weak id <KGSelectedSongCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setPlayBtnState:(_Bool)arg1;
- (void)setDeleteBtnMoveToRight;
- (void)deleteBtnClick;
- (void)playBtnClick;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

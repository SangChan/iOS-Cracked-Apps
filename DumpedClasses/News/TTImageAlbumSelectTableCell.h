//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TTAlbumModel, UIImageView, UILabel;

@interface TTImageAlbumSelectTableCell : UITableViewCell
{
    UIImageView *_imagePreview;
    UIImageView *_selectedHook;
    UILabel *_nameLabel;
    UILabel *_countLabel;
    TTAlbumModel *_model;
}

@property(retain, nonatomic) TTAlbumModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *selectedHook; // @synthesize selectedHook=_selectedHook;
@property(retain, nonatomic) UIImageView *imagePreview; // @synthesize imagePreview=_imagePreview;
- (void).cxx_destruct;
- (void)refresData:(id)arg1;
- (void)refreshUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface RecordBannarAdView : UIView
{
    id _delegate;
    UIImageView *_imageView;
    UIImageView *_adMarkImage;
}

@property(readonly, nonatomic) UIImageView *adMarkImage; // @synthesize adMarkImage=_adMarkImage;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)tapAction:(id)arg1;
- (void)showAdBadge:(_Bool)arg1;
- (void)drawSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


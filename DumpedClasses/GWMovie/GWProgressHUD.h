//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBProgressHUD.h"

@interface GWProgressHUD : MBProgressHUD
{
}

+ (id)allHUDsForView:(id)arg1;
+ (id)HUDForView:(id)arg1;
+ (unsigned long long)hideAllHUDsForView:(id)arg1 animated:(_Bool)arg2;
+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)loadGif;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class TTSectionViewEntity;

@interface TTSectionView : SSThemedView
{
    TTSectionViewEntity *_cellEntity;
    long long _section;
}

@property(nonatomic) long long section; // @synthesize section=_section;
@property(retain, nonatomic) TTSectionViewEntity *cellEntity; // @synthesize cellEntity=_cellEntity;
- (void).cxx_destruct;
- (void)fillContent;
- (void)renderView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

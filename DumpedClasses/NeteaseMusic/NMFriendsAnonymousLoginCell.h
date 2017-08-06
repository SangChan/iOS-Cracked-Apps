//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "NMAnonymousLoginFrameViewDelegate.h"

@class NMAnonymousLoginFrameView, NSString, UILabel;

@interface NMFriendsAnonymousLoginCell : UITableViewCell <NMAnonymousLoginFrameViewDelegate>
{
    NMAnonymousLoginFrameView *_loginView;
    UILabel *_noticeLabel;
    id <NMFriendsAnonymousLoginCellDelegate> _delegate;
}

+ (double)heightForType:(unsigned long long)arg1;
@property(nonatomic) id <NMFriendsAnonymousLoginCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loginButtonClickedInLoginFrameView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 type:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

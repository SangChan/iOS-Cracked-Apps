//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAppInvitePopoverViewController, FBMemApplicationRequest;

@protocol FBAppInvitePopoverViewControllerDelegate <NSObject>
- (void)popover:(FBAppInvitePopoverViewController *)arg1 reportInviteButtonDidTapForInvite:(FBMemApplicationRequest *)arg2;
- (void)popover:(FBAppInvitePopoverViewController *)arg1 hideInvitesFromSenderButtonDidTapForInvite:(FBMemApplicationRequest *)arg2;
- (void)popover:(FBAppInvitePopoverViewController *)arg1 hideInvitesFromAppButtonDidTapForInvite:(FBMemApplicationRequest *)arg2;
- (void)popover:(FBAppInvitePopoverViewController *)arg1 deleteInviteButtonDidTapForInvite:(FBMemApplicationRequest *)arg2;
- (void)popover:(FBAppInvitePopoverViewController *)arg1 chevronMenuButtonDidTapForInvite:(FBMemApplicationRequest *)arg2;
- (void)popover:(FBAppInvitePopoverViewController *)arg1 AppInfoDidTapForInvite:(FBMemApplicationRequest *)arg2;
- (void)popover:(FBAppInvitePopoverViewController *)arg1 installButtonDidTapForInvite:(FBMemApplicationRequest *)arg2;
- (void)popover:(FBAppInvitePopoverViewController *)arg1 inviteImageDidTapForInvite:(FBMemApplicationRequest *)arg2;
- (void)popover:(FBAppInvitePopoverViewController *)arg1 senderDidTapForInvite:(FBMemApplicationRequest *)arg2;
@end


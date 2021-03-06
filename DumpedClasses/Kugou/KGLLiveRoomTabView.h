//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FXLiveRoomTabBarDelegate.h"

@class FXKGLiveShineValueView, FXLiveRoomTabBar, KGLChatView, KGLLiveActivityVM, KGLLiveRoomShineRankVll, KGLLiveRoomViewerVll, KGLViewerTabView, KGLiveActivityWebViewVll, NSString, UIImageView;

@interface KGLLiveRoomTabView : UIView <FXLiveRoomTabBarDelegate>
{
    long long _roomId;
    long long _concertId;
    KGLLiveActivityVM *_h5activityModel;
    KGLiveActivityWebViewVll *_activityVll;
    FXKGLiveShineValueView *_shineValueView;
    CDUnknownBlockType _updateViewerNumBlock;
    UIView *_topView;
    FXLiveRoomTabBar *_tabbar;
    KGLChatView *_chatView;
    UIImageView *_tabarShadow;
    UIView *_mainViewerView;
    KGLViewerTabView *_viewerTabBar;
    KGLLiveRoomViewerVll *_viewerVll;
    KGLLiveRoomShineRankVll *_shinkRankVll;
    double _scale;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) KGLLiveRoomShineRankVll *shinkRankVll; // @synthesize shinkRankVll=_shinkRankVll;
@property(retain, nonatomic) KGLLiveRoomViewerVll *viewerVll; // @synthesize viewerVll=_viewerVll;
@property(retain, nonatomic) KGLViewerTabView *viewerTabBar; // @synthesize viewerTabBar=_viewerTabBar;
@property(retain, nonatomic) UIView *mainViewerView; // @synthesize mainViewerView=_mainViewerView;
@property(retain, nonatomic) UIImageView *tabarShadow; // @synthesize tabarShadow=_tabarShadow;
@property(retain, nonatomic) KGLChatView *chatView; // @synthesize chatView=_chatView;
@property(retain, nonatomic) FXLiveRoomTabBar *tabbar; // @synthesize tabbar=_tabbar;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType updateViewerNumBlock; // @synthesize updateViewerNumBlock=_updateViewerNumBlock;
@property(retain, nonatomic) FXKGLiveShineValueView *shineValueView; // @synthesize shineValueView=_shineValueView;
@property(retain, nonatomic) KGLiveActivityWebViewVll *activityVll; // @synthesize activityVll=_activityVll;
@property(retain, nonatomic) KGLLiveActivityVM *h5activityModel; // @synthesize h5activityModel=_h5activityModel;
@property(nonatomic) long long concertId; // @synthesize concertId=_concertId;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)installShineRankVll;
- (void)installViewerVll;
- (void)installViewerTabBar;
- (void)addTopTabarShadow;
- (void)installMainViewerView;
- (void)installChatView;
- (void)installTopView;
- (void)fxLiveRoomTabBarSelected:(long long)arg1;
- (void)didTouchViewerTabIndex:(long long)arg1;
- (void)updateViewWithSelectIndex:(long long)arg1;
- (void)didReceiveMemoryWarn;
- (void)showGiftMsg:(id)arg1;
- (void)showPublicMsg:(id)arg1;
- (void)updateView;
- (void)destory;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


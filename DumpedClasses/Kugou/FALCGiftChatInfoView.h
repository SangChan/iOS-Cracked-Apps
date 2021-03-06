//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FALCGiftChatCellViewDataSource.h"
#import "FALCGiftChatCellViewDelegate.h"

@class FALCMessage, NSMutableArray, NSString, NSTimer;

@interface FALCGiftChatInfoView : UIView <FALCGiftChatCellViewDelegate, FALCGiftChatCellViewDataSource>
{
    _Bool _chatInfoViewIsHidding;
    _Bool _isInDealingTimerInvalueStatus;
    _Bool _isDealingChatViewArr;
    _Bool _isDealingHiddenCellView;
    _Bool _isDealingSpecialCellGiftAnimate;
    id <FALCGiftChatInfoViewDelegate> _delegate;
    id <FALCGiftChatInfoViewDataSource> _dataSource;
    long long _viewType;
    long long _chatInfoCellNum;
    unsigned long long _cellViewLineStyle;
    NSMutableArray *_chatCellViewArr;
    NSTimer *_timer;
    UIView *_bgView;
    NSMutableArray *_undoMsgArray;
    unsigned long long _undoMsgArrayLevel;
    double _cellsViewBottom;
    FALCMessage *_specialCellGiftMsg;
    double _selfHeight;
    double _giftChatCellViewHeight;
}

@property(nonatomic) double giftChatCellViewHeight; // @synthesize giftChatCellViewHeight=_giftChatCellViewHeight;
@property(nonatomic) double selfHeight; // @synthesize selfHeight=_selfHeight;
@property(retain, nonatomic) FALCMessage *specialCellGiftMsg; // @synthesize specialCellGiftMsg=_specialCellGiftMsg;
@property(nonatomic) _Bool isDealingSpecialCellGiftAnimate; // @synthesize isDealingSpecialCellGiftAnimate=_isDealingSpecialCellGiftAnimate;
@property(nonatomic) _Bool isDealingHiddenCellView; // @synthesize isDealingHiddenCellView=_isDealingHiddenCellView;
@property(nonatomic) _Bool isDealingChatViewArr; // @synthesize isDealingChatViewArr=_isDealingChatViewArr;
@property(nonatomic) double cellsViewBottom; // @synthesize cellsViewBottom=_cellsViewBottom;
@property(nonatomic) _Bool isInDealingTimerInvalueStatus; // @synthesize isInDealingTimerInvalueStatus=_isInDealingTimerInvalueStatus;
@property(nonatomic) unsigned long long undoMsgArrayLevel; // @synthesize undoMsgArrayLevel=_undoMsgArrayLevel;
@property(retain, nonatomic) NSMutableArray *undoMsgArray; // @synthesize undoMsgArray=_undoMsgArray;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *chatCellViewArr; // @synthesize chatCellViewArr=_chatCellViewArr;
@property(nonatomic) unsigned long long cellViewLineStyle; // @synthesize cellViewLineStyle=_cellViewLineStyle;
@property(nonatomic) long long chatInfoCellNum; // @synthesize chatInfoCellNum=_chatInfoCellNum;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) _Bool chatInfoViewIsHidding; // @synthesize chatInfoViewIsHidding=_chatInfoViewIsHidding;
@property(nonatomic) __weak id <FALCGiftChatInfoViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FALCGiftChatInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetViewStatus;
- (void)clearAllContent;
- (void)dealIsAllInAnimationWithMsg:(id)arg1;
- (void)setCellAnimationViewHidden:(_Bool)arg1;
- (void)hiddenChatView;
- (void)showChatView;
- (id)formatLiveRoomMsg:(id)arg1;
- (id)formatMsg:(id)arg1;
- (id)getGiftAnimationSuperView;
- (unsigned long long)getChatCellViewLineStyle;
- (_Bool)getGiftChatInfoCellsIsFull;
- (double)getGiftChatCellViewHeight;
- (void)chatInfoViewShouldBeginDealMsg;
- (void)chatInfoViewShouldStopDealMsgWithSpecialMsg:(id)arg1;
- (void)resetCellViewStatus:(id)arg1;
- (_Bool)getChatInfoViewIsHidding;
- (void)chatCellViewDidTapWithCell:(id)arg1 userId:(long long)arg2;
- (void)chatCellViewDidHiddenWithCell:(id)arg1;
- (void)renewCellViewsMissingLevel;
- (void)flyInWithCellView:(id)arg1 doBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getLargestMissingCellView;
- (id)getOneUnUseChatCellView;
- (id)getChatViewArrSubType:(unsigned long long)arg1;
- (id)getCellViewWithTop:(double)arg1 message:(id)arg2;
- (void)renewSameUserViewWithCellView:(id)arg1 msg:(id)arg2;
- (void)renewSameGiftGiftNumWithCellView:(id)arg1 msg:(id)arg2;
- (void)addMsgCellToBottomWithMsg:(id)arg1 toFlyCellView:(id)arg2 completeBlock:(CDUnknownBlockType)arg3 flyInCompleteBlock:(CDUnknownBlockType)arg4;
- (_Bool)canAddMsgCellToBottom;
- (_Bool)shouldBeginDoAddMsgCellToBottom;
- (void)dealSameUserSameGiftMsg:(id)arg1 toDealCellView:(id)arg2;
- (void)dealSameUserSendMsg:(id)arg1 toDealCellView:(id)arg2;
- (_Bool)canUpdateChatCellViews;
- (void)updateChatCellViews;
- (unsigned long long)getCurrentGiftUndoMsgArrayLevel;
- (double)getUpdateChatCellViewsTimerTimeWithUndoMsgArrayLevel:(unsigned long long)arg1;
- (void)dealUpdateChatCellViews;
- (void)delayInvalidateUpdateChatCellViewsTimer;
- (void)startUpCellViewsWithGiftUndoMsgArrayLevel:(unsigned long long)arg1;
- (void)dealGetGiftMsg:(id)arg1;
- (void)loadLiveRoomChatMsg:(id)arg1;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1 chatInfoCellHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


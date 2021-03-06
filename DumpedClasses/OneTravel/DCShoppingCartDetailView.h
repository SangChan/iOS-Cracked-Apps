//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCEmergeCustomBaseView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DCShoppingCartDetailViewModel, NSString, UITableView, UIView;

@interface DCShoppingCartDetailView : DCEmergeCustomBaseView <UITableViewDelegate, UITableViewDataSource>
{
    DCShoppingCartDetailViewModel *_detailViewModel;
    CDUnknownBlockType _detailVIMClickActionBlock;
    CDUnknownBlockType _detailVPhoneActionBlock;
    CDUnknownBlockType _detailVCellActionBlock;
    CDUnknownBlockType _detailVAvatarActionBlock;
    UITableView *_psgrsTableview;
    UIView *_placeHolderView;
}

@property(nonatomic) __weak UIView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(nonatomic) __weak UITableView *psgrsTableview; // @synthesize psgrsTableview=_psgrsTableview;
@property(copy, nonatomic) CDUnknownBlockType detailVAvatarActionBlock; // @synthesize detailVAvatarActionBlock=_detailVAvatarActionBlock;
@property(copy, nonatomic) CDUnknownBlockType detailVCellActionBlock; // @synthesize detailVCellActionBlock=_detailVCellActionBlock;
@property(copy, nonatomic) CDUnknownBlockType detailVPhoneActionBlock; // @synthesize detailVPhoneActionBlock=_detailVPhoneActionBlock;
@property(copy, nonatomic) CDUnknownBlockType detailVIMClickActionBlock; // @synthesize detailVIMClickActionBlock=_detailVIMClickActionBlock;
@property(retain, nonatomic) DCShoppingCartDetailViewModel *detailViewModel; // @synthesize detailViewModel=_detailViewModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


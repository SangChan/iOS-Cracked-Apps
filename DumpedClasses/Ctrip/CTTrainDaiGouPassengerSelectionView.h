//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

#import "CTTrainAdd12306PassengerCellDelegate.h"
#import "CTTrainPassengerSelectionCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTTableView, NSMutableArray, NSString, UIView;

@interface CTTrainDaiGouPassengerSelectionView : CTRootView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, CTTrainPassengerSelectionCellDelegate, CTTrainAdd12306PassengerCellDelegate>
{
    id <CTTrainDaiGouPassengerSelectionViewDelegate> _delegate;
    NSMutableArray *_originSelectedPassengerList;
    NSMutableArray *_arrayAllPassengers;
    CTTableView *_tableViewPassengers;
    UIView *_viewTableContentBackground;
    NSMutableArray *_currentSelectedPassengers;
    struct CGPoint _beginDraggingPoint;
    struct CGPoint _endDraggingPoint;
}

@property(retain, nonatomic) NSMutableArray *currentSelectedPassengers; // @synthesize currentSelectedPassengers=_currentSelectedPassengers;
@property(nonatomic) struct CGPoint endDraggingPoint; // @synthesize endDraggingPoint=_endDraggingPoint;
@property(nonatomic) struct CGPoint beginDraggingPoint; // @synthesize beginDraggingPoint=_beginDraggingPoint;
@property(retain, nonatomic) UIView *viewTableContentBackground; // @synthesize viewTableContentBackground=_viewTableContentBackground;
@property(retain, nonatomic) CTTableView *tableViewPassengers; // @synthesize tableViewPassengers=_tableViewPassengers;
@property(retain, nonatomic) NSMutableArray *arrayAllPassengers; // @synthesize arrayAllPassengers=_arrayAllPassengers;
@property(retain, nonatomic, setter=setOriginSelectedPassengerList:) NSMutableArray *originSelectedPassengerList; // @synthesize originSelectedPassengerList=_originSelectedPassengerList;
@property(nonatomic) __weak id <CTTrainDaiGouPassengerSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didPressAdd12306PassengerButtonInTrainAdd12306PassengerCell:(id)arg1;
- (void)didPressAddPassengerButtonInTrainAdd12306PassengerCell:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)passengerSelectionCell:(id)arg1 didPressEditButtonWithPerson:(id)arg2;
- (id)add12306PassengerCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)daigouPassengerSelectionCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)tableFooterView;
- (id)tableHeaderView;
- (id)sectionHeaderView;
- (void)onConfirmButton:(id)arg1;
- (void)onCancelButton:(id)arg1;
- (void)onBackground:(id)arg1;
- (struct CGPoint)tableViewContentOrigin;
- (void)changeTableViewContentBackgroundFrame;
- (void)dismissView;
- (void)reloadView;
- (void)removePassenger:(id)arg1;
- (void)sort;
- (void)sortAllPassengers;
- (id)currentSelectedPassengerList;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initViewWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, QQMaskView, UITableView, UIWindow;

@interface QQAccountsMenuView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    _Bool _isShow;
    NSMutableArray *_sideAccountsSource;
    NSMutableArray *_accountsSource;
    UITableView *_tableView;
    UIView *_layerView;
    NSMutableArray *_accountsData;
    QQMaskView *_maskView;
    UIWindow *_window;
    float _height;
}

@property(retain, nonatomic) NSMutableArray *accountsData; // @synthesize accountsData=_accountsData;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *accountsSource; // @synthesize accountsSource=_accountsSource;
@property(retain, nonatomic) NSMutableArray *sideAccountsSource; // @synthesize sideAccountsSource=_sideAccountsSource;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onDataChange:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addNewAccount;
- (void)swichToAccount:(long long)arg1 withType:(int)arg2;
- (void)getAccountsMsg;
- (_Bool)isShow;
- (void)dismiss;
- (void)show;
- (void)slideIn;
- (void)slideOut;
- (double)XScale;
- (void)clickView:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)loadData;
- (id)headerViewForTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


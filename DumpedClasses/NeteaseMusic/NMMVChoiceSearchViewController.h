//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MCSearchBarDelegate.h"
#import "NMHotSearchCellDelegate.h"
#import "NMSearchItemCellDelegate.h"
#import "NMSearchResultViewControllerDelegate.h"
#import "NMSearchSuggestControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MCSearchBar, NMHotSearchHolder, NMSearchResultViewController, NMSearchSuggestController, NSString, UITableView;

@interface NMMVChoiceSearchViewController : UIViewController <NMSearchResultViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, NMSearchItemCellDelegate, MCSearchBarDelegate, NMSearchSuggestControllerDelegate, NMHotSearchCellDelegate>
{
    NMHotSearchHolder *_hotHolder;
    UITableView *_tableView;
    MCSearchBar *_searchBar;
    NMSearchResultViewController *_resultViewController;
    NMSearchSuggestController *_suggestController;
    _Bool _isSuggest;
    long long _currentIndex;
}

- (void).cxx_destruct;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)hotSearchCell:(id)arg1 itemClicked:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchItemCell:(id)arg1 deleteClicked:(id)arg2;
- (void)pushViewController:(id)arg1;
- (void)searchResultViewController:(id)arg1 errorCorrectClicked:(id)arg2 correctType:(unsigned long long)arg3 queryCorrect:(_Bool)arg4;
- (void)searchResultViewController:(id)arg1 pushViewController:(id)arg2;
- (void)searchResultViewControllerShouldHideKeyboard:(id)arg1;
- (void)searchSuggestController:(id)arg1 didClickKeyword:(id)arg2 type:(long long)arg3;
- (void)searchSuggestController:(id)arg1 didClickOriginal:(id)arg2 type:(long long)arg3;
- (void)searchSuggestControllerShouldHideKeyboard:(id)arg1;
- (long long)searchSuggestControllerSearchType:(id)arg1;
- (void)hideKeyboard;
- (void)mcsearchBarTextDidChange:(id)arg1;
- (_Bool)mcsearchBar:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)mcsearchBarShouldReturn:(id)arg1;
- (id)keyword;
- (void)hotSearcLoadDidFinish:(id)arg1;
- (void)showSearchResult:(id)arg1;
- (void)search:(id)arg1 setSearchBar:(_Bool)arg2 immediately:(_Bool)arg3 queryCorrect:(_Bool)arg4;
- (void)search:(id)arg1 setSearchBar:(_Bool)arg2 immediately:(_Bool)arg3;
- (void)reset;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSearchBar:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


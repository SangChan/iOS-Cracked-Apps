//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSearchBar, NSString, UITextField;

@protocol APSearchBarDelegate <NSObject>

@optional
- (_Bool)textFieldShouldClear:(UITextField *)arg1;
- (void)searchBarResultsListButtonClicked:(APSearchBar *)arg1;
- (void)searchBarCancelButtonClicked:(APSearchBar *)arg1;
- (void)searchBarBookmarkButtonClicked:(APSearchBar *)arg1;
- (void)searchBarSearchButtonClicked:(APSearchBar *)arg1;
- (_Bool)searchBar:(APSearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(APSearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarTextDidEndEditing:(APSearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(APSearchBar *)arg1;
- (_Bool)textFieldShouldEndEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldBeginEditing:(UITextField *)arg1;
@end

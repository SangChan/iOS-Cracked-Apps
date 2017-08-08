//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBQPCustomRenderActionHandler.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, UITableView;

@interface FBQPMegaphonePusheenActionHandler : FBQPCustomRenderActionHandler <UITableViewDataSource, UITableViewDelegate>
{
    UIButton *_primaryButton1;
    UIButton *_primaryButton2;
    UILabel *_primaryButtonDemoLabel;
    UIButton *_secondaryButton;
    UILabel *_secondaryButtonDemoLabel;
    long long _secondaryButtonClickCounter;
    UIButton *_dismissButton;
    UILabel *_textFieldDemoLabel;
    NSArray *_checkBoxesOptions;
    UITableView *_checkBoxes;
    UILabel *_checkBoxesDemoLabel;
    NSArray *_radioBoxesOptions;
    UITableView *_radioBoxes;
    UILabel *_radioBoxesDemoLabel;
}

- (void).cxx_destruct;
- (void)_updateRadioBoxDemoLabelWithIndex:(long long)arg1;
- (void)_updateCheckBoxDemoLabel;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_additionalActionForSecondaryButton:(id)arg1;
- (void)_additionalActionForPrimaryButton:(id)arg1;
- (void)_textEditing:(id)arg1;
- (void)dealloc;
- (void)setUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

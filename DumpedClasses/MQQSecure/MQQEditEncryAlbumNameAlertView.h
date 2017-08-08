//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQAlertView.h"

#import "UITextFieldDelegate-Protocol.h"

@class MQQAlertInputTextField, MQQENCAlbum, NSString;
@protocol MQQEditEncryAlbumNameAlertViewDelegate;

@interface MQQEditEncryAlbumNameAlertView : MQQAlertView <UITextFieldDelegate>
{
    id <MQQEditEncryAlbumNameAlertViewDelegate> __delegate;
    MQQAlertInputTextField *_albumNameTextField;
    MQQENCAlbum *_originalAlbumModel;
}

@property(retain, nonatomic) MQQENCAlbum *originalAlbumModel; // @synthesize originalAlbumModel=_originalAlbumModel;
@property(retain, nonatomic) MQQAlertInputTextField *albumNameTextField; // @synthesize albumNameTextField=_albumNameTextField;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (long long)getStringToInt:(id)arg1;
- (void)refreshOKButton:(_Bool)arg1;
- (void)buttonClicked:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 originalAlbumModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

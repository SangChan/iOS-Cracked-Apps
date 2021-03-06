//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QUIAlertView.h"

#import "NIAttributedLabelDelegate.h"

@class NSArray, NSString;

@interface QUIAlertPlusView : QUIAlertView <NIAttributedLabelDelegate>
{
    id <QUIAlertPlusViewDelegate> _plusDelegate;
    id _object;
    NSString *_backupURL;
    NSArray *_msgKeyWords;
}

@property(retain, nonatomic) NSArray *msgKeyWords; // @synthesize msgKeyWords=_msgKeyWords;
@property(copy, nonatomic) NSString *backupURL; // @synthesize backupURL=_backupURL;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) __weak id <QUIAlertPlusViewDelegate> plusDelegate; // @synthesize plusDelegate=_plusDelegate;
- (void).cxx_destruct;
- (_Bool)attributedLabel:(id)arg1 shouldPresentActionSheet:(id)arg2 withTextCheckingResult:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (id)getContentViewWithTitle:(id)arg1 message:(id)arg2;
- (void)setMessage:(id)arg1;
- (void)show;
- (id)initWithTitle:(id)arg1 message:(id)arg2 messageKeyWords:(id)arg3 delegate:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitleArray:(id)arg6;
- (id)initWithTitle:(id)arg1 message:(id)arg2 messageKeyWords:(id)arg3 delegate:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQMessageModel;

@interface HCPttMsgSender : NSObject
{
    id <HCPttMsgOperationDelegate> _delegate;
    long long _localMsgId;
    long long _localMsgSeq;
    long long _serviceSeq;
    QQMessageModel *_messageModel;
}

@property(retain, nonatomic) QQMessageModel *messageModel; // @synthesize messageModel=_messageModel;
@property(nonatomic) long long serviceSeq; // @synthesize serviceSeq=_serviceSeq;
@property(nonatomic) long long localMsgSeq; // @synthesize localMsgSeq=_localMsgSeq;
@property(nonatomic) long long localMsgId; // @synthesize localMsgId=_localMsgId;
@property(nonatomic) id <HCPttMsgOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onPttUploadError:(id)arg1;
- (void)onPttUploadFinish:(id)arg1;
- (void)onPttUploadStart:(id)arg1;
- (void)sendMessage:(id)arg1 isResend:(_Bool)arg2;
- (void)removeObserver;
- (void)addObserver;
- (void)dealloc;
- (id)init;

@end


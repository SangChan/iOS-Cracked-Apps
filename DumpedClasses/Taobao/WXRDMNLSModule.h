//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NlsRecognizerDelegate.h"
#import "WXModuleProtocol.h"

@class NSString, NlsRecognizer, WXSDKInstance;

@interface WXRDMNLSModule : NSObject <NlsRecognizerDelegate, WXModuleProtocol>
{
    _Bool _needsActive;
    WXSDKInstance *weexInstance;
    NlsRecognizer *_recognizer;
    NSString *_originCategory;
    unsigned long long _originOption;
    CDUnknownBlockType _resultCallback;
    CDUnknownBlockType _stageCallback;
}

+ (id)wx_export_method_37;
+ (id)wx_export_method_36;
+ (id)wx_export_method_35;
+ (id)wx_export_method_34;
+ (id)wx_export_method_33;
@property(copy, nonatomic) CDUnknownBlockType stageCallback; // @synthesize stageCallback=_stageCallback;
@property(copy, nonatomic) CDUnknownBlockType resultCallback; // @synthesize resultCallback=_resultCallback;
@property(nonatomic) _Bool needsActive; // @synthesize needsActive=_needsActive;
@property(nonatomic) unsigned long long originOption; // @synthesize originOption=_originOption;
@property(copy, nonatomic) NSString *originCategory; // @synthesize originCategory=_originCategory;
@property(retain, nonatomic) NlsRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)recognizerDidStopRecording:(id)arg1;
- (void)recognizerDidStartRecording:(id)arg1;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (void)asrStatusChanged:(id)arg1;
- (void)nativeTalk:(id)arg1 resultCallback:(CDUnknownBlockType)arg2 stageCallback:(CDUnknownBlockType)arg3;
- (void)cancel;
- (void)stop;
- (void)talkWithParams:(id)arg1 resultCallback:(CDUnknownBlockType)arg2 stageCallback:(CDUnknownBlockType)arg3;
- (void)talk:(CDUnknownBlockType)arg1 stageCallback:(CDUnknownBlockType)arg2;
- (void)requestRecordPermission:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)registerNLSService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLock.h"

@class NSMutableDictionary, _priv_NBSSafeMutableArray;

@interface _priv_NBSUILogCenter : NSLock
{
    int Ftoken;
    NSMutableDictionary *Fbuf;
    NSMutableDictionary *uiDatas;
    _priv_NBSSafeMutableArray *traceDatas;
}

+ (id)sharedObject;
@property(readonly) _priv_NBSSafeMutableArray *traceDatas; // @synthesize traceDatas;
@property(readonly) NSMutableDictionary *uiDatas; // @synthesize uiDatas;
- (void).cxx_destruct;
- (void)prepare;
- (_Bool)isNeedToUploadUITraceData;
- (id)getPostData_traceV2;
- (id)getPostData_trace;
- (void)log_traceData:(id)arg1;
- (_Bool)isNeedToUploadUIData;
- (void)UI_onSuccessWithToken:(int)arg1;
- (id)getPostData_UI:(int *)arg1;
- (void)UI_mergeBuf;
- (void)log_UIData:(id)arg1 WithViewControllerName:(id)arg2 andTraceData:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)onNotification_post:(id)arg1;
- (id)documentsPath;
- (void)saveData:(id)arg1 fileName:(id)arg2;
- (void)postUIDataToServer;
- (void)postUITraceDataToServer;

@end

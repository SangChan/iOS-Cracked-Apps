//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQPhotoFilterDelegate-Protocol.h"

@class MQQCBOCRDataUploader, MQQHttpRequest, MQQOCRRecognizerData, MQQPhotoFilter, NSString, YtOCRManager;

@interface MQQOCRRecognizerManager : NSObject <MQQPhotoFilterDelegate>
{
    YtOCRManager *_ytOCRManager;
    MQQHttpRequest *_ocrDataRequest;
    MQQOCRRecognizerData *_recognizerData;
    MQQPhotoFilter *_photoFilter;
    MQQCBOCRDataUploader *_dataUploader;
    CDUnknownBlockType _recognizeCompletion;
}

+ (_Bool)handleData:(id)arg1 withKey:(id)arg2;
+ (_Bool)showScreenShotOCR;
+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType recognizeCompletion; // @synthesize recognizeCompletion=_recognizeCompletion;
@property(retain, nonatomic) MQQCBOCRDataUploader *dataUploader; // @synthesize dataUploader=_dataUploader;
@property(retain, nonatomic) MQQPhotoFilter *photoFilter; // @synthesize photoFilter=_photoFilter;
@property(retain, nonatomic) MQQOCRRecognizerData *recognizerData; // @synthesize recognizerData=_recognizerData;
@property(retain, nonatomic) MQQHttpRequest *ocrDataRequest; // @synthesize ocrDataRequest=_ocrDataRequest;
@property(retain, nonatomic) YtOCRManager *ytOCRManager; // @synthesize ytOCRManager=_ytOCRManager;
- (id)getOCRGUID;
- (void)uploadOCRCrashData;
- (void)filter:(id)arg1 didCompleteWithRemainingData:(id)arg2 error:(id)arg3;
- (void)filter:(id)arg1 didFinishWithOptions:(unsigned long long)arg2 result:(id)arg3;
- (void)filter:(id)arg1 didFilterWithOptions:(unsigned long long)arg2 progress:(double)arg3 count:(unsigned long long)arg4 result:(id)arg5 addedResult:(id)arg6;
- (void)didFinishDownload:(id)arg1;
- (void)didFailDownload:(id)arg1;
- (_Bool)unZipServerRecognizeData:(id)arg1;
- (_Bool)unZipLocalRecognizeData;
- (void)downloadRecognizeData;
- (id)recognizedPhoneNumbers;
- (void)clearRecoginzeCallback;
- (void)disableShowScreenShotOCR;
- (void)didShowScreenShotOCR;
- (void)recognizePhoneNumsFromNewestScreenShot:(CDUnknownBlockType)arg1;
- (id)recognizeImage:(id)arg1;
- (void)updateOCRRecognizerData;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


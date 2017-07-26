//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQRichPTVGLProgramCommonDelegate.h"
#import "QQRichPTVGLRenderDelegate.h"

@class AnalyzingFaceManager, FaceDetectorFeature, MCTmplItem, NSArray, NSMutableArray, NSObject<QQRichPTVDynamicDecorationMgrDelegate>, NSString, QQRichPTVFaceDetector, QQRichPTVGLRender;

@interface QQRichPTVDynamicDecorationMgr : NSObject <QQRichPTVGLRenderDelegate, QQRichPTVGLProgramCommonDelegate>
{
    QQRichPTVGLRender *_currentRender;
    AnalyzingFaceManager *_faceAnalyzer;
    NSMutableArray *_faceAnalyzers;
    QQRichPTVFaceDetector *_ptvFaceDetector;
    _Bool _shouldDraw;
    _Bool _didRequest;
    _Bool _isfaceDetectOnly;
    float _brightnessScalar;
    float _exposureScalar;
    float _renderScalar;
    MCTmplItem *_currentTempleItem;
    NSObject<QQRichPTVDynamicDecorationMgrDelegate> *_delegate;
    long long _smoothLevel;
    MCTmplItem *_currentFilterItem;
    FaceDetectorFeature *_autoFeature;
    FaceDetectorFeature *_feature;
    FaceDetectorFeature *_firstFeature;
    NSArray *_features;
    struct CGSize _glResolution;
    struct CGSize _artFilterProcessResolution;
    struct CGRect _cropRect;
    union _GLKMatrix4 _rotateMatrix;
}

+ (int)getCropSize;
@property(retain) NSArray *features; // @synthesize features=_features;
@property(retain) FaceDetectorFeature *firstFeature; // @synthesize firstFeature=_firstFeature;
@property(retain) FaceDetectorFeature *feature; // @synthesize feature=_feature;
@property(retain) FaceDetectorFeature *autoFeature; // @synthesize autoFeature=_autoFeature;
@property(nonatomic) _Bool isfaceDetectOnly; // @synthesize isfaceDetectOnly=_isfaceDetectOnly;
@property(nonatomic) struct CGSize artFilterProcessResolution; // @synthesize artFilterProcessResolution=_artFilterProcessResolution;
@property(retain, nonatomic) MCTmplItem *currentFilterItem; // @synthesize currentFilterItem=_currentFilterItem;
@property(nonatomic) union _GLKMatrix4 rotateMatrix; // @synthesize rotateMatrix=_rotateMatrix;
@property(nonatomic) struct CGSize glResolution; // @synthesize glResolution=_glResolution;
@property(nonatomic) long long smoothLevel; // @synthesize smoothLevel=_smoothLevel;
@property(nonatomic) float renderScalar; // @synthesize renderScalar=_renderScalar;
@property(nonatomic) float exposureScalar; // @synthesize exposureScalar=_exposureScalar;
@property(nonatomic) float brightnessScalar; // @synthesize brightnessScalar=_brightnessScalar;
@property(nonatomic) NSObject<QQRichPTVDynamicDecorationMgrDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) MCTmplItem *currentTempleItem; // @synthesize currentTempleItem=_currentTempleItem;
- (void)onResignActive:(id)arg1;
- (void)onBecomeActive:(id)arg1;
- (void)FaceDetectStatChanged:(int)arg1;
- (void)FaceDetectStatHideTips:(id)arg1;
- (void)FaceDetectStatShowTips:(id)arg1 text:(id)arg2 withDuration:(double)arg3;
- (struct __CVBuffer *)QQRichPTVGLRenderGetResultTarget;
- (void)QQRichPTVGLRenderFinish:(id)arg1;
- (id)faceInfoWithFeature:(id)arg1;
- (void)fireFaceInfo;
- (void)fireFaceNumChange:(int)arg1;
- (void)resetFaceDetect;
- (void)faceDetect:(id)arg1;
- (void)handleFaceFeature:(id)arg1;
- (void)detectPreviewFace2:(id)arg1;
- (void)renderPixelSampleBufferWithoutDynamicDecorationsBGRA:(struct __CVBuffer *)arg1;
- (void)renderPixelSampleBufferWithDynamicDecorationsBGRA:(struct __CVBuffer *)arg1;
- (void)renderPixelSampleBufferWithBGRA:(struct __CVBuffer *)arg1;
- (void)updateFaceFeatureToProgram;
- (void)renderPixelSampleBufferWithoutDynamicDecorations:(struct __CVBuffer *)arg1;
- (_Bool)doRender;
- (void)renderPixelSampleBufferWithDynamicDecorations:(struct __CVBuffer *)arg1;
- (void)renderPixelSampleBuffer:(struct __CVBuffer *)arg1;
- (void)updatePortraitSmoothRealEnable:(id)arg1;
- (_Bool)hasFace;
- (id)currentRender;
- (void)deleteCurrentRender;
- (id)renderWithFrame:(struct CGRect)arg1 glResolution:(struct CGSize)arg2 andShaderType:(int)arg3;
- (_Bool)loadFeatureExtractSdk:(id)arg1;
- (_Bool)loadCVDetectorModel:(id)arg1;
- (_Bool)loadDataModel:(id)arg1;
- (void)removeNotification;
- (void)registerNotification;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol RCTSGRendererDelegate;

@interface RCTSGRenderer : NSObject
{
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    struct RCTTextureInfo *_backBufferTextureInfo;
    struct ShaderBindings _defaultShader;
    struct RCTSGDynamicList _shaderList;
    struct RCTSGDynamicList _bindingBuffer;
    struct RCTSGDynamicList _textureInfo;
    NSMutableDictionary *_renderTargets;
    _Bool _upsideDown;
    double _time;
    id <RCTSGRendererDelegate> _delegate;
}

@property(nonatomic) __weak id <RCTSGRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) _Bool upsideDown; // @synthesize upsideDown=_upsideDown;
- (void).cxx_destruct;
- (void)cleanup;
- (const struct RCTTextureInfo *)textureInfoForSource:(id)arg1 withImageLoader:(id)arg2;
- (struct ShaderBindings *)findShader:(struct RCTSGViewRenderItem *)arg1;
- (void)drawScene:(struct RCTSGViewCameraItem *)arg1 renderItemsList:(struct RCTSGDynamicList *)arg2 bindingBuffer:(struct RCTSGDynamicList *)arg3;
- (void)drawView:(id)arg1 withWidth:(float)arg2 andHeight:(float)arg3 toFramebuffer:(unsigned int)arg4;
- (void)_tearDownRenderContext:(struct RCTSGRenderContext *)arg1;
- (void)_repareRenderContext:(struct RCTSGRenderContext *)arg1 withWidth:(float)arg2 andHeight:(float)arg3 ofView:(id)arg4;
- (void)drawRenderContext:(struct RCTSGRenderContext *)arg1 toFramebuffer:(unsigned int)arg2;
- (id)_createFramebufferWithWidth:(int)arg1 andHeight:(int)arg2;
- (id)init;
- (void)setupVBOs;
- (void)compileShaders:(struct ShaderBindings *)arg1 vertexProgram:(const char *)arg2 fragmentProgram:(const char *)arg3;
- (void)errorReport;
- (unsigned int)compileShader:(const char *)arg1 withType:(unsigned int)arg2;

@end


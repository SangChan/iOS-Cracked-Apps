//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMGeneralNotice : NSObject
{
    _Bool _openUrlIsLegal;
    NSString *_actionDesc;
    NSString *_content;
    NSString *_nativeUrl;
    NSString *_webViewUrl;
}

@property(nonatomic) _Bool openUrlIsLegal; // @synthesize openUrlIsLegal=_openUrlIsLegal;
@property(retain, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
@property(retain, nonatomic) NSString *nativeUrl; // @synthesize nativeUrl=_nativeUrl;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *actionDesc; // @synthesize actionDesc=_actionDesc;
- (void).cxx_destruct;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


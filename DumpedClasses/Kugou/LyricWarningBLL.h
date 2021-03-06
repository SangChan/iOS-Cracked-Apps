//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LyricWarningBLL : NSObject
{
    NSString *mp3_hash;
    NSString *lyricID;
    long long type;
    NSString *inputContent;
    _Bool _hashFlag;
    _Bool _typeFlag;
    _Bool _inputContentFlag;
    _Bool _lyricIdFlag;
    NSString *lyricFileName;
    NSString *lyricHash;
}

+ (id)shareInstance;
@property(copy, nonatomic) NSString *lyricHash; // @synthesize lyricHash;
@property(copy, nonatomic) NSString *lyricFileName; // @synthesize lyricFileName;
@property(retain, nonatomic) NSString *lyricID; // @synthesize lyricID;
@property(retain, nonatomic) NSString *inputContent; // @synthesize inputContent;
@property(nonatomic) long long type; // @synthesize type;
@property(retain, nonatomic) NSString *mp3_hash; // @synthesize mp3_hash;
- (void).cxx_destruct;
- (void)JudgeWithInputFieldText:(id)arg1 withLyricWarningType:(long long)arg2 withFileName:(id)arg3 withHash:(id)arg4 withIMEI:(id)arg5 withTimeLength:(int)arg6 withSuccessBlock:(CDUnknownBlockType)arg7 withFailBlock:(CDUnknownBlockType)arg8;
- (void)cleanData;

@end


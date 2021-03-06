//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATaskInfoBase.h"

@class NSMutableArray, NSString;

@interface FATaskInfoDownload : FATaskInfoBase
{
    unsigned long long _fileSize;
    unsigned long long _completeSize;
    unsigned long long _svrFileSize;
    unsigned long long _fromUin;
    unsigned long long _discussUin;
    NSString *_downloadUrl;
    NSString *_fullFilePath;
    NSMutableArray *_arDownloadUrl;
    int _errCode;
    int _thumbnailWith;
    int _thumbnailHeight;
    _Bool _isThumbnail;
    _Bool _isThumbnailisScaled;
    _Bool _bOnlyUrl;
    int _fThumbSize;
    NSMutableArray *_httpDownloadUrls;
    NSString *_httpDownloadUrl;
}

@property(nonatomic) int fThumbSize; // @synthesize fThumbSize=_fThumbSize;
@property(nonatomic) _Bool bOnlyUrl; // @synthesize bOnlyUrl=_bOnlyUrl;
@property(copy, nonatomic) NSString *httpDownloadUrl; // @synthesize httpDownloadUrl=_httpDownloadUrl;
@property(retain, nonatomic) NSMutableArray *httpDownloadUrls; // @synthesize httpDownloadUrls=_httpDownloadUrls;
- (id)initWithFAModel:(id)arg1 downType:(int)arg2 thumbnailSize:(int)arg3;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *arDownloadUrl; // @dynamic arDownloadUrl;
@property(nonatomic) unsigned long long completeSize; // @dynamic completeSize;
@property(nonatomic) unsigned long long discussUin; // @dynamic discussUin;
@property(copy, nonatomic) NSString *downloadUrl; // @dynamic downloadUrl;
@property(nonatomic) int errCode; // @dynamic errCode;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(nonatomic) unsigned long long fromUin; // @dynamic fromUin;
@property(copy, nonatomic) NSString *fullFilePath; // @dynamic fullFilePath;
@property(nonatomic) _Bool isThumbnail; // @dynamic isThumbnail;
@property(nonatomic) _Bool isThumbnailisScaled; // @dynamic isThumbnailisScaled;
@property(nonatomic) unsigned long long svrFileSize; // @dynamic svrFileSize;
@property(nonatomic) int thumbnailHeight; // @dynamic thumbnailHeight;
@property(nonatomic) int thumbnailWith; // @dynamic thumbnailWith;

@end


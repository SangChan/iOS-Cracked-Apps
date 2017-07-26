//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQDownloadErrorUtils : NSObject
{
}

+ (id)generateRichMediaPBDownloadDataError:(id)arg1;
+ (id)generatePttDownloadDataError:(id)arg1 md5:(id)arg2 responseData:(id)arg3;
+ (id)generateSVideoDecryptError:(id)arg1;
+ (id)generateSavePathNilError;
+ (id)generateNetworkError:(id)arg1;
+ (id)generateFileIOError:(id)arg1;
+ (id)generateConnectionError:(id)arg1 connectError:(id)arg2;
+ (id)generateDownloadDataError:(id)arg1 downloadSize:(unsigned long long)arg2 fileSize:(int)arg3 responseData:(id)arg4;
+ (id)generateInvalidRedirectError:(id)arg1 fileSize:(int)arg2 responseData:(id)arg3;
+ (id)generateDataLengthError:(id)arg1 fileSize:(int)arg2 responseData:(id)arg3;
+ (id)generateRangeNotEqualError:(id)arg1 statusCode:(int)arg2;
+ (id)generateHttpStatusError:(id)arg1 headers:(id)arg2 httpStatusCode:(int)arg3;
+ (id)generateContentLen0Error:(id)arg1 headers:(id)arg2 httpStatusCode:(int)arg3;
+ (id)generateAppendDataError:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface QQCampusCirclePublishModel : NSObject
{
    _Bool _isAnonymity;
    NSString *_publisherUin;
    long long _retryCount;
    NSString *_schoolId;
    NSString *_topicId;
    NSString *_content;
    struct NSArray *_images;
}

@property(nonatomic) _Bool isAnonymity; // @synthesize isAnonymity=_isAnonymity;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *schoolId; // @synthesize schoolId=_schoolId;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *publisherUin; // @synthesize publisherUin=_publisherUin;
- (void).cxx_destruct;

@end


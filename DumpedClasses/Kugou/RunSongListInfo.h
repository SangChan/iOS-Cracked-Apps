//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface RunSongListInfo : NSObject
{
    NSString *_kCode;
    NSString *_date;
    NSString *_name;
    NSString *_nickname;
    NSString *_pic;
    NSString *_uid;
    NSArray *_lists;
}

@property(copy, nonatomic) NSArray *lists; // @synthesize lists=_lists;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *kCode; // @synthesize kCode=_kCode;
- (void).cxx_destruct;

@end


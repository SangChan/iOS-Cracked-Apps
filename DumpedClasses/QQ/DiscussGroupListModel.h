//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString;

@interface DiscussGroupListModel : NSObject
{
    int _num;
    int _flag;
    NSString *_name;
    long long _groupUin;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) long long groupUin; // @synthesize groupUin=_groupUin;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) int num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

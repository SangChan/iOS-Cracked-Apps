//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIImage;

@interface KQSideBarEntity : NSObject
{
    NSString *_groupId;
    NSString *_groupName;
    NSString *_groupImageUrl;
    UIImage *_groupImage;
    NSString *_groupLevel;
    long long _groupActive;
    long long _groupLevelLimit;
    long long _groupGrade;
    long long _groupExperience;
    long long _groupExperienceLimit;
    long long _groupMemberCount;
    long long _groupSongCount;
    NSString *_memberGroupNickName;
    long long _memberAlive;
    NSArray *_memberArray;
    long long _capacity;
    long long _pic_allow;
    long long _words_limit;
}

@property(nonatomic) long long words_limit; // @synthesize words_limit=_words_limit;
@property(nonatomic) long long pic_allow; // @synthesize pic_allow=_pic_allow;
@property(nonatomic) long long capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSArray *memberArray; // @synthesize memberArray=_memberArray;
@property(nonatomic) long long memberAlive; // @synthesize memberAlive=_memberAlive;
@property(copy, nonatomic) NSString *memberGroupNickName; // @synthesize memberGroupNickName=_memberGroupNickName;
@property(nonatomic) long long groupSongCount; // @synthesize groupSongCount=_groupSongCount;
@property(nonatomic) long long groupMemberCount; // @synthesize groupMemberCount=_groupMemberCount;
@property(nonatomic) long long groupExperienceLimit; // @synthesize groupExperienceLimit=_groupExperienceLimit;
@property(nonatomic) long long groupExperience; // @synthesize groupExperience=_groupExperience;
@property(nonatomic) long long groupGrade; // @synthesize groupGrade=_groupGrade;
@property(nonatomic) long long groupLevelLimit; // @synthesize groupLevelLimit=_groupLevelLimit;
@property(nonatomic) long long groupActive; // @synthesize groupActive=_groupActive;
@property(copy, nonatomic) NSString *groupLevel; // @synthesize groupLevel=_groupLevel;
@property(copy, nonatomic) UIImage *groupImage; // @synthesize groupImage=_groupImage;
@property(copy, nonatomic) NSString *groupImageUrl; // @synthesize groupImageUrl=_groupImageUrl;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface KGLiveVoteQuestionModel : FXBaseJSONModel
{
    long long _questionId;
    NSString *_optionName;
    long long _pNum;
    long long _subjectId;
    long long _tickNum;
}

+ (id)keyMapper;
@property(nonatomic) long long tickNum; // @synthesize tickNum=_tickNum;
@property(nonatomic) long long subjectId; // @synthesize subjectId=_subjectId;
@property(nonatomic) long long pNum; // @synthesize pNum=_pNum;
@property(retain, nonatomic) NSString *optionName; // @synthesize optionName=_optionName;
@property(nonatomic) long long questionId; // @synthesize questionId=_questionId;
- (void).cxx_destruct;

@end

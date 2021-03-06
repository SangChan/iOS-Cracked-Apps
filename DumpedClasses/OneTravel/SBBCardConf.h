//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SBBCardConf : NSObject
{
    _Bool _enableHightlightUnderline;
    _Bool _enableHandle;
    NSString *_cardID;
    NSString *_actID;
    long long _cardPosition;
    unsigned long long _pageMode;
    NSArray *_actionNames;
    id _shareModel;
}

@property(retain, nonatomic) id shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) NSArray *actionNames; // @synthesize actionNames=_actionNames;
@property(nonatomic, getter=isEnableHandle) _Bool enableHandle; // @synthesize enableHandle=_enableHandle;
@property(nonatomic) _Bool enableHightlightUnderline; // @synthesize enableHightlightUnderline=_enableHightlightUnderline;
@property(nonatomic) unsigned long long pageMode; // @synthesize pageMode=_pageMode;
@property(nonatomic) long long cardPosition; // @synthesize cardPosition=_cardPosition;
@property(retain, nonatomic) NSString *actID; // @synthesize actID=_actID;
@property(retain, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
- (void).cxx_destruct;

@end


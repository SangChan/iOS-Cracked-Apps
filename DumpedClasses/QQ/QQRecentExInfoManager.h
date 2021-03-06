//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQLockDictionary;

@interface QQRecentExInfoManager : NSObject
{
    QQLockDictionary *_exInfoDic;
    _Bool _isSwitchAccount;
}

+ (id)shareInstance;
- (void)onAccountLogout:(id)arg1;
- (void)saveExInfoToFileOnAccountLogout;
- (void)saveExInfoToFile;
- (id)loadExInfoFile;
- (void)asyncSave;
- (void)generateDic;
- (void)asyncGenerate;
- (void)removeOneModelExInfo:(id)arg1 modelKey:(id)arg2;
- (void)removeAllExInfo;
- (id)addExInfoToDic:(id)arg1;
- (id)findExInfoInDic:(id)arg1;
- (id)init;

@end


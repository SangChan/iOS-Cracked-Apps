//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTProtocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@protocol MTUserProtocol <MTProtocol>
- (long long)kugouId;
- (_Bool)isFXLogined;
- (void)getUserBasisInfoWithUserID:(NSString *)arg1 AndToken:(NSString *)arg2 successBlock:(void (^)(NSString *))arg3 errorBlock:(void (^)(NSError *))arg4;
- (void)stopUpdateFollowOnLineNumTimer;
- (void)startUpdateFollowOnLineNumTimer;
- (void)setMobileLiveStarStatus:(NSDictionary *)arg1;
- (void)getAuthenPlayStatusSuccess:(void (^)(id))arg1 Error:(void (^)(NSError *))arg2;
- (void)cancelBlackListWithBlackId:(long long)arg1;
- (void)addBlackListWithBlackId:(long long)arg1 succeed:(void (^)(void))arg2 fail:(void (^)(NSError *))arg3;
- (_Bool)checkIsBlackListWithId:(long long)arg1;
- (long long)getTotalMobileLiveTimeNum;
- (void)saveWithFXLoginInfo;
- (void)setUserCoin:(long long)arg1;
- (void)saveWatchRoomId:(long long)arg1;
- (NSString *)weiboUserID;
- (_Bool)deleteLocalRecordAiYanWithKey:(NSString *)arg1 andFilePath:(NSString *)arg2;
- (NSArray *)getAllLocalRecordAiYan;
- (long long)partnerid;
- (void)getLocalViewingRecord:(void (^)(NSArray *))arg1;
- (void)getRelationWithUser:(int)arg1 success:(void (^)(id))arg2 fail:(void (^)(NSError *))arg3;
- (void)onlyGetLoginUserInfo:(void (^)(id))arg1 failHandler:(void (^)(NSError *))arg2;
- (_Bool)systemMsgHasUpdate;
- (_Bool)needSignin;
- (void)setCloakingWithStatus:(unsigned long long)arg1 succeed:(void (^)(void))arg2 fail:(void (^)(NSError *))arg3;
- (void)logout;
- (NSString *)weiboAccessToken;
- (NSString *)token;
- (long long)vip;
- (_Bool)isManager;
- (void)getLoginUserInfo:(void (^)(id))arg1 failHandler:(void (^)(NSError *))arg2;
- (void)getUser:(void (^)(id, NSError *))arg1;
- (id)getUser;
- (NSDictionary *)liveRoomBottomInfo;
- (void)setLiveRoomBottomInfo:(NSDictionary *)arg1;
- (void)setDicmShowWhichGuidance:(NSMutableDictionary *)arg1;
- (void)setIsShowGameGuidance:(_Bool)arg1;
- (NSMutableDictionary *)dicmShowWhichGuidance;
- (_Bool)isShowGameGuidance;
- (void)updateUserCoin;
- (_Bool)isNeverCharge;
- (_Bool)isLoginFromOther;
- (_Bool)isLogined;
@end

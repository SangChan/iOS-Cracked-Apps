//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEMyUserInfo : JceObjectV2
{
    long long jcev2_p_0_r_ddwVuid;
    NSString *jcev2_p_1_o_strHeadUrl;
    NSString *jcev2_p_2_o_strNickName;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strNickName, setter=setJce_strNickName:) NSString *jcev2_p_2_o_strNickName; // @synthesize jcev2_p_2_o_strNickName;
@property(retain, nonatomic, getter=jce_strHeadUrl, setter=setJce_strHeadUrl:) NSString *jcev2_p_1_o_strHeadUrl; // @synthesize jcev2_p_1_o_strHeadUrl;
@property(nonatomic, getter=jce_ddwVuid, setter=setJce_ddwVuid:) long long jcev2_p_0_r_ddwVuid; // @synthesize jcev2_p_0_r_ddwVuid;
- (void).cxx_destruct;
- (id)init;

@end

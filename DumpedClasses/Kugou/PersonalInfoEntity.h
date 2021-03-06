//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Medal, NSString;

@interface PersonalInfoEntity : NSObject
{
    int _vip_type;
    int _m_type;
    NSString *_k_pic;
    NSString *_descri;
    NSString *_nickname;
    NSString *_k_nickname;
    NSString *_city;
    NSString *_fx_pic;
    NSString *_province;
    NSString *_occupation;
    NSString *_fx_nickname;
    NSString *_pic;
    NSString *_birthday;
    long long _visitors;
    unsigned long long _relation;
    long long _fans;
    long long _star_status;
    long long _constellation;
    long long _follows;
    long long _gender;
    long long _star_id;
    long long _y_type;
    double _servertime;
    NSString *_bg_pic;
    NSString *_auth_info;
    Medal *_medal;
    long long _p_grade;
    long long _friends;
    NSString *_last_login_time;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSString *last_login_time; // @synthesize last_login_time=_last_login_time;
@property(nonatomic) long long friends; // @synthesize friends=_friends;
@property(nonatomic) long long p_grade; // @synthesize p_grade=_p_grade;
@property(retain, nonatomic) Medal *medal; // @synthesize medal=_medal;
@property(retain, nonatomic) NSString *auth_info; // @synthesize auth_info=_auth_info;
@property(retain, nonatomic) NSString *bg_pic; // @synthesize bg_pic=_bg_pic;
@property(nonatomic) double servertime; // @synthesize servertime=_servertime;
@property(nonatomic) long long y_type; // @synthesize y_type=_y_type;
@property(nonatomic) int m_type; // @synthesize m_type=_m_type;
@property(nonatomic) long long star_id; // @synthesize star_id=_star_id;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long follows; // @synthesize follows=_follows;
@property(nonatomic) long long constellation; // @synthesize constellation=_constellation;
@property(nonatomic) long long star_status; // @synthesize star_status=_star_status;
@property(nonatomic) long long fans; // @synthesize fans=_fans;
@property(nonatomic) unsigned long long relation; // @synthesize relation=_relation;
@property(nonatomic) int vip_type; // @synthesize vip_type=_vip_type;
@property(nonatomic) long long visitors; // @synthesize visitors=_visitors;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *fx_nickname; // @synthesize fx_nickname=_fx_nickname;
@property(retain, nonatomic) NSString *occupation; // @synthesize occupation=_occupation;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *fx_pic; // @synthesize fx_pic=_fx_pic;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *k_nickname; // @synthesize k_nickname=_k_nickname;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *descri; // @synthesize descri=_descri;
@property(retain, nonatomic) NSString *k_pic; // @synthesize k_pic=_k_pic;
- (void).cxx_destruct;

@end


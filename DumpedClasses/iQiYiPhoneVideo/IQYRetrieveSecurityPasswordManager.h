//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYRetrieveSecurityPasswordManager : DataLoadManager
{
    NSString *_password;
    NSString *_authcookie;
    NSString *_realName;
    NSString *_cardId;
    NSString *_phoneToken;
    NSString *_agenttype;
    NSString *_deviceId;
}

@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *agenttype; // @synthesize agenttype=_agenttype;
@property(retain, nonatomic) NSString *phoneToken; // @synthesize phoneToken=_phoneToken;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) NSString *authcookie; // @synthesize authcookie=_authcookie;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)content;
- (id)valueDicForPost;
- (id)urlStl;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (CTSensitiveUtil)
- (id)doMask:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)maskRange:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (id)maskAddress;
- (id)maskBankCard;
- (id)maskIDNumber;
- (id)maskEmail;
- (id)maskMobile;
- (id)maskCommon;
- (id)emailSensitize;
- (id)creditCardNumberSensitize;
- (id)identityNumberSensitize;
- (id)stringSensitize;
@end


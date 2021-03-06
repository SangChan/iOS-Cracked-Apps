//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSString;

@interface CTFlightPassengerInvoiceTitleViewModel : CTViewModel
{
    _Bool _isSelectedPerson;
    _Bool _isSelectedCorp;
    long long _passengerInforID;
    NSString *_passengerName;
    NSString *_personInvoice;
    NSString *_corpInvoice;
    NSString *_titleType;
    NSString *_personTaxNumber;
    NSString *_corpTaxNumber;
    long long _personTitleID;
    long long _corpTitleID;
    NSString *_corpSocialCreditCode;
    NSString *_corpCompanyAddress;
    NSString *_corpCompanyTelephone;
    NSString *_corpBankName;
    NSString *_corpBankAccount;
}

+ (id)currentPassengerInvoiceTitleModelWithUserInvoiceModel:(id)arg1;
@property(copy, nonatomic) NSString *corpBankAccount; // @synthesize corpBankAccount=_corpBankAccount;
@property(copy, nonatomic) NSString *corpBankName; // @synthesize corpBankName=_corpBankName;
@property(copy, nonatomic) NSString *corpCompanyTelephone; // @synthesize corpCompanyTelephone=_corpCompanyTelephone;
@property(copy, nonatomic) NSString *corpCompanyAddress; // @synthesize corpCompanyAddress=_corpCompanyAddress;
@property(copy, nonatomic) NSString *corpSocialCreditCode; // @synthesize corpSocialCreditCode=_corpSocialCreditCode;
@property(nonatomic) long long corpTitleID; // @synthesize corpTitleID=_corpTitleID;
@property(nonatomic) long long personTitleID; // @synthesize personTitleID=_personTitleID;
@property(copy, nonatomic) NSString *corpTaxNumber; // @synthesize corpTaxNumber=_corpTaxNumber;
@property(copy, nonatomic) NSString *personTaxNumber; // @synthesize personTaxNumber=_personTaxNumber;
@property(copy, nonatomic) NSString *titleType; // @synthesize titleType=_titleType;
@property(nonatomic) _Bool isSelectedCorp; // @synthesize isSelectedCorp=_isSelectedCorp;
@property(nonatomic) _Bool isSelectedPerson; // @synthesize isSelectedPerson=_isSelectedPerson;
@property(copy, nonatomic) NSString *corpInvoice; // @synthesize corpInvoice=_corpInvoice;
@property(copy, nonatomic) NSString *personInvoice; // @synthesize personInvoice=_personInvoice;
@property(copy, nonatomic) NSString *passengerName; // @synthesize passengerName=_passengerName;
@property(nonatomic) long long passengerInforID; // @synthesize passengerInforID=_passengerInforID;
- (void).cxx_destruct;
- (long long)getTitleID;
- (id)getTaxNumber;
- (id)getInvoiceTitle;
- (void)initViewModel;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IQYOrderApiDataItem : NSObject
{
    NSString *_picPath;
    NSString *_itemFee;
    NSString *_num;
    NSString *_title;
    NSString *_price;
    NSString *_realItemFee;
    NSString *_originPrice;
    NSString *_itemId;
    NSString *_href;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSString *href; // @synthesize href=_href;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *originPrice; // @synthesize originPrice=_originPrice;
@property(retain, nonatomic) NSString *realItemFee; // @synthesize realItemFee=_realItemFee;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *num; // @synthesize num=_num;
@property(retain, nonatomic) NSString *itemFee; // @synthesize itemFee=_itemFee;
@property(retain, nonatomic) NSString *picPath; // @synthesize picPath=_picPath;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


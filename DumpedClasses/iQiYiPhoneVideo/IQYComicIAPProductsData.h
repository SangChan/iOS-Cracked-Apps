//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface IQYComicIAPProductsData : NSObject
{
    NSArray *_resList;
    NSArray *_productList;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSArray *productList; // @synthesize productList=_productList;
@property(retain, nonatomic) NSArray *resList; // @synthesize resList=_resList;
- (void).cxx_destruct;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end


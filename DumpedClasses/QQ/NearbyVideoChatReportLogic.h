//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QUIActionSheetDelegate.h"

@class NSArray, NSString, QUIActionSheet;

@interface NearbyVideoChatReportLogic : NSObject <QUIActionSheetDelegate>
{
    _Bool _isRequesting;
    QUIActionSheet *_reportSheet;
    NSArray *_sheetItemsName;
    NSArray *_sheetItemsType;
    long long _reportUin;
}

@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) long long reportUin; // @synthesize reportUin=_reportUin;
@property(retain, nonatomic) NSArray *sheetItemsType; // @synthesize sheetItemsType=_sheetItemsType;
@property(retain, nonatomic) NSArray *sheetItemsName; // @synthesize sheetItemsName=_sheetItemsName;
@property(retain, nonatomic) QUIActionSheet *reportSheet; // @synthesize reportSheet=_reportSheet;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendReportToServerWithType:(unsigned int)arg1;
- (void)showReportToast:(_Bool)arg1;
- (void)loadReportItemsWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)hideActionSheet;
- (void)showReportSheetWithReportUin:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

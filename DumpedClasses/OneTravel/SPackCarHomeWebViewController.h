//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCarBaseWebViewController.h"

@class SSpecBizDataSource;

@interface SPackCarHomeWebViewController : SCarBaseWebViewController
{
    SSpecBizDataSource *_bizDataSource;
    long long _productID;
    id <SBaseComProtocol> _delegate;
}

@property(nonatomic) __weak id <SBaseComProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long productID; // @synthesize productID=_productID;
@property(retain, nonatomic) SSpecBizDataSource *bizDataSource; // @synthesize bizDataSource=_bizDataSource;
- (void).cxx_destruct;
- (void)receivedCallBackPackageData:(id)arg1;
- (void)registerGetDataWebViewOpenEvent;
- (id)initWithUrl:(id)arg1 bizDataSource:(id)arg2 productID:(long long)arg3 delegate:(id)arg4;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

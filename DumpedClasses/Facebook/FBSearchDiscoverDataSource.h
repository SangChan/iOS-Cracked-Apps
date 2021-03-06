//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBComponentTableViewDataSourceCellConfigProvider-Protocol.h"
#import "FBComponentTableViewDataSourceSelectionHandler-Protocol.h"

@class FBComponentTableViewDataSource, FBSearchDiscoverConfiguration, NSString;
@protocol FBSearchDiscoverModelProtocol;

@interface FBSearchDiscoverDataSource : NSObject <FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceSelectionHandler>
{
    id <FBSearchDiscoverModelProtocol> _model;
    FBSearchDiscoverConfiguration *_config;
    long long _numberOfSections;
    FBComponentTableViewDataSource *_tableViewDataSource;
}

+ (id)_contextFromConfig:(id)arg1 viewController:(id)arg2;
@property(readonly, nonatomic) FBComponentTableViewDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)updateModel:(id)arg1;
- (_Bool)dataSource:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (struct FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1;
- (void)updateContextAndEnqeueReloadWithConfig:(id)arg1 viewController:(id)arg2;
- (id)initWithComponentTableViewDataSource:(id)arg1 config:(id)arg2;
- (id)initWithConfig:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


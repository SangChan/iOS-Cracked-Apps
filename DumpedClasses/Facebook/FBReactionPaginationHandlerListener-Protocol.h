//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemModelObject, NSError;
@protocol FBQueriedReactionUnitComponentFieldsProtocol, FBQueriedReactionUnitFieldsProtocol, FBReactionPaginationHandlerProtocol;

@protocol FBReactionPaginationHandlerListener <NSObject>
- (void)paginationHandler:(id <FBReactionPaginationHandlerProtocol>)arg1 didReplaceUnit:(FBMemModelObject<FBQueriedReactionUnitFieldsProtocol> *)arg2 newUnit:(FBMemModelObject<FBQueriedReactionUnitFieldsProtocol> *)arg3 error:(NSError *)arg4;

@optional
- (void)paginationHandler:(id <FBReactionPaginationHandlerProtocol>)arg1 didReplaceUnit:(FBMemModelObject<FBQueriedReactionUnitFieldsProtocol> *)arg2 newUnit:(FBMemModelObject<FBQueriedReactionUnitFieldsProtocol> *)arg3 didReplaceUnitComponent:(FBMemModelObject<FBQueriedReactionUnitComponentFieldsProtocol> *)arg4 newUnitComponent:(FBMemModelObject<FBQueriedReactionUnitComponentFieldsProtocol> *)arg5;
@end

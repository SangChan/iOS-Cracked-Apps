//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXCommandDelegate.h"

@class NSNumber, NSString, WXDOMDomain, WXDOMHighlightConfig, WXDOMRGBA;

@protocol WXDOMCommandDelegate <WXCommandDelegate>

@optional
- (void)domain:(WXDOMDomain *)arg1 getNodeForLocationX:(NSNumber *)arg2 locationY:(NSNumber *)arg3 callback:(void (^)(NSNumber *, id))arg4;
- (void)domain:(WXDOMDomain *)arg1 getBoxModelNodeId:(NSString *)arg2 callback:(void (^)(WXDOMBoxModel *, id))arg3;
- (void)domain:(WXDOMDomain *)arg1 markUndoableStateWithCallback:(void (^)(id))arg2;
- (void)domain:(WXDOMDomain *)arg1 redoWithCallback:(void (^)(id))arg2;
- (void)domain:(WXDOMDomain *)arg1 undoWithCallback:(void (^)(id))arg2;
- (void)domain:(WXDOMDomain *)arg1 moveToWithNodeId:(NSNumber *)arg2 targetNodeId:(NSNumber *)arg3 insertBeforeNodeId:(NSNumber *)arg4 callback:(void (^)(NSNumber *, id))arg5;
- (void)domain:(WXDOMDomain *)arg1 getAttributesWithNodeId:(NSNumber *)arg2 callback:(void (^)(NSArray *, id))arg3;
- (void)domain:(WXDOMDomain *)arg1 resolveNodeWithNodeId:(NSNumber *)arg2 objectGroup:(NSString *)arg3 callback:(void (^)(WXRuntimeRemoteObject *, id))arg4;
- (void)domain:(WXDOMDomain *)arg1 pushNodeByPathToFrontendWithPath:(NSString *)arg2 callback:(void (^)(NSNumber *, id))arg3;
- (void)domain:(WXDOMDomain *)arg1 highlightFrameWithFrameId:(NSString *)arg2 contentColor:(WXDOMRGBA *)arg3 contentOutlineColor:(WXDOMRGBA *)arg4 callback:(void (^)(id))arg5;
- (void)domain:(WXDOMDomain *)arg1 hideHighlightWithCallback:(void (^)(id))arg2;
- (void)domain:(WXDOMDomain *)arg1 highlightNodeWithNodeId:(NSNumber *)arg2 highlightConfig:(WXDOMHighlightConfig *)arg3 callback:(void (^)(id))arg4;
- (void)domain:(WXDOMDomain *)arg1 highlightRectWithX:(NSNumber *)arg2 y:(NSNumber *)arg3 width:(NSNumber *)arg4 height:(NSNumber *)arg5 color:(WXDOMRGBA *)arg6 outlineColor:(WXDOMRGBA *)arg7 callback:(void (^)(id))arg8;
- (void)domain:(WXDOMDomain *)arg1 setInspectModeEnabledWithEnabled:(NSNumber *)arg2 highlightConfig:(WXDOMHighlightConfig *)arg3 callback:(void (^)(id))arg4;
- (void)domain:(WXDOMDomain *)arg1 requestNodeWithObjectId:(NSString *)arg2 callback:(void (^)(NSNumber *, id))arg3;
- (void)domain:(WXDOMDomain *)arg1 discardSearchResultsWithSearchId:(NSString *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(WXDOMDomain *)arg1 getSearchResultsWithSearchId:(NSString *)arg2 fromIndex:(NSNumber *)arg3 toIndex:(NSNumber *)arg4 callback:(void (^)(NSArray *, id))arg5;
- (void)domain:(WXDOMDomain *)arg1 performSearchWithQuery:(NSString *)arg2 callback:(void (^)(NSString *, NSNumber *, id))arg3;
- (void)domain:(WXDOMDomain *)arg1 setOuterHTMLWithNodeId:(NSNumber *)arg2 outerHTML:(NSString *)arg3 callback:(void (^)(id))arg4;
- (void)domain:(WXDOMDomain *)arg1 getOuterHTMLWithNodeId:(NSNumber *)arg2 callback:(void (^)(NSString *, id))arg3;
- (void)domain:(WXDOMDomain *)arg1 getEventListenersForNodeWithNodeId:(NSNumber *)arg2 callback:(void (^)(NSArray *, id))arg3;
- (void)domain:(WXDOMDomain *)arg1 removeAttributeWithNodeId:(NSNumber *)arg2 name:(NSString *)arg3 callback:(void (^)(id))arg4;
- (void)domain:(WXDOMDomain *)arg1 setAttributesAsTextWithNodeId:(NSNumber *)arg2 text:(NSString *)arg3 name:(NSString *)arg4 callback:(void (^)(id))arg5;
- (void)domain:(WXDOMDomain *)arg1 setAttributeValueWithNodeId:(NSNumber *)arg2 name:(NSString *)arg3 value:(NSString *)arg4 callback:(void (^)(id))arg5;
- (void)domain:(WXDOMDomain *)arg1 removeNodeWithNodeId:(NSNumber *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(WXDOMDomain *)arg1 setNodeValueWithNodeId:(NSNumber *)arg2 value:(NSString *)arg3 callback:(void (^)(id))arg4;
- (void)domain:(WXDOMDomain *)arg1 setNodeNameWithNodeId:(NSNumber *)arg2 name:(NSString *)arg3 callback:(void (^)(NSNumber *, id))arg4;
- (void)domain:(WXDOMDomain *)arg1 querySelectorAllWithNodeId:(NSNumber *)arg2 selector:(NSString *)arg3 callback:(void (^)(NSArray *, id))arg4;
- (void)domain:(WXDOMDomain *)arg1 querySelectorWithNodeId:(NSNumber *)arg2 selector:(NSString *)arg3 callback:(void (^)(NSNumber *, id))arg4;
- (void)domain:(WXDOMDomain *)arg1 requestChildNodesWithNodeId:(NSNumber *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(WXDOMDomain *)arg1 getDocumentWithCallback:(void (^)(WXDOMNode *, id))arg2;
- (void)domain:(WXDOMDomain *)arg1 getVirtualDocumentWithCallback:(void (^)(WXDOMNode *, id))arg2;
@end


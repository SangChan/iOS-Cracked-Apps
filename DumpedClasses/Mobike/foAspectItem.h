//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface foAspectItem : NSObject
{
    NSMapTable *beforeBlock;
    NSMapTable *afterBlock;
}

- (void).cxx_destruct;
- (void)addBlockWithUUID:(id)arg1 isBefore:(_Bool)arg2 block:(id)arg3;
- (id)init;

@end


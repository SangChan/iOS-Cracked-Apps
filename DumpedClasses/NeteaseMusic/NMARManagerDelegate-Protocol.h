//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMARManager, NSError, NSString;

@protocol NMARManagerDelegate <NSObject>
- (void)arManager:(NMARManager *)arg1 chooseArModel:(NSString *)arg2;
- (void)arManager:(NMARManager *)arg1 updateArResult:(struct InsightARResult)arg2;
- (void)arManager:(NMARManager *)arg1 updateDownloadProgress:(double)arg2;
- (void)arManager:(NMARManager *)arg1 completeDownloadWithError:(NSError *)arg2;
@end


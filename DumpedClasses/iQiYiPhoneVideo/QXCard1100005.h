//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QXBaseCard.h"

#import "QXMarksImageViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, NSTimer, QXCardData1100005, UIImageView, UIPageControl, UIScrollView;

@interface QXCard1100005 : QXBaseCard <QXMarksImageViewDelegate, UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIImageView *_shadowView;
    UIPageControl *_pageCtrl;
    NSArray *_initialArray;
    NSArray *_dataArray;
    NSTimer *_timer;
    QXCardData1100005 *_cardData;
}

+ (Class)dataClass;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (id)pageCtrl;
- (id)shadowView;
- (id)scrollView;
- (void)autoScroll;
- (void)removeTimer;
- (void)addTimer;
- (void)marksImageViewDidClicked:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCardData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQEmotionLabelDelegate.h"

@class NSString, ReadInJoyChannelArticle, ReadInJoyEmotionLabel;

@interface ReadInJoySocialSubscribeNameAndSummaryView : UIView <QQEmotionLabelDelegate>
{
    ReadInJoyEmotionLabel *_subscribeNameAndSummaryLabel;
    ReadInJoyChannelArticle *_feedsModel;
}

@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void)dealloc;
- (void)postTapNotifyWithDic:(id)arg1;
- (void)tap;
- (void)emotionLabelHandleUrl:(id)arg1;
- (void)setSupperViewBackgroundColor:(id)arg1;
- (void)revertBackgroundColor;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


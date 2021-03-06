//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel, UITextView;

@interface XYPHSettingDevelopUserDefaultTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UITextView *_valueTextView;
    UIButton *_deleteButton;
    id <XYPHSettingDevelopUserDefaultTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <XYPHSettingDevelopUserDefaultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) __weak UITextView *valueTextView; // @synthesize valueTextView=_valueTextView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)deleteButtonTouchUpInSide:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end


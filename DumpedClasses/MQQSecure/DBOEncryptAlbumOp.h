//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQDBWrapper;

@interface DBOEncryptAlbumOp : NSObject
{
    MQQDBWrapper *_dbWrapper;
}

- (long long)photoCountWithType:(long long)arg1 source:(long long)arg2 fromDate:(id)arg3;
- (long long)photoCountForAlbum:(id)arg1;
- (_Bool)updateSHA:(id)arg1 forPhoto:(id)arg2;
- (_Bool)movePhoto:(id)arg1 toAlbum:(id)arg2;
- (id)posterPhotoInAlbum:(id)arg1;
- (id)photosWithSHA:(id)arg1;
- (id)photosInAlbum:(id)arg1;
- (id)photos;
- (id)photosWithType:(long long)arg1;
- (id)photoFromRecord:(id)arg1;
- (_Bool)existsPhotoWithSHA:(id)arg1 inAlbum:(id)arg2;
- (_Bool)existsPhoto:(id)arg1 inAlbum:(id)arg2;
- (_Bool)existsPhoto:(id)arg1;
- (_Bool)deletePhoto:(id)arg1;
- (_Bool)insertPhoto:(id)arg1;
- (_Bool)updateAlbumInfo:(id)arg1;
- (_Bool)renameAlbum:(id)arg1 withNewName:(id)arg2;
- (id)albumWithName:(id)arg1;
- (id)albumDictionary;
- (id)albums;
- (_Bool)existsAlbum:(id)arg1;
- (_Bool)deleteAlbum:(id)arg1;
- (_Bool)insertAlbum:(id)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end


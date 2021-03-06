//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebFileResourceDelegate.h"

@class NSCondition, NSMutableDictionary, NSString, NSThread;

@interface SongShareMgr : NSObject <WebFileResourceDelegate>
{
    NSMutableDictionary *shareSongs;
    NSMutableDictionary *shareSongsCopy;
    NSCondition *shareSongsCopyLock;
    _Bool isWebSendFile;
    _Bool isDeletingFileByPrograme;
    int m_timeInc;
    NSCondition *m_timeIncLock;
    NSThread *m_scanThread;
    _Bool m_isPreScanThreadShouldBreak;
    _Bool m_isSync;
}

+ (id)songShareMgr;
- (void)addNewShareSong:(id)arg1;
- (_Bool)copyFileToShareDir:(id)arg1 srcPath:(id)arg2;
- (void)loadShareSongFromAllMusic;
- (id)sharesongTableName;
- (void)scanShareDir;
- (id)tokenFileInfo:(id)arg1;
- (_Bool)isSupportFile:(id)arg1;
- (void)allShareSongToAllMusicDB;
- (void)deleteAllShareSongFromAllMusicDB;
- (void)shareSongToAllMusicDB:(id)arg1;
- (void)shareSongsToDB;
- (void)setIsDeletingFileByPrograme:(_Bool)arg1;
- (void)deleteSong:(id)arg1;
- (void)onshareDirChange;
- (void)scanShareSong;
- (void)notifyShareDirScanCompleted;
- (void)notifyShareDirChanged;
- (_Bool)isSync;
- (void)copyShareSongs;
- (void)monitorShareDir;
- (void)onshareDirChangeThreadProc;
- (void)monitorShareDirOnThread;
- (void)createShareDir;
- (void)onOneWebSongFinished:(id)arg1 filePath:(id)arg2;
- (id)freeDiskSpace;
- (void)newFileDidUpload:(id)arg1 inTempPath:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)registerNotification;
- (void)onWebSongFinished:(id)arg1;
- (int)shareSongsCount;
- (id)shareSongs;
- (id)songShareDirPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


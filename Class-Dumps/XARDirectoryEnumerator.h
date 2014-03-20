//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSDirectoryEnumerator.h>

@class NSString;

@interface XARDirectoryEnumerator : NSDirectoryEnumerator
{
    struct __xar_t *_xar;
    struct __xar_iter_t *_xar_iter;
    struct __xar_file_t *_current_xar_file;
    BOOL _didPeek;
    BOOL _isDone;
    NSString *_basePath;
}

- (BOOL)isDirectory;
- (void)skipDescendents;
- (void)skipDescendants;
- (id)nextObject;
- (struct __xar_file_t *)_next_file;
- (struct __xar_file_t *)xar_file;
- (void)dealloc;
- (void)finalize;
- (id)initWithXAR:(struct __xar_t *)arg1 subpath:(id)arg2;
- (BOOL)_seekToSubpath:(id)arg1;

@end

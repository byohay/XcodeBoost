//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage;

@interface PDFThumbnail : NSObject
{
    NSImage *_image;
    long long _priority;
    BOOL _dirty;
}

- (BOOL)dirty;
- (void)setDirty:(BOOL)arg1;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (void)dealloc;
- (id)image;
- (void)setImage:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

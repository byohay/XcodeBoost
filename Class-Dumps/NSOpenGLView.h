//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSOpenGLContext, NSOpenGLPixelFormat;

@interface NSOpenGLView : NSView
{
    NSOpenGLContext *_openGLContext;
    NSOpenGLPixelFormat *_pixelFormat;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
}

+ (id)defaultPixelFormat;
+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setWantsLayer:(BOOL)arg1;
- (void)_surfaceNeedsUpdate:(id)arg1;
- (id)_invalidateGStatesForTree;
- (void)update;
- (void)reshape;
- (void)prepareOpenGL;
- (BOOL)lockFocusIfCanDraw;
- (id)pixelFormat;
- (void)setPixelFormat:(id)arg1;
- (BOOL)isOpaque;
- (void)clearGLContext;
- (id)openGLContext;
- (void)setOpenGLContext:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pixelFormat:(id)arg2;
- (id)makeBackingLayer;

@end

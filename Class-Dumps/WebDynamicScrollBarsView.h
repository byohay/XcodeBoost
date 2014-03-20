//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

#import "WebCoreFrameScrollView.h"

@interface WebDynamicScrollBarsView : NSScrollView <WebCoreFrameScrollView>
{
    struct WebDynamicScrollBarsViewPrivate *_private;
}

+ (void)setCustomScrollerClass:(Class)arg1;
+ (Class)_verticalScrollerClass;
+ (Class)_horizontalScrollerClass;
- (void)scrollClipView:(id)arg1 toPoint:(struct CGPoint)arg2;
- (BOOL)verticalScrollingAllowed;
- (BOOL)horizontalScrollingAllowed;
- (void)setAlwaysHideVerticalScroller:(BOOL)arg1;
- (void)setAlwaysHideHorizontalScroller:(BOOL)arg1;
- (void)setAllowsScrollersToOverlapContent:(BOOL)arg1;
- (void)setAllowsHorizontalScrolling:(BOOL)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)inProgrammaticScroll;
- (struct CGPoint)scrollOrigin;
- (void)setScrollOrigin:(struct CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3;
- (BOOL)accessibilityIsIgnored;
- (void)scrollWheel:(id)arg1;
- (BOOL)autoforwardsScrollWheelEvents;
- (BOOL)verticalScrollingModeLocked;
- (BOOL)horizontalScrollingModeLocked;
- (void)setScrollingModesLocked:(BOOL)arg1;
- (void)setVerticalScrollingModeLocked:(BOOL)arg1;
- (void)setHorizontalScrollingModeLocked:(BOOL)arg1;
- (void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(BOOL)arg3;
- (void)setVerticalScrollingMode:(int)arg1;
- (void)setVerticalScrollingMode:(int)arg1 andLock:(BOOL)arg2;
- (void)setHorizontalScrollingMode:(int)arg1 andLock:(BOOL)arg2;
- (int)verticalScrollingMode;
- (int)horizontalScrollingMode;
- (void)scrollingModes:(int *)arg1 vertical:(int *)arg2;
- (BOOL)allowsVerticalScrolling;
- (BOOL)allowsHorizontalScrolling;
- (void)reflectScrolledClipView:(id)arg1;
- (void)updateScrollers;
- (void)adjustForScrollOriginChange;
- (void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
- (void)setSuppressLayout:(BOOL)arg1;
- (void)tile;
- (struct CGRect)contentViewFrame;

@end

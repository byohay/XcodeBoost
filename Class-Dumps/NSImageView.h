//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@interface NSImageView : NSControl
{
    struct __IVFlags {
        unsigned int _hasImageView:1;
        unsigned int _unused:25;
        unsigned int _rejectsMultiFileDrops:1;
        unsigned int _compatibleScalingAndAlignment:1;
        unsigned int _reserved:1;
        unsigned int _overridesDrawing:1;
        unsigned int _allowsCutCopyPaste:1;
        unsigned int _editable:1;
    } _ivFlags;
    id _target;
    SEL _action;
}

+ (void)initialize;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)intrinsicContentSize;
- (CDStruct_d2b197d1)alignmentRectInsets;
- (long long)_desiredContentsRedrawPolicy;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_redisplayImageWhenLayerBacked;
- (void)_ensureInitialStateIsSetForAnimationsForSize:(struct CGSize)arg1;
- (id)makeBackingLayer;
- (void)setLayer:(id)arg1;
- (void)layout;
- (void)_didRemoveLayer;
- (void)updateLayer;
- (void)_updateLayerContentsToBorderImage;
- (void)_updateLayerContentsToImage;
- (BOOL)wantsUpdateLayer;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)_copyImageToPasteboard;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setAllowsCutCopyPaste:(BOOL)arg1;
- (BOOL)allowsCutCopyPaste;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (BOOL)_shouldTrackWithNonEditableCell;
- (void)setAnimates:(BOOL)arg1;
- (BOOL)animates;
- (BOOL)isOpaque;
- (SEL)action;
- (id)target;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)_setImageAndNotifyTarget:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (id)_imageByConvertingToSidebarImageIfNeeded:(id)arg1;
- (id)image;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (unsigned long long)imageScaling;
- (void)setImageAlignment:(unsigned long long)arg1;
- (BOOL)_shouldDoOldLayerUpdate;
- (void)_invalidateLayerLayoutAndSetNeedsDisplay;
- (BOOL)_usingUpdateLayer;
- (unsigned long long)imageAlignment;
- (void)setImageFrameStyle:(unsigned long long)arg1;
- (unsigned long long)imageFrameStyle;
- (void)setCell:(id)arg1;
- (BOOL)_wantsImageViewForBoundsSize:(struct CGSize)arg1;
- (BOOL)_wantsImageView;
- (void)_updateImageView;
- (id)_processedImageForView:(id)arg1;
- (struct CGRect)_imageViewFrame;
- (void)_removeImageView;
- (void)_setImageView:(id)arg1;
- (id)_imageView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLegacyLayerUpdate;
- (void)_updateLayerContentsRedrawPolicy;
- (void)_updateCompatibleScalingAndAlignment;
- (void)_updateOverridesDrawing;
- (void)registerForDrags;
- (void)_setRejectsMultiFileDrops:(BOOL)arg1;
- (BOOL)_rejectsMultiFileDrops;
- (id)ns_widgetType;

@end

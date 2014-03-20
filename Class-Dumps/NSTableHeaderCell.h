//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@interface NSTableHeaderCell : NSTextFieldCell
{
}

- (id)_indicatorImage;
- (void)_setIndicatorImage:(id)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)_shouldLeaveSpaceForSortIndicator;
- (BOOL)_alignFrame:(struct CGRect *)arg1 withWithDataCellForView:(id)arg2;
- (void)_convertToText:(id)arg1;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (void)_setSortable:(BOOL)arg1 showSortIndicator:(BOOL)arg2 ascending:(BOOL)arg3 priority:(long long)arg4 highlightForSort:(BOOL)arg5;
- (void)_setSortable:(BOOL)arg1;
- (struct CGRect)sortIndicatorRectForBounds:(struct CGRect)arg1;
- (id)_currentSortIndicatorImage;
- (void)drawSortIndicatorWithFrame:(struct CGRect)arg1 inView:(id)arg2 ascending:(BOOL)arg3 priority:(long long)arg4;
- (void)_drawSortIndicatorIfNecessaryWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct __CFDictionary *)_coreUISortIndicatorDrawOptionsWithView:(id)arg1 ascending:(BOOL)arg2;
- (BOOL)_shouldShowHighlightForSort;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (BOOL)_textDimsWhenDisabled;
- (void)_adjustFontSize;
- (BOOL)isOpaque;
- (void)_drawThemeContents:(struct CGRect)arg1 highlighted:(BOOL)arg2 inView:(id)arg3;
- (void)_drawGroupViewBackgroundWithFrame:(struct CGRect)arg1 highlighted:(BOOL)arg2 inView:(id)arg3;
- (void)_drawBezelWithFrame:(struct CGRect)arg1 highlighted:(BOOL)arg2 inView:(id)arg3;
- (struct __CFDictionary *)_coreUIBezelDrawOptionsWithView:(id)arg1 highlighted:(BOOL)arg2 nextColumnAfterOneBeingDrawnIsSelected:(BOOL)arg3;
- (struct __CFString *)_coreUIState;
- (BOOL)_shouldDrawRightSeparatorInView:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)accessibilityElementWithParent:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsSortDirectionAttributeSettable;
- (id)accessibilitySortDirectionAttribute;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (id)accessibilityTitleAttribute;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsSortButton;

@end

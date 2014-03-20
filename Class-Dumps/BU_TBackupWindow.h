//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

#import "NSUserInterfaceItemIdentification.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BU_TBackupWindow : NSWindow <NSUserInterfaceItemIdentification>
{
}

- (BOOL)worksWhenModal;
- (BOOL)_allowsOrdering;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(copy) NSString *identifier;

@end

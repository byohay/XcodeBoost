//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEInspectorEnumerationProperty.h>

@class IDEInspectorKeyPath, NSArray, NSMenuItem, NSPopUpButton, NSString;

@interface IDEInspectorTextEnumerationProperty : IDEInspectorEnumerationProperty
{
    NSMenuItem *_multipleValuesItem;
    NSMenuItem *_invalidValueItem;
    NSMenuItem *_noSelectionItem;
    NSMenuItem *_nilValueItem;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_nilValueTitleKeyPath;
    NSString *_nilValueTitle;
    unsigned long long _bitMask;
    BOOL _isBitField;
    BOOL _rebuildPopUps;
    BOOL _nilPlaceholderIsSelectable;
    NSArray *optionGroups;
    id controllerValue;
    NSPopUpButton *_popupButton;
}

@property(retain, nonatomic) NSPopUpButton *popupButton; // @synthesize popupButton=_popupButton;
- (void).cxx_destruct;
- (void)rebuildMenuContent;
- (void)enumerateDynamicOptionGroupContent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)refresh;
- (void)showValueItem:(id)arg1;
- (void)showMarkerItem:(id)arg1;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (id)menuItemWithTitle:(id)arg1 image:(id)arg2 representedObject:(id)arg3 hidden:(BOOL)arg4 enabled:(BOOL)arg5;
- (double)baseline;

@end

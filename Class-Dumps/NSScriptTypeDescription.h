//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSScriptTypeDescription : NSObject
{
}

- (id)errorExpectedTypeDescriptor;
- (id)coercedValue:(id)arg1;
- (BOOL)matchesAppleEventCode:(unsigned int)arg1;
- (SEL)objcDescriptorCreationMethodSelector;
- (SEL)objcCreationMethodSelector;
- (id)objcClassName;
- (id)classDescription;
- (BOOL)isList;
- (BOOL)isEnumeration;
- (unsigned int)appleEventCode;
- (id)name;
- (void)reconcileToSuiteRegistry:(id)arg1 suiteName:(id)arg2;
- (id)description;

@end

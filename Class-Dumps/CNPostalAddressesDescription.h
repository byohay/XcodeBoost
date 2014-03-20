//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/CNPropertyDescription.h>

#import "CNAbstractPropertyDescription.h"

__attribute__((visibility("hidden")))
@interface CNPostalAddressesDescription : CNPropertyDescription <CNAbstractPropertyDescription>
{
}

- (BOOL)address:(id)arg1 winsTieBreakerAgainstAddressUsingStateNameCompleteness:(id)arg2;
- (BOOL)address:(id)arg1 winsTieBreakerAgainstAddressUsingPostalCodeCompleteness:(id)arg2;
- (BOOL)address:(id)arg1 winsTieBreakerAgainstAddress:(id)arg2;
- (BOOL)postalCodeIsMoreComplete:(id)arg1;
- (unsigned long long)preferenceScoreForKey:(id)arg1;
- (unsigned long long)preferenceScoreForAddress:(id)arg1;
- (BOOL)isValue:(id)arg1 preferredToEquivalentValue:(id)arg2;
- (BOOL)isPostalCodeValue:(id)arg1 equivalentToValue:(id)arg2;
- (unsigned long long)indexOfUSState:(id)arg1;
- (BOOL)isStateValue:(id)arg1 equivalentToValue:(id)arg2;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2 forKey:(id)arg3;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (void)copyFromContact:(id)arg1 to:(id)arg2;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;

@end

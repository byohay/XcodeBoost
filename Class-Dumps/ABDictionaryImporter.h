//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABAddressBook, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ABDictionaryImporter : NSObject
{
    ABAddressBook *_addressBook;
    ABAccount *_account;
    BOOL _acceptSubscribedRecords;
    BOOL _subscriptionInfoChanged;
    NSString *_discoveredMeIdentifier;
    BOOL _preservesIdentifiers;
    NSMutableDictionary *_recordMapping;
    NSMutableArray *_importedGroups;
}

@property BOOL preservesIdentifiers; // @synthesize preservesIdentifiers=_preservesIdentifiers;
@property(copy) NSString *discoveredMeIdentifier; // @synthesize discoveredMeIdentifier=_discoveredMeIdentifier;
@property(readonly) BOOL subscriptionInfoChanged; // @synthesize subscriptionInfoChanged=_subscriptionInfoChanged;
@property BOOL acceptSubscribedRecords; // @synthesize acceptSubscribedRecords=_acceptSubscribedRecords;
@property(readonly) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (void)finalizeImport;
- (unsigned long long)countOfImportedRecords;
- (id)mappedIdentifierForIdentifier:(id)arg1;
- (void)_rememberToFinalizeGroup:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)nts_importDictionary:(id)arg1;
- (id)importDictionary:(id)arg1;
- (id)prepareRepresentationForRecordCreation:(id)arg1;
- (id)propertiesToImportForRecordType:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 account:(id)arg2;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSAccountControllerDelegate.h"
#import "IDSConnectionDelegatePrivate.h"

@class IDSAccountController, NSArray, NSMapTable, NSMutableDictionary, NSSet, NSString;

@interface _IDSService : NSObject <IDSAccountControllerDelegate, IDSConnectionDelegatePrivate>
{
    IDSAccountController *_accountController;
    NSMutableDictionary *_uniqueIDToConnection;
    NSSet *_commands;
    NSString *_rerouteService;
    BOOL _everHadDelegate;
    NSMapTable *_delegateToInfo;
    id _delegateContext;
}

- (void)requestKeepAlive;
- (BOOL)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (BOOL)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;
@property(readonly, nonatomic) NSArray *devices;
@property(readonly, nonatomic) NSSet *accounts;
- (void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4;
- (void)connection:(id)arg1 messageIdentifier:(id)arg2 updatedWithResponseCode:(long long)arg3 error:(id)arg4 lastCall:(BOOL)arg5;
- (void)connection:(id)arg1 devicesChanged:(id)arg2;
- (void)connection:(id)arg1 isActiveChanged:(BOOL)arg2;
- (void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4;
- (void)connection:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3;
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;
- (void)accountController:(id)arg1 accountAdded:(id)arg2;
- (void)accountController:(id)arg1 accountsChanged:(id)arg2;
- (void)_processAccountSet:(id)arg1;
- (void)_tearDownConnectionForUniqueID:(id)arg1;
- (void)_setupNewConnectionForAccount:(id)arg1;
- (void)_logConnectionMap;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)dealloc;
- (id)initWithService:(id)arg1 commands:(id)arg2 delegateContext:(id)arg3;

@end

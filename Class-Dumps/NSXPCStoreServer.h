//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCServerProtocol.h"

@class NSArray, NSDictionary, NSManagedObjectModel, NSMapTable, NSURL, NSXPCListener, NSXPCStoreServerRequestHandlingPolicy;

@interface NSXPCStoreServer : NSObject <NSXPCServerProtocol>
{
    id _delegate;
    NSURL *_modelURL;
    NSManagedObjectModel *_model;
    NSURL *_storeURL;
    NSDictionary *_storeOptions;
    struct dispatch_queue_s *_queue;
    NSArray *_entitlementNames;
    NSXPCListener *_listener;
    NSXPCStoreServerRequestHandlingPolicy *_policy;
    NSMapTable *_connectionToCoordinatorMap;
}

+ (void)initialize;
+ (unsigned long long)debugDefault;
- (oneway void)handleRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)retainedCoordinatorForConnection:(id)arg1;
- (void)removeCachesForConnection:(id)arg1;
- (id)_createCoordinator;
- (BOOL)setupRecoveryForConnectionContext:(id)arg1 ifNecessary:(id)arg2;
- (BOOL)errorIsPlausiblyAnSQLiteIssue:(id)arg1;
- (id)requestHandlingPolicy;
- (id)delegate;
- (void)dealloc;
- (void)startListening;
- (void)setErrorHandlingDelegate:(id)arg1;
- (id)errorHandlingDelegate;
- (id)initForStoreWithURL:(id)arg1 usingModelAtURL:(id)arg2 options:(id)arg3 policy:(id)arg4;
- (id)handleMetadataRequestInContext:(id)arg1;
- (id)handleFetchRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)handleFaultRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)handleRelationshipFaultRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)handleSaveRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)_populateObject:(id)arg1 withValuesFromClient:(id)arg2;
- (id)handleObtainRequest:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;

@end

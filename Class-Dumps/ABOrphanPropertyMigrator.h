//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStore;

__attribute__((visibility("hidden")))
@interface ABOrphanPropertyMigrator : NSObject
{
    NSManagedObjectContext *_moc;
    NSPersistentStore *_store;
}

- (void)migrateOrphanPropertiesForEntityNamed:(id)arg1;
- (void)migrateOrphanProperties;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end

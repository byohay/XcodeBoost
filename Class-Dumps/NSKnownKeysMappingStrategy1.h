//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSKnownKeysMappingStrategy.h>

__attribute__((visibility("hidden")))
@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy
{
    int _cd_rc;
    int _reserved64;
    void *_table;
    unsigned long long _length;
    id _reserved1;
    id *_keys;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForArchiver;
- (Class)classForCoder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)allKeys;
- (id *)keys;
- (unsigned long long)length;
- (unsigned long long)fastIndexForKnownKey:(id)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (void)dealloc;
- (void)_coreDealloc:(BOOL)arg1;
- (id)initForKeys:(id)arg1;
- (id)initForKeys:(id *)arg1 count:(unsigned long long)arg2;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)_coreCreationForKeys:(const id *)arg1 count:(unsigned long long)arg2;
- (struct __CFArray *)_makeBranchTableForKeys:(const char **)arg1 count:(unsigned long long)arg2;

@end

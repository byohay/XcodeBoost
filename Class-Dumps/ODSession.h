//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ODSession : NSObject
{
    void *_internal;
}

+ (id)sessionWithOptions:(id)arg1 error:(id *)arg2;
+ (id)defaultSession;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (id)mappingTemplateNames;
- (id)configurationTemplateNames;
- (id)templatesInFolder:(id)arg1;
- (id)configurationDictionaryForNodename:(id)arg1;
- (id)configurationForNodename:(id)arg1;
- (BOOL)deleteConfigurationWithNodename:(id)arg1 authorization:(id)arg2 error:(id *)arg3;
- (BOOL)deleteConfiguration:(id)arg1 authorization:(id)arg2 error:(id *)arg3;
- (BOOL)addConfiguration:(id)arg1 authorization:(id)arg2 error:(id *)arg3;
- (id)sendConfigurationCode:(long long)arg1 propertyList:(id)arg2 authorization:(id)arg3 error:(id *)arg4;
- (BOOL)externalizedAuthorizationForm:(CDStruct_7a08cd8d *)arg1 authorization:(id)arg2 node:(id)arg3 error:(id *)arg4;
- (id)configurationAuthorizationAllowingUserInteraction:(BOOL)arg1 error:(id *)arg2;
- (id)nodeNamesAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (unsigned long long)_cfTypeID;
- (id)description;
- (struct __ODSession *)__getODSessionRef;

@end

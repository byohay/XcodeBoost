//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDEBuildRunPhaseBlueprintProviderWrapper : NSObject
{
    id <IDEBlueprintProvider> _provider;
}

+ (id)keyPathsAffectingBlueprintWrappers;
@property(readonly) id <IDEBlueprintProvider> provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)navigableItem_image;
- (id)navigableItem_name;
@property(readonly) NSArray *blueprintWrappers;
- (id)initWithBlueprintProvider:(id)arg1;

@end

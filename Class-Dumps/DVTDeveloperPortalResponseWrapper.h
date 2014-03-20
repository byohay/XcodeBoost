//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface DVTDeveloperPortalResponseWrapper : NSObject
{
    NSDictionary *_responseDictionary;
    NSSet *_guaranteedComprehensiveResponseKeys;
}

+ (id)responseWrapperWithResponseDictionary:(id)arg1 guaranteedComprehensiveResponseKeys:(id)arg2;
@property(readonly, nonatomic) NSSet *guaranteedComprehensiveResponseKeys; // @synthesize guaranteedComprehensiveResponseKeys=_guaranteedComprehensiveResponseKeys;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1 guaranteedComprehensiveResponseKeys:(id)arg2;

@end

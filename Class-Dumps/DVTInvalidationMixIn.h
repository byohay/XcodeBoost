//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTMixIn.h>

#import "DVTInvalidation.h"

@class DVTStackBacktrace;

@interface DVTInvalidationMixIn : DVTMixIn <DVTInvalidation>
{
}

+ (void)mixInExtendClass:(Class)arg1 assertInDealloc:(BOOL)arg2;
- (void)DVTInvalidationMixIn_dealloc;
- (void)invalidate;
- (void)primitiveInvalidate;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

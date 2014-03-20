//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSString;

@protocol ABSafeNotificationSignature <NSObject, NSCopying>
- (unsigned long long)signatureCode;
- (void)stopObservingWithTarget:(id)arg1;
- (void)startObservingWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)object;
- (NSString *)name;
- (id)copy;
@end

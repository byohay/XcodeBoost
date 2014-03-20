//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"

@class NSString;

@interface CNInstantMessageAddress : NSObject <NSCopying>
{
    NSString *_username;
    NSString *_service;
}

@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 service:(id)arg2;

@end

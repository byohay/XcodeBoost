//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PFUBLogEventID : NSObject
{
    NSString *_idString;
    long long _hash;
    long long _eventType;
}

+ (void)initialize;
@property(readonly, nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) long long hash; // @synthesize hash=_hash;
@property(readonly, nonatomic) NSString *idString; // @synthesize idString=_idString;
- (id)initWithCustomKey:(id)arg1;
- (id)initWithEventType:(int)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AOSImpatientExecutor : NSObject
{
    CDUnknownBlockType _targetBlock;
    double _timeout;
    CDUnknownBlockType _timeoutBlock;
}

+ (BOOL)executeBlock:(CDUnknownBlockType)arg1 withTimeout:(double)arg2 timeoutBlock:(CDUnknownBlockType)arg3;
@property(copy) CDUnknownBlockType timeoutBlock; // @synthesize timeoutBlock=_timeoutBlock;
@property double timeout; // @synthesize timeout=_timeout;
@property(copy) CDUnknownBlockType targetBlock; // @synthesize targetBlock=_targetBlock;
- (BOOL)fire;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface NSTableAssociation : NSObject
{
    NSView *_view;
    long long _column;
}

@property(nonatomic) long long column; // @synthesize column=_column;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void)dealloc;

@end

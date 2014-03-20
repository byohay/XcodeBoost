//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABBookCommand.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ABUnlinksLoneRemainingPeopleCommand : ABBookCommand
{
    NSArray *_linkIds;
    id <ABLinkingInfoDataSource> _adapter;
}

+ (id)commandWithLinkIds:(id)arg1 adapter:(id)arg2;
- (void)unlinkPeople:(id)arg1;
- (id)peopleFilteredForNoRemainingLinkedPeople:(id)arg1;
- (id)remainingPeople;
- (void)execute;
- (void)dealloc;
- (id)initWithLinkIds:(id)arg1 adapter:(id)arg2;

@end

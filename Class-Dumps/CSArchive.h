//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CSArchive : NSObject
{
    NSString *archivePath;
    NSArray *archiveListing;
}

+ (BOOL)isValidArchive:(id)arg1;
+ (id)typeOfArchive:(id)arg1;
- (void).cxx_destruct;
- (id)extractFile:(id)arg1;
- (void)extractFile:(id)arg1 toFolder:(id)arg2;
- (id)extractAll;
- (void)extractAllToFolder:(id)arg1;
- (id)filenames;
- (unsigned long long)count;
- (void)generateListingIfNeeded;
- (id)taskArgsForExtractionOfFile:(id)arg1;
- (id)taskArgsForArchiveExtraction;
- (id)taskArgsForArchiveListing;
- (BOOL)isValidArchive;
- (id)typeOfArchive;
- (id)initWithPath:(id)arg1;

@end

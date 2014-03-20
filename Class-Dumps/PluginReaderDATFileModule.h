//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HIToolbox/PluginReaderGenericModule.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PluginReaderDATFileModule : PluginReaderGenericModule
{
    struct DumpFileHeaderStruct _fileHeader;
    char *_keyToken;
    char *_dataToken;
    struct __sFILE *_file;
    char *_keyList;
    NSMutableDictionary *_dictionary;
    BOOL _parseOnlyForBasicProperties;
}

- (id).cxx_construct;
- (void)writePluginInformationIntoDictionary;
- (BOOL)parseForBasicProperties;
- (BOOL)parse;
- (id)initForBasicPropertiesWithFile:(id)arg1;
- (id)initWithFileName:(id)arg1;
- (BOOL)_parseFile;
- (void)_parseHashTable;
- (int)_getNextKeyAndDataToken:(id)arg1 forPosition:(int)arg2;
- (int)_fillToken:(char *)arg1 withString:(id)arg2 position:(int)arg3;
- (int)_goThroughWhitespace:(id)arg1 forPosition:(int)arg2;
- (BOOL)_isWhitespace:(unsigned short)arg1;
- (id)_getRestOfFile;
- (BOOL)_processHeader;
- (void)_parseHeader;

@end

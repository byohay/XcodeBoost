//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"

@class PDFDocumentPrivateVars;

@interface PDFDocument : NSObject <NSCopying>
{
    PDFDocumentPrivateVars *_pdfPriv;
}

+ (void)initialize;
- (id)description;
- (id)selectionFromPage:(id)arg1 atCharacterIndex:(unsigned long long)arg2 toPage:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (id)selectionFromPage:(id)arg1 atPoint:(struct CGPoint)arg2 toPage:(id)arg3 atPoint:(struct CGPoint)arg4;
- (id)selectionForEntireDocument;
- (id)printOperationForPrintInfo:(id)arg1 scalingMode:(long long)arg2 autoRotate:(BOOL)arg3;
- (void)cancelFindString;
- (BOOL)isFinding;
- (void)didMatchString:(id)arg1;
- (id)findString:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (void)beginFindStrings:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)beginFindString:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)findString:(id)arg1 withOptions:(unsigned long long)arg2;
- (Class)pageClass;
- (void)exchangePageAtIndex:(unsigned long long)arg1 withPageAtIndex:(unsigned long long)arg2;
- (void)removePageAtIndex:(unsigned long long)arg1;
- (void)insertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexForPage:(id)arg1;
- (id)pageAtIndex:(unsigned long long)arg1;
- (unsigned long long)pageCount;
- (id)outlineItemForSelection:(id)arg1;
- (void)setOutlineRoot:(id)arg1;
- (id)outlineRoot;
- (BOOL)writeToURL:(id)arg1 withOptions:(id)arg2;
- (BOOL)writeToURL:(id)arg1;
- (BOOL)writeToFile:(id)arg1 withOptions:(id)arg2;
- (BOOL)writeToFile:(id)arg1;
- (id)dataRepresentationWithOptions:(id)arg1;
- (id)dataRepresentation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)string;
- (long long)permissionsStatus;
- (BOOL)allowsCopying;
- (BOOL)allowsPrinting;
- (BOOL)unlockWithPassword:(id)arg1;
- (BOOL)isLocked;
- (BOOL)isEncrypted;
- (int)minorVersion;
- (int)majorVersion;
- (void)setDocumentAttributes:(id)arg1;
- (id)documentAttributes;
- (struct CGPDFDocument *)documentRef;
- (id)documentURL;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (id)dataFromXMP:(struct __CFData *)arg1 withRootPath:(id)arg2 keys:(id)arg3;
- (struct __CFData *)newXMPFromData:(id)arg1 preserveExistingXMPMetadata:(BOOL)arg2;
- (void)setDocumentCatalogMetadata:(id)arg1 withNSpace:(id)arg2 prefix:(id)arg3 rootPath:(id)arg4;
- (id)documentCatalogMetadataForRootPath:(id)arg1 withKeys:(id)arg2;
- (long long)preferredPageMode;
- (long long)preferredPageLayout;
- (id)unsupportedFeatures;
- (BOOL)wantsDisplayListCaching;
- (void)setWantsDisplayListCaching:(BOOL)arg1;
- (BOOL)hasOpenPopupAnnotations;
- (BOOL)hasTextAnnotations;
- (BOOL)hasMarkupAnnotations;
- (void)setPrintScalingMode:(long long)arg1 forPrintOperation:(id)arg2;
- (void)setAutoRotate:(BOOL)arg1 forPrintOperation:(id)arg2;
- (void)cleanupAfterPrintOperation:(id)arg1;
- (id)getPrintOperationForPrintInfo:(id)arg1 autoRotate:(BOOL)arg2;
- (id)findStrings:(id)arg1 withinSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)annotationsForFieldName:(id)arg1;
- (id)PDFDocumentPrintJobTitle:(id)arg1;
- (id)getNearestOutline:(id)arg1 forDestination:(id)arg2;
- (BOOL)findOnPage;
- (void)cleanupFind;
- (void)scheduledFindOnPage:(id)arg1;
- (void)coreFindStrings:(id)arg1;
- (void)coreFindString:(id)arg1;
- (void)normalizeFindOptions:(unsigned long long)arg1;
- (void)extendAppSandboxForPageIndex:(unsigned long long)arg1;
- (struct _xpc_connection_s *)fileRefsValidatorServiceConnection;
- (id)selectionFromPage:(id)arg1 atPoint:(struct CGPoint)arg2 toPage:(id)arg3 atPoint:(struct CGPoint)arg4 type:(int)arg5;
- (void)noteUnsupportedFeature:(id)arg1;
- (void)enqueueLayoutThreadForPage:(id)arg1 forPDFView:(id)arg2;
- (id)pageLayoutThreadQueue;
- (void)enqueueDataDetectionForPage:(id)arg1 forPDFView:(id)arg2;
- (id)dataDetectorQueue;
- (struct __DDScanner *)dataDetector;
- (Class)annotationSubclassForClass:(Class)arg1;
- (id)pageForOriginalIndex:(unsigned long long)arg1;
- (BOOL)hasText;
- (long long)indexOfLastPageRemoved;
- (unsigned long long)originalPageCount;
- (struct __CFDictionary *)gcCreateInfoDictionary;
- (BOOL)writeToConsumer:(struct CGDataConsumer *)arg1 withOptions:(id)arg2;
- (BOOL)pageSortsAnnotations;
- (void)setPageSortsAnnotations:(BOOL)arg1;
- (id)pageFromPageDictionary:(struct CGPDFDictionary *)arg1;
- (struct _NSRange)pageSubrange;
- (void)setPageSubrange:(struct _NSRange)arg1;
- (void)freePDFData;
- (void)createPageArray;
- (id)formData;
- (BOOL)useCorePDF;
- (void)setUseCorePDF:(BOOL)arg1;
- (BOOL)setDocumentRef:(struct CGPDFDocument *)arg1;
- (struct CGDataProvider *)dataProvider;
- (void)commonInit;
- (id)initWithPDFDocumentRef:(struct CGPDFDocument *)arg1;

@end

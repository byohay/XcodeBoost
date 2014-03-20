//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSURL, NSURLAuthenticationChallenge, NSURLCredential, NSURLProtectionSpace, NSURLResponse;

@protocol NDBackgroundSessionClient <NSObject>
- (void)credStorage_setDefaultCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_defaultCredentialForProtectionSpace:(NSURLProtectionSpace *)arg1 reply:(void (^)(NSURLCredential *))arg2;
- (void)credStorage_removeCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_setCredential:(NSURLCredential *)arg1 forProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)credStorage_allCredentialsWithReply:(void (^)(NSDictionary *))arg1;
- (void)credStorage_credentialsForProtectionSpace:(NSURLProtectionSpace *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)credStorage_getInitialCredentialDictionariesWithReply:(void (^)(NSDictionary *, NSDictionary *))arg1;
- (void)backgroundSessionDidFinishAppWake:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)backgroundSessionDidStartAppWake:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(NSURL *)arg2 reply:(void (^)(void))arg3;
- (void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(NSError *)arg2 reply:(void (^)(void))arg3;
- (void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 reply:(void (^)(long long, NSURLCredential *))arg3;
- (void)backgroundTaskDidSuspend:(unsigned long long)arg1;
- (void)backgroundTaskDidResume:(unsigned long long)arg1;
@end

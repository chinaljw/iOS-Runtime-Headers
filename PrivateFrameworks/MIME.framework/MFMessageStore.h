/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MFMessageStoreIntKeyCaches, MFMessageStoreObjectCaches, NSMutableSet, NSString;

@interface MFMessageStore : NSObject <NSCopying> {
    NSMutableSet *_uniqueStrings;
    MFMessageStoreIntKeyCaches *intKeyCaches;
    MFMessageStoreObjectCaches *objectCaches;
}

@property(retain) MFMessageStoreIntKeyCaches * intKeyCaches;
@property(retain) MFMessageStoreObjectCaches * objectCaches;
@property(copy) NSString * storagePath;

+ (Class)classForMimePart;
+ (Class)headersClass;
+ (void)setDefaultMessageHeadersClass:(Class)arg1;

- (id)_bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (void)_flushAllCaches;
- (void)_flushAllMessageData;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3;
- (id)additionalHeadersForForwardOfMessage:(id)arg1;
- (id)additionalHeadersForReplyOfMessage:(id)arg1;
- (id)bestAlternativeForPart:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (BOOL)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 didDownload:(BOOL*)arg6;
- (BOOL)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 withConsumer:(id)arg3 downloadIfNecessary:(BOOL)arg4;
- (void)dealloc;
- (id)decryptedTopLevelPartForPart:(id)arg1;
- (id)defaultAlternativeForPart:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (BOOL)hasCompleteDataForMimePart:(id)arg1;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)init;
- (id)intKeyCaches;
- (id)objectCaches;
- (void)setIntKeyCaches:(id)arg1;
- (void)setMessageClass:(Class)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (void)setObjectCaches:(id)arg1;
- (void)setStoragePath:(id)arg1;
- (id)storagePath;
- (id)uniquedString:(id)arg1;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1;

@end
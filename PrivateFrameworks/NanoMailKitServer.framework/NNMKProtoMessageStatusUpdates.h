/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NSData, NSMutableArray;

@interface NNMKProtoMessageStatusUpdates : PBCodable <NSCopying> {
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    } _has;
    NSMutableArray *_messageStatusUpdates;
}

@property(retain) NSData * dateSynced;
@property unsigned int fullSyncVersion;
@property(readonly) BOOL hasDateSynced;
@property BOOL hasFullSyncVersion;
@property(retain) NSMutableArray * messageStatusUpdates;

- (void).cxx_destruct;
- (void)addMessageStatusUpdate:(id)arg1;
- (void)clearMessageStatusUpdates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasDateSynced;
- (BOOL)hasFullSyncVersion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageStatusUpdateAtIndex:(unsigned int)arg1;
- (id)messageStatusUpdates;
- (unsigned int)messageStatusUpdatesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)setMessageStatusUpdates:(id)arg1;
- (void)writeTo:(id)arg1;

@end

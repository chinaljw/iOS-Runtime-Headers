/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class AVAssetCache, NSObject<OS_dispatch_queue>, NSString;

@interface RUNetworkPlaybackController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    AVAssetCache *_assetCache;
    NSString *_highQualityAssetFlavor;
    double _minimumBitrateForHighQuality;
}

@property(readonly) AVAssetCache * assetCache;
@property(copy,readonly) NSString * highQualityAssetFlavor;
@property(readonly) double minimumBitrateForHighQuality;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_init;
- (void)_radioStoreBagDidLoadNotification:(id)arg1;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (id)assetCache;
- (void)dealloc;
- (id)highQualityAssetFlavor;
- (id)init;
- (double)minimumBitrateForHighQuality;

@end

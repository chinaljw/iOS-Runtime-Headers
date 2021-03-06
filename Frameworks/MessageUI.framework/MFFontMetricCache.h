/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSMutableDictionary, NSString;

@interface MFFontMetricCache : NSObject {
    NSMutableDictionary *_metricCacheDictionary;
    NSString *_preferredSizeValidationKey;
}

+ (id)sharedFontMetricCache;

- (void)_didReceivePreferredFontChangedNotification:(id)arg1;
- (void)_invalidateCache;
- (float)cachedFloat:(id)arg1 forKey:(id)arg2;
- (id)cachedFont:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (BOOL)ensureCacheIsValid;
- (id)init;

@end

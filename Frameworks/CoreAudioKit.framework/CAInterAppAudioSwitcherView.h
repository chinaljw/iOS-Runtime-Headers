/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@class CAIAANodeContainer, CAIAANodeInfo, NSString, NSTimer, UIPageControl;

@interface CAInterAppAudioSwitcherView : UIView <UIScrollViewDelegate> {
    CAIAANodeInfo *info;
    BOOL isHostConnected;
    CAIAANodeContainer *nodeView;
    struct OpaqueAudioComponentInstance { } *outputUnit;
    UIPageControl *pageControl;
    NSTimer *refreshTimer;
    BOOL showingAppNames;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(getter=isShowingAppNames) BOOL showingAppNames;
@property(readonly) Class superclass;

- (void)appHasGoneForeground;
- (void)appHasGoneInBackground;
- (void)audioUnitPropertyChangedListener:(void*)arg1 unit:(struct OpaqueAudioComponentInstance { }*)arg2 propID:(unsigned long)arg3 scope:(unsigned long)arg4 element:(unsigned long)arg5;
- (void)changePage:(id)arg1;
- (float)contentWidth;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)initialize;
- (BOOL)isHostConnected;
- (BOOL)isShowingAppNames;
- (void)layoutSubviews;
- (void)nodePressed:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeFromSuperview;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance { }*)arg1;
- (void)setShowingAppNames:(BOOL)arg1;
- (void)startTimer;
- (void)updateInfo;
- (void)updateNodeList;

@end

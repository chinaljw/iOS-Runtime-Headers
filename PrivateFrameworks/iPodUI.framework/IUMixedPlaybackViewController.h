/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUMediaEntitySpecifier, IUCoverFlowViewController;

@interface IUMixedPlaybackViewController : IUPlaybackViewController <IUCoverFlowOwner> {
    IUMediaEntitySpecifier *_albumContextSpecifier;
    BOOL _animateREO;
    BOOL _nextPushWillZoomArtwork;
    IUMediaEntitySpecifier *_playlistContextSpecifier;
    BOOL _showFlipperHint;
    IUCoverFlowViewController *_transferredCoverFlowController;
}

@property(retain) IUCoverFlowViewController * coverFlowViewController;
@property(readonly) BOOL isShowingCoverFlow;
@property BOOL nextPushWillZoomArtwork;

- (BOOL)IUShouldApplyInterfaceStyle;
- (void)_backOfAlbumTrackChangeNotification:(id)arg1;
- (void)_exitToAlbumContext:(id)arg1 animated:(BOOL)arg2;
- (void)_exitToPlaylistContext:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_isExistingGeniusMixForDataSource:(id)arg1;
- (void)_playlistChangeNotification:(id)arg1;
- (BOOL)_previousViewControllerIsActiveGeniusMix;
- (void)_reloadTVOutForQuery:(id)arg1;
- (void)_setAnimatesForResumeEventsOnly:(BOOL)arg1;
- (void)_setFakeItemForDataSource:(id)arg1;
- (void)_updateAnimateForResumeEventsOnly;
- (id)coverFlowViewController;
- (void)dealloc;
- (void)exitPlayerAnimated:(BOOL)arg1;
- (id)init;
- (BOOL)isShowingCoverFlow;
- (id)newMediaNavigationItem;
- (id)newTransitionControllerForChangeToInterfaceOrientation:(int)arg1 fromInterfaceOrientation:(int)arg2;
- (id)newTransitionControllerForChangeToItem:(id)arg1 fromItem:(id)arg2;
- (id)newViewControllerForItem:(id)arg1 interfaceOrientation:(int)arg2 reusingController:(id)arg3;
- (BOOL)nextPushWillZoomArtwork;
- (void)setCoverFlowViewController:(id)arg1;
- (void)setItem:(id)arg1 animated:(BOOL)arg2;
- (void)setNextPushWillZoomArtwork:(BOOL)arg1;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (unsigned int)transitionEffectForViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
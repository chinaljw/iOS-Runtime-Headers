/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLReorientingButton : UIButton  {
    BOOL _autorotationEnabled;
    BOOL _watchingOrientationChanges;
    int _orientation;
    float _hitRectExtension;
    BOOL _animatingOrientationChange;
    float _endCapRadius;
    struct CGPoint { 
        float x; 
        float y; 
    } _defaultAnchorCenter;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _defaultAnchorTransform;
}

@property BOOL autorotationEnabled;
@property float endCapRadius;
@property float hitRectExtension;

+ (void)_initializeSafeCategory;

- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEndCapRadius:(float)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForOrientation:(int)arg1;
- (float)endCapRadius;
- (void)stopWatchingDeviceOrientationChanges;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_transformForOrientation:(int)arg1 rotationMode:(int)arg2;
- (void)_setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1 rotationMode:(int)arg2;
- (void)rotationAnimationDidStop;
- (int)_modeForRotationFromOrientation:(int)arg1 toOrientation:(int)arg2;
- (float)hitRectExtension;
- (void)startWatchingDeviceOrientationChanges;
- (void)setHitRectExtension:(float)arg1;
- (void)setButtonOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_deviceOrientationChanged:(id)arg1;
- (BOOL)autorotationEnabled;
- (void)setAutorotationEnabled:(BOOL)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSTimer, UIScrollView;

@interface PLAutoScroller : NSObject {
    NSTimer *_autoscrollTimer;
    struct CGPoint { 
        float x; 
        float y; 
    } _targetPoint;
    UIScrollView *_targetScrollView;
    float _thresholdDistance;
}

@property struct CGPoint { float x1; float x2; } targetPoint;
@property(readonly) float thresholdDistance;

- (void)_stopAutoscrollTimer;
- (void)_updateAutoscrollTimer:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTargetScrollView:(id)arg1 thresholdDistance:(float)arg2;
- (void)setTargetPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopAndInvalidate;
- (struct CGPoint { float x1; float x2; })targetPoint;
- (float)thresholdDistance;

@end

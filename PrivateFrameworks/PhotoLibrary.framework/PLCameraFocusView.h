/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAKeyframeAnimation, NSArray;



@interface PLCameraFocusView : UIView 
{
    NSArray *_images;
    CAKeyframeAnimation *_contentsAnimation;
    CAKeyframeAnimation *_boundsAnimation;
    double _animationStartTime;
    BOOL _fadingOut;
}


- (id)_createContentsAnimation;
- (id)_createBoundsAnimation;
- (void)_fadeOut;
- (void)_fadeOutDidFinish;
- (id)init:(BOOL)arg1;
- (void)scaleFrame:(float)arg1 reposition:(BOOL)arg2;
- (void)focusDidEnd;
- (void)startAnimating;
- (void)stopAnimating;
- (void)dealloc;

@end
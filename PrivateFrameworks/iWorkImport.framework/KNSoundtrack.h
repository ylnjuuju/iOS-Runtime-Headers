/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray;

@interface KNSoundtrack : TSPObject <NSCopying> {
    NSArray *mMedia;
    int mMode;
    float mVolume;
}

@property(copy) NSArray * media;
@property int mode;
@property float volume;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithSoundtrackMedia:(id)arg1 context:(id)arg2;
- (id)media;
- (int)mode;
- (void)saveToArchiver:(id)arg1;
- (void)setMedia:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
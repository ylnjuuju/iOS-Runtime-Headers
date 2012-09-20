/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSDictionary;

@interface OSDSensors : NSObject  {
    NSDictionary *syntheticSensors;
}

@property(copy) NSDictionary * syntheticSensors;

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (id)sensorNamesForType:(int)arg1;
- (float)readSensor:(id)arg1 type:(int)arg2;
- (id)readSensor:(id)arg1 type:(int)arg2 error:(id*)arg3;
- (id)getSensorsForType:(int)arg1 sortByID:(bool)arg2;
- (id)syntheticSensors;
- (void)setSyntheticSensors:(id)arg1;

@end
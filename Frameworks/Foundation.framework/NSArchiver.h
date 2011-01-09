/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSArchiver : NSCoder 
{
    void *mdata;
    void *pointerTable;
    void *stringTable;
    void *ids;
    void *map;
    void *replacementTable;
    void *reserved;
}

+ (void)encodeClassName:(id)arg1 intoClassName:(id)arg2;
+ (id)classNameEncodedForTrueClassName:(id)arg1;
+ (BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;
+ (void)initialize;

- (id)initForWritingWithMutableData:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeObject:(id)arg1;
- (id)archiverData;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (void)encodeClassName:(id)arg1 intoClassName:(id)arg2;
- (id)classNameEncodedForTrueClassName:(id)arg1;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(NSUInteger)arg2 at:(const void*)arg3;
- (NSInteger)versionForClassName:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)finalize;
- (void)encodeConditionalObject:(id)arg1;
- (id)data;
- (void)dealloc;

@end
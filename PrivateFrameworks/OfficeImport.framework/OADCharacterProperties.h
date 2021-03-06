/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCharacterProperties : OADProperties <OADEffectsParent> {
    float mBaseline;
    NSString *mBidiFont;
    unsigned char mCaps;
    OADHyperlink *mClickHyperlink;
    NSString *mEastAsianFont;
    NSArray *mEffects;
    OADFill *mFill;
    unsigned char mFormatKerningType;
    unsigned char mFormatType;
    NSString *mHAnsiFont;
    unsigned int mHasBaseline;
    unsigned int mHasCaps;
    unsigned int mHasFormatKerningType;
    unsigned int mHasFormatType;
    unsigned int mHasHighlight;
    unsigned int mHasIsBold;
    unsigned int mHasIsHorizontalNormalized;
    unsigned int mHasIsItalic;
    unsigned int mHasIsRightToLeft;
    unsigned int mHasIsVerticalText;
    unsigned int mHasKerning;
    unsigned int mHasLanguage;
    unsigned int mHasOpacity;
    unsigned int mHasSize;
    unsigned int mHasSpacing;
    unsigned int mHasStrikeThroughType;
    unsigned int mHasUnderlineFill;
    unsigned int mHasUnderlineStroke;
    unsigned int mHasUnderlineType;
    OADColor *mHighlight;
    OADHyperlink *mHoverHyperlink;
    unsigned int mIsBold;
    unsigned int mIsHorizontalNormalized;
    unsigned int mIsItalic;
    unsigned int mIsRightToLeft;
    unsigned int mIsVerticalText;
    int mLanguage;
    NSString *mLatinFont;
    float mOpacity;
    float mSize;
    float mSpacing;
    unsigned char mStrikeThroughType;
    OADStroke *mStroke;
    NSString *mSymbolFont;
    OADFill *mUnderlineFill;
    OADStroke *mUnderlineStroke;
    unsigned char mUnderlineType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (float)baseline;
- (id)bidiFont;
- (unsigned char)caps;
- (id)clickHyperlink;
- (void)dealloc;
- (id)description;
- (id)eastAsianFont;
- (id)effects;
- (id)fill;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned char)formatKerningType;
- (unsigned char)formatType;
- (id)hansiFont;
- (BOOL)hasBaseline;
- (BOOL)hasBidiFont;
- (BOOL)hasCaps;
- (BOOL)hasEastAsianFont;
- (BOOL)hasEffects;
- (BOOL)hasFill;
- (BOOL)hasFormatKerningType;
- (BOOL)hasFormatType;
- (BOOL)hasHAnsiFont;
- (BOOL)hasHighlight;
- (BOOL)hasIsBold;
- (BOOL)hasIsHorizontalNormalized;
- (BOOL)hasIsItalic;
- (BOOL)hasIsRightToLeft;
- (BOOL)hasIsVerticalText;
- (BOOL)hasLanguage;
- (BOOL)hasLatinFont;
- (BOOL)hasOpacity;
- (BOOL)hasSize;
- (BOOL)hasSpacing;
- (BOOL)hasStrikeThroughType;
- (BOOL)hasStroke;
- (BOOL)hasSymbolFont;
- (BOOL)hasUnderlineFill;
- (BOOL)hasUnderlineStroke;
- (BOOL)hasUnderlineType;
- (unsigned int)hash;
- (id)highlight;
- (id)hoverHyperlink;
- (id)initWithDefaults;
- (BOOL)isAnyCharacterPropertyOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isBold;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHorizontalNormalized;
- (BOOL)isItalic;
- (BOOL)isRightToLeft;
- (BOOL)isVerticalText;
- (int)language;
- (id)latinFont;
- (float)opacity;
- (void)overrideWithCharacterProperties:(id)arg1;
- (void)overrideWithProperties:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setBaseline:(float)arg1;
- (void)setBidiFont:(id)arg1;
- (void)setCaps:(unsigned char)arg1;
- (void)setClickHyperlink:(id)arg1;
- (void)setEastAsianFont:(id)arg1;
- (void)setEffects:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setFormatKerningType:(unsigned char)arg1;
- (void)setFormatType:(unsigned char)arg1;
- (void)setHAnsiFont:(id)arg1;
- (void)setHighlight:(id)arg1;
- (void)setHoverHyperlink:(id)arg1;
- (void)setIsBold:(BOOL)arg1;
- (void)setIsHorizontalNormalized:(BOOL)arg1;
- (void)setIsItalic:(BOOL)arg1;
- (void)setIsRightToLeft:(BOOL)arg1;
- (void)setIsVerticalText:(BOOL)arg1;
- (void)setLanguage:(int)arg1;
- (void)setLatinFont:(id)arg1;
- (void)setOpacity:(float)arg1;
- (void)setSize:(float)arg1;
- (void)setSpacing:(float)arg1;
- (void)setStrikeThroughType:(unsigned char)arg1;
- (void)setStroke:(id)arg1;
- (void)setSymbolFont:(id)arg1;
- (void)setUnderlineFill:(id)arg1;
- (void)setUnderlineStroke:(id)arg1;
- (void)setUnderlineType:(unsigned char)arg1;
- (float)size;
- (float)spacing;
- (unsigned char)strikeThroughType;
- (id)stroke;
- (id)symbolFont;
- (id)underlineFill;
- (id)underlineStroke;
- (unsigned char)underlineType;

@end

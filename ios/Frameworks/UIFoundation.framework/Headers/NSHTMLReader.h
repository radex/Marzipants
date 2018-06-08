//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMDocument, DOMRange, NSData, NSDictionary, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSString, NSURL, WebDataSource, WebView;

@interface NSHTMLReader : NSObject
{
    NSMutableAttributedString *_attrStr;
    NSMutableDictionary *_documentAttrs;
    NSData *_data;
    NSURL *_baseURL;
    NSDictionary *_options;
    WebView *_webView;
    id _webDelegate;
    DOMDocument *_document;
    DOMRange *_domRange;
    NSMutableArray *_domStartAncestors;
    WebDataSource *_dataSource;
    NSString *_standardFontFamily;
    double _textSizeMultiplier;
    double _webViewTextSizeMultiplier;
    double _defaultTabInterval;
    double _defaultFontSize;
    double _minimumFontSize;
    NSMutableArray *_textLists;
    NSMutableArray *_textBlocks;
    NSMutableArray *_textTables;
    NSMutableDictionary *_textTableFooters;
    NSMutableArray *_textTableSpacings;
    NSMutableArray *_textTablePaddings;
    NSMutableArray *_textTableRows;
    NSMutableArray *_textTableRowArrays;
    NSMutableArray *_textTableRowBackgroundColors;
    NSMutableDictionary *_computedStylesForElements;
    NSMutableDictionary *_specifiedStylesForElements;
    NSMutableDictionary *_stringsForNodes;
    NSMutableDictionary *_floatsForNodes;
    NSMutableDictionary *_colorsForNodes;
    NSMutableDictionary *_attributesForElements;
    NSMutableDictionary *_elementIsBlockLevel;
    NSMutableDictionary *_fontCache;
    NSMutableArray *_writingDirectionArray;
    long long _domRangeStartIndex;
    long long _indexingLimit;
    long long _thumbnailLimit;
    long long _errorCode;
    long long _quoteLevel;
    struct {
        unsigned int isSoft:1;
        unsigned int reachedStart:1;
        unsigned int reachedEnd:1;
        unsigned int isIndexing:1;
        unsigned int isTesting:1;
        unsigned int hasTrailingNewline:1;
        unsigned int pad:26;
    } _flags;
}

+ (id)defaultParagraphStyle;
+ (void)initialize;
- (void)setMutableAttributedString:(id)arg1;
- (id)documentAttributes;
- (id)attributedString;
- (id)initWithDOMRange:(id)arg1;
- (id)initWithPath:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (void)_load;
- (void)_loadUsingWebKitOnMainThread;
- (void)_loadUsingLibXML2;
- (void)_parseLibXML2Node:(struct _xmlNode *)arg1;
- (void)_traverseLibXML2Node:(struct _xmlNode *)arg1 depth:(long long)arg2;
- (void)_processLibXML2TextNode:(struct _xmlNode *)arg1 content:(id)arg2;
- (void)_exitLibXML2ElementNode:(struct _xmlNode *)arg1 tag:(id)arg2 startIndex:(unsigned long long)arg3;
- (BOOL)_processLibXML2ElementNode:(struct _xmlNode *)arg1 tag:(id)arg2;
- (BOOL)_enterLibXML2ElementNode:(struct _xmlNode *)arg1 tag:(id)arg2;
- (void)_processLibXML2HeadElementNode:(struct _xmlNode *)arg1;
- (void)_processLibXML2MetaNode:(struct _xmlNode *)arg1;
- (void)_processLibXML2TitleNode:(struct _xmlNode *)arg1;
- (void)_addQuoteForLibXML2ElementNode:(struct _xmlNode *)arg1 opening:(BOOL)arg2 level:(long long)arg3;
- (void)_newLineForLibXML2ElementNode:(struct _xmlNode *)arg1;
- (void)_newParagraphForLibXML2ElementNode:(struct _xmlNode *)arg1 tag:(id)arg2 allowEmpty:(BOOL)arg3 suppressTrailingSpace:(BOOL)arg4;
- (void)_loadFromDOMRange;
- (void)_loadUsingWebKit;
- (id)_createWebArchiveForData:(id)arg1;
- (BOOL)_sanitizeWebArchiveDictionary:(id)arg1;
- (BOOL)_sanitizeWebArchiveArray:(id)arg1;
- (void)_adjustTrailingNewline;
- (void)_parseNode:(id)arg1;
- (void)_traverseFooterNode:(id)arg1 depth:(long long)arg2;
- (void)_traverseNode:(id)arg1 depth:(long long)arg2 embedded:(BOOL)arg3;
- (void)_processText:(id)arg1;
- (void)_exitElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4 startIndex:(unsigned long long)arg5;
- (void)_addMarkersToList:(id)arg1 range:(struct _NSRange)arg2;
- (BOOL)_processElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4;
- (void)_addTableCellForElement:(id)arg1;
- (void)_addTableForElement:(id)arg1;
- (BOOL)_enterElement:(id)arg1 tag:(id)arg2 display:(id)arg3 depth:(long long)arg4 embedded:(BOOL)arg5;
- (void)_processHeadElement:(id)arg1;
- (void)_processMetaElementWithName:(id)arg1 content:(id)arg2;
- (void)_fillInBlock:(id)arg1 forElement:(id)arg2 backgroundColor:(id)arg3 extraMargin:(double)arg4 extraPadding:(double)arg5 isTable:(BOOL)arg6;
- (void)_addValue:(id)arg1 forElement:(id)arg2;
- (void)_addQuoteForElement:(id)arg1 opening:(BOOL)arg2 level:(long long)arg3;
- (BOOL)_addAttachmentForElement:(id)arg1 URL:(id)arg2 needsParagraph:(BOOL)arg3 usePlaceholder:(BOOL)arg4;
- (void)_newTabForElement:(id)arg1;
- (void)_newLineForElement:(id)arg1;
- (void)_newParagraphForElement:(id)arg1 tag:(id)arg2 allowEmpty:(BOOL)arg3 suppressTrailingSpace:(BOOL)arg4 isEntering:(BOOL)arg5;
- (id)_attributesForElement:(id)arg1;
- (id)_computedAttributesForElement:(id)arg1;
- (id)_colorForNode:(id)arg1 property:(id)arg2;
- (id)_computedColorForNode:(id)arg1 property:(id)arg2;
- (id)_blockLevelElementForNode:(id)arg1;
- (BOOL)_elementHasOwnBackgroundColor:(id)arg1;
- (BOOL)_elementIsBlockLevel:(id)arg1;
- (BOOL)_getFloat:(double *)arg1 forNode:(id)arg2 property:(id)arg3;
- (BOOL)_getComputedFloat:(double *)arg1 forNode:(id)arg2 property:(id)arg3;
- (id)_stringForNode:(id)arg1 property:(id)arg2;
- (id)_computedStringForNode:(id)arg1 property:(id)arg2;
- (id)_specifiedStyleForElement:(id)arg1;
- (id)_computedStyleForElement:(id)arg1;
- (id)_childrenForNode:(id)arg1;
- (id)_webPreferences;
- (Class)_DOMHTMLTableCellElementClass;
- (Class)_webArchiveClass;
- (Class)_webViewClass;

@end


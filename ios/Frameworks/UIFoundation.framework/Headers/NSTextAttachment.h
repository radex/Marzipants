//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCoding-Protocol.h>
#import <UIFoundation/NSTextAttachmentContainer-Protocol.h>

@class NSData, NSFileWrapper, NSImage, NSString, NSTextAttachmentView;
@protocol NSTextAttachmentCell;

@interface NSTextAttachment : NSObject <NSTextAttachmentContainer, NSCoding>
{
    NSFileWrapper *_fileWrapper;
    id <NSTextAttachmentCell> _cell;
    struct {
        unsigned int cellWasExplicitlySet:1;
        unsigned int ignoresOrientation:1;
        unsigned int allowsEditingContents:1;
        unsigned int :29;
    } _flags;
    NSData *_data;
    NSString *_uti;
    NSString *_cacheKey;
    struct CGRect _bounds;
    double _layoutPadding;
    struct {
        unsigned int _allowsTextAttachmentView:1;
        unsigned int _embeddingType:4;
        unsigned int _standaloneAlignment:3;
    } _taFlags;
    NSImage *_image;
    NSTextAttachmentView *_wrapperView;
}

+ (void)registerTextAttachmentClass:(Class)arg1 forFileType:(id)arg2;
+ (Class)textAttachmentClassForFileType:(id)arg1;
+ (void)registerTextAttachmentViewProviderClass:(Class)arg1 forFileType:(id)arg2;
+ (Class)textAttachmentViewProviderClassForFileType:(id)arg1;
+ (id)imageCache;
+ (void)initialize;
@property(readonly, copy) NSString *description;
- (id)_textAttachmentCell;
@property(retain) id <NSTextAttachmentCell> attachmentCell;
- (BOOL)ignoresOrientation;
- (void)setIgnoresOrientation:(BOOL)arg1;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (BOOL)usesTextAttachmentView;
- (Class)textAttachmentViewProviderClass;
- (void)setAllowsTextAttachmentView:(BOOL)arg1;
- (BOOL)allowsTextAttachmentView;
- (void)setLineLayoutPadding:(double)arg1;
- (double)lineLayoutPadding;
- (void)setStandaloneAlignment:(long long)arg1;
- (long long)standaloneAlignment;
- (void)setEmbeddingType:(long long)arg1;
- (long long)embeddingType;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
@property struct CGRect bounds; // @dynamic bounds;
- (struct CGRect)drawingBounds;
- (void)setDrawingBounds:(struct CGRect)arg1;
@property(retain) NSImage *image; // @dynamic image;
- (void)_invalidateWrapperView;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain) NSFileWrapper *fileWrapper;
@property(copy) NSString *fileType; // @dynamic fileType;
@property(copy) NSData *contents; // @dynamic contents;
- (void)dealloc;
- (id)initWithFileWrapper:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)_image;
- (id)_cacheKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


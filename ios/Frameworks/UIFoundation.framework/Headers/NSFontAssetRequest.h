//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSProgressReporting-Protocol.h>

@class NSArray, NSMutableArray, NSProgress, NSString;

@interface NSFontAssetRequest : NSObject <NSProgressReporting>
{
    NSArray *_sourceFontDescriptors;
    NSMutableArray *_downloadedFontDescriptors;
    NSProgress *_progress;
    unsigned long long _options;
}

@property(copy) NSArray *downloadedFontDescriptors; // @synthesize downloadedFontDescriptors=_downloadedFontDescriptors;
- (void)downloadFontAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSProgress *progress;
- (void)dealloc;
- (id)initWithFontDescriptors:(id)arg1 options:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


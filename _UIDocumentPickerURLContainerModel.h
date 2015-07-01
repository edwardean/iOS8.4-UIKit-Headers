//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIDocumentPickerContainerModel.h>

@class NSArray, NSString, NSURL, _UIDocumentPickerDirectoryObserver;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel
{
    NSArray *_modelObjects;
    NSURL *_url;
    NSString *_displayTitle;
    _UIDocumentPickerDirectoryObserver *_observer;
}

+ (void)_tagColorsDidChange;
+ (id)_tagBlipColors;
+ (id)allTags;
+ (id)tagColorsByTag;
@property(retain, nonatomic) _UIDocumentPickerDirectoryObserver *observer; // @synthesize observer=_observer;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *modelObjects; // @synthesize modelObjects=_modelObjects;
- (_Bool)afterInitialUpdate;
- (id)description;
- (void)callUpdateHandlerWithNewItems:(id)arg1 diff:(id)arg2;
- (void)modelChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (_Bool)shouldShowContainerForType:(id)arg1;
- (_Bool)shouldAllowPickingType:(id)arg1;
- (id)_containerListDidChange;
- (void)refreshItem:(id)arg1 thumbnailOnly:(_Bool)arg2;
- (void)updateSortDescriptors;
- (void)stopMonitoringChanges;
- (id)scopes;
- (void)startMonitoringChanges;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end


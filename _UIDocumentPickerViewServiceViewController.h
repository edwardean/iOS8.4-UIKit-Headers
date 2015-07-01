//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "_UIDocumentPickerOverviewDelegate.h"
#import "_UIDocumentPickerRemoteViewControllerContaining.h"
#import "_UIDocumentPickerServiceViewController.h"
#import "_UIDocumentPickerViewController.h"

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerViewServiceViewController : UINavigationController <_UIDocumentPickerRemoteViewControllerContaining, _UIDocumentPickerOverviewDelegate, _UIDocumentPickerViewController, _UIDocumentPickerServiceViewController>
{
    _Bool _displayedAsMenu;
    _Bool _hasBeenDismissed;
    _Bool _showingSpinner;
    NSArray *_pickableTypes;
    unsigned long long _pickerMode;
    NSURL *_uploadURL;
    NSArray *_auxiliaryOptions;
    NSString *_currentPickerIdentifier;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
@property(nonatomic) _Bool showingSpinner; // @synthesize showingSpinner=_showingSpinner;
@property(nonatomic) _Bool hasBeenDismissed; // @synthesize hasBeenDismissed=_hasBeenDismissed;
@property(nonatomic) _Bool displayedAsMenu; // @synthesize displayedAsMenu=_displayedAsMenu;
@property(retain, nonatomic) NSString *currentPickerIdentifier; // @synthesize currentPickerIdentifier=_currentPickerIdentifier;
@property(retain, nonatomic, setter=_setAuxiliaryOptions:) NSArray *auxiliaryOptions; // @synthesize auxiliaryOptions=_auxiliaryOptions;
@property(copy, nonatomic) NSURL *uploadURL; // @synthesize uploadURL=_uploadURL;
- (void)_setPickerMode:(unsigned long long)arg1;
@property(nonatomic) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
- (void)_setPickableTypes:(id)arg1;
@property(copy, nonatomic) NSArray *pickableTypes; // @synthesize pickableTypes=_pickableTypes;
- (void)_checkFileStatus;
- (_Bool)_appIsSharingAware;
- (void)setNavigationItemSpinner:(_Bool)arg1;
@property(nonatomic) long long displayMode;
@property(nonatomic) int sortOrder;
- (void)_didSelectPicker;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_didSelectURL:(id)arg1;
- (void)_doneButton:(id)arg1;
- (void)_dismissViewController;
- (void)overviewController:(id)arg1 selectedAuxiliaryOptionWithIdentifier:(id)arg2;
- (void)overviewController:(id)arg1 selectedDocumentPickerWithIdentifier:(id)arg2;
- (void)_showLocationPopupFromBarButtonItem:(id)arg1 rect:(struct CGRect)arg2;
- (void)_showLocationPopup:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg1;
- (void)_presentError:(id)arg1 forThirdPartyPickerWithDescription:(id)arg2;
- (void)_didInstantiateThirdPartyPickerWithDescription:(id)arg1 viewController:(id)arg2;
- (void)_showPicker:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (_Bool)shouldShowSearch;
- (void)setupNavigationItemForPicker:(id)arg1 isRoot:(_Bool)arg2;
- (void)_showTopLevelViewController;
- (void)_willAppearInRemoteViewController;
- (void)_prepareForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_showDefaultPicker;
- (void)_setTintColor:(id)arg1;
- (void)_documentPickerDidDismiss;
- (void)dismissWithURL:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_dismissWithImportURL:(id)arg1;
- (void)_dismissWithFileProviderURL:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_createBookmarkAndDismissWithCloudURL:(id)arg1;
- (void)beginDownloadingURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id <_UIDocumentPickerViewControllerHost> hostingViewController;
- (void)_setUploadURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, UIBarButtonItem, UIGestureRecognizer, UIPopoverController, UIResponder, UISnapshotView, UIView;

@interface UISplitViewController : UIViewController <UIGestureRecognizerDelegate>
{
    id _delegate;
    UIBarButtonItem *_barButtonItem;
    UIBarButtonItem *_displayModeButtonItem;
    NSString *_buttonTitle;
    UIPopoverController *_hiddenPopoverController;
    UIView *_rotationSnapshotView;
    UIResponder *_postTransitionResponder;
    UISnapshotView *_collapsingMasterSnapshotView;
    UISnapshotView *_collapsingDetailSnapshotView;
    double _masterColumnWidth;
    float _gutterWidth;
    float _cornerRadius;
    long long _rotatingFromOrientation;
    long long _lastPresentedOrientation;
    struct CGRect _rotatingFromMasterViewFrame;
    struct CGRect _rotatingToMasterViewFrame;
    NSArray *_cornerImageViews;
    UIView *_underBarSeparatorView;
    unsigned long long _slideTransitionCount;
    UIView *_masterBackgroundView;
    _Bool _presentsInFadingPopover;
    _Bool _presentsWithGesture;
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;
    long long _preferredDisplayMode;
    long long _effectiveTargetDisplayMode;
    long long _pendingDisplayModeChangeCount;
    _Bool _useChangingBoundsLayout;
    struct {
        unsigned int validDelegateHiddenMasterOrientations:5;
        unsigned int delegateHiddenMasterOrientations:5;
        unsigned int delegateImplementsShouldHide:1;
        unsigned int hidden:3;
        unsigned int delegateHandlesTogglingMaster:1;
        unsigned int delegateProvidesBackgroundView:1;
        unsigned int delegateWantsUnSlideCallback:1;
        unsigned int masterOnSlide:1;
        unsigned int delegateWantsWillShowCallback:1;
        unsigned int delegateWantsWillHideCallback:1;
        unsigned int delegateWantsWillPresentCallback:1;
        unsigned int delegateWantsNavigationRequests:1;
        unsigned int resizesDetailOnSlide:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int disableDetailFrameChanges:1;
        unsigned int delegateWantsShowViewController:1;
        unsigned int delegateWantsPrivateShowViewController:1;
        unsigned int delegateWantsShowDetailViewController:1;
        unsigned int delegateWantsPrivateShowDetailViewController:1;
        unsigned int delegateWantsCollapseSecondaryViewController:1;
        unsigned int delegateWantsPrivateCollapseSecondaryViewController:1;
        unsigned int delegateWantsSeparateSecondaryViewController:1;
        unsigned int delegateWantsPrivateSeparateSecondaryViewController:1;
        unsigned int delegateWantsPrimaryViewControllerForCollapse:1;
        unsigned int delegateWantsPrivatePrimaryViewControllerForCollapse:1;
        unsigned int delegateWantsPrimaryViewControllerForExpanding:1;
        unsigned int delegateWantsPrivatePrimaryViewControllerForExpanding:1;
        unsigned int collapsedState:2;
        unsigned int primaryHidingState:2;
        unsigned int primaryHidingStateForCurrentOrientation:2;
        unsigned int delegateWantsWillChangeToDisplayMode:1;
        unsigned int delegateWantsTargetDisplayModeForAction:1;
        unsigned int pendingPresentMasterViewController:1;
        unsigned int pendingUpdateTargetDisplayMode:1;
        unsigned int collapsingClockwise:1;
        unsigned int firstResponderChangedFromPostTransitionResponder:1;
    } _splitViewControllerFlags;
    _Bool _resizeForKeyboard;
    NSString *_displayModeButtonItemTitle;
    double _preferredPrimaryColumnWidthFraction;
    double _minimumPrimaryColumnWidth;
    double _maximumPrimaryColumnWidth;
    UIViewController *__preservedDetailController;
    CDUnknownBlockType __didChangeBoundsBlock;
    CDUnknownBlockType __clearPreventRotationHook;
}

+ (_Bool)_optsOutOfPopoverControllerHierarchyCheck;
+ (double)_defaultGutterWidthInView:(id)arg1;
+ (_Bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)doesOverrideSupportedInterfaceOrientations;
+ (_Bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (_Bool)_forcePresentsWithGesture;
+ (_Bool)_forcePresentsInSlidingPopover;
@property(copy, nonatomic, setter=_setClearPreventRotationHook:) CDUnknownBlockType _clearPreventRotationHook; // @synthesize _clearPreventRotationHook=__clearPreventRotationHook;
@property(copy, nonatomic, getter=_didChangeBoundsBlock, setter=_setDidChangeBoundsBlock:) CDUnknownBlockType _didChangeBoundsBlock; // @synthesize _didChangeBoundsBlock=__didChangeBoundsBlock;
@property(retain, nonatomic, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController; // @synthesize _preservedDetailController=__preservedDetailController;
@property(nonatomic) _Bool resizeForKeyboard; // @synthesize resizeForKeyboard=_resizeForKeyboard;
@property(nonatomic) double maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property(nonatomic) double minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property(nonatomic) double preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property(copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle; // @synthesize _displayModeButtonItemTitle;
@property(nonatomic) _Bool presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property(nonatomic) id <UISplitViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(_Bool)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(_Bool)arg2;
- (void)_popoverController:(id)arg1 willAnimateToFrame:(struct CGRect)arg2;
- (struct CGRect)_detailViewFrameWithPopoverControllerFrame:(struct CGRect)arg1;
@property(nonatomic, setter=_setResizesDetailOnSlide:) _Bool _resizesDetailOnSlide;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (void)__viewWillLayoutSubviews;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateMasterViewControllerFrame;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)snapshotForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (void)snapshotAllViews;
- (void)snapshotMasterView;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_invalidateHidesMasterViewInOrientation:(long long)arg1;
- (_Bool)hidesMasterViewDuringRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (_Bool)revealsMasterViewDuringRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (_Bool)_isRotating;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations:(id)arg1;
- (_Bool)_shouldSynthesizeSupportedOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (double)_contentMarginForChildViewController:(id)arg1;
- (void)_updateChildContentMargins;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)popoverWillAppear:(id)arg1;
- (void)_presentGestureAttemptedWithPresentedPopoverController:(id)arg1;
- (struct CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (void)toggleMasterVisible:(id)arg1;
- (void)_dismissMasterViewController:(_Bool)arg1;
- (void)_presentMasterViewController:(_Bool)arg1;
- (_Bool)_isMasterPopoverVisible;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (_Bool)_shouldPreventAutorotation;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)displayModeButtonItem;
- (void)_updateDisplayModeButtonItem;
- (void)_triggerDisplayModeAction:(id)arg1;
- (long long)_effectiveTargetDisplayMode;
- (void)_cacheEffectiveTargetDisplayMode;
- (void)_updateTargetDisplayMode;
- (void)_displayModeDidChange;
- (void)_displayModeWillChangeTo:(long long)arg1;
- (void)_changeToDisplayMode:(long long)arg1 forCurrentOrientationOnly:(_Bool)arg2;
- (_Bool)_shouldModifyDisplayModeWhenRotating;
- (long long)_defaultTargetDisplayMode;
- (id)_defaultDisplayModes;
@property(readonly, nonatomic) long long displayMode;
@property(nonatomic) long long preferredDisplayMode;
- (_Bool)_effectivePresentsWithGesture;
@property(nonatomic, setter=_setPresentsInFadingPopover:) _Bool _presentsInFadingPopover;
@property(nonatomic) float gutterWidth;
- (float)preferredLeftColumnWidth;
- (void)setPreferredLeftColumnWidth:(float)arg1;
@property(nonatomic) float masterColumnWidth;
- (void)_showMasterViewAnimated:(_Bool)arg1;
@property(nonatomic) _Bool hidesMasterViewInPortrait;
@property(readonly, nonatomic) _Bool hidesMasterViewInLandscape;
- (id)detailViewController;
- (id)masterViewController;
- (_Bool)_hasMasterViewController;
- (void)_setupUnderBarSeparatorView;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)_removeCollapsingSnapshotViews;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didTransitionTraitCollection;
- (void)_transitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_invokeDidChangeBoundsBlock;
- (void)_willTransitionToWindowSize:(struct CGSize)arg1 oldWidthClass:(long long)arg2 newWidthClass:(long long)arg3;
- (void)_prepareForCompactLayout;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)_primaryContentResponder;
- (id)_childContainingSender:(id)arg1;
- (void)_setMasterOverrideTraitCollectionActive:(_Bool)arg1;
@property(copy, nonatomic) NSArray *viewControllers;
- (_Bool)_isBasicallyHorizontallyCompact;
- (void)_slideIn:(_Bool)arg1 viewController:(id)arg2 animated:(_Bool)arg3 totalDuration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_canSlideMaster;
- (_Bool)_canDisplayHostedMaster;
- (_Bool)_delegateUsesLegacySlideSPI;
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1;
- (void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2;
- (id)_secondaryViewControllerForCollapsing;
- (id)_primaryViewControllerForExpanding;
- (id)_primaryViewControllerForCollapsing;
- (void)_setCollapsedState:(long long)arg1;
- (_Bool)_isCollapsed;
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
- (double)_primaryColumnWidthForSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double primaryColumnWidth;
- (float)leftColumnWidth;
- (void)_viewControllerHiding:(id)arg1;
- (void)_setupHiddenPopoverControllerWithViewController:(id)arg1;
- (void)_removeRoundedCorners;
- (void)_setupRoundedCorners;
- (struct CGRect)_detailViewFrame;
- (struct CGRect)_detailViewFrame:(struct CGRect)arg1;
- (struct CGRect)_masterViewFrame;
- (struct CGRect)_masterViewFrame:(struct CGRect)arg1;
- (void)_addOrRemovePopoverPresentationGestureRecognizer;
- (void)_calculateDelegateHiddenMasterOrientations;
- (_Bool)_isHidesMasterInLandscapeValid;
- (_Bool)_isHidesMasterInPortraitValid;
- (id)_primaryDimmingView;
- (_Bool)_isMasterViewShown;
- (void)_setPrimaryHidingStateForCurrentOrientation:(long long)arg1;
- (long long)_primaryHidingStateForCurrentOrientation;
- (void)_setPrimaryHidingState:(long long)arg1;
- (long long)_primaryHidingState;
- (long long)_effectivePrimaryHidingState;
- (void)unloadViewForced:(_Bool)arg1;
- (_Bool)_isLandscape;
- (void)loadView;
- (_Bool)_shouldPersistViewWhenCoding;
- (void)_loadNewSubviews:(id)arg1;
- (void)loadSubviews;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonInit;
- (struct CGRect)_frameForChildContentContainer:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_allContainedViewControllers;
- (id)_additionalViewControllersToCheckForUserActivity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


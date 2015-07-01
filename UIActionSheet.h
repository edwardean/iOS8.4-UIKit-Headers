//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPopoverControllerDelegate.h"

@class NSMutableArray, NSString, UIAlertController, _UIAlertControllerShimPresenter, _UIWeakRef;

@interface UIActionSheet : UIView <UIPopoverControllerDelegate>
{
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    NSMutableArray *_actions;
    long long _cancelIndex;
    long long _firstOtherButtonIndex;
    long long _destructiveButtonIndex;
    long long _actionSheetStyle;
    id _context;
    _Bool _hasPreparedAlertActions;
    _Bool _isPresented;
    _Bool _alertControllerShouldDismiss;
    _Bool _handlingAlertActionShouldDismiss;
    _Bool _dismissingAlertController;
    _UIWeakRef *_weakDelegate;
}

+ (_Bool)_isAlertControllerShimClass;
+ (Class)_popoverControllerClass;
@property(retain, nonatomic) _UIWeakRef *weakDelegate; // @synthesize weakDelegate=_weakDelegate;
- (id)_alertController;
- (id)_addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)_buttonAtIndex:(long long)arg1;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)buttonAtIndex:(long long)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_contentView;
- (void)_setContentView:(id)arg1;
- (_Bool)_isSBAlert;
- (id)_attributedTitleString;
- (void)_setAttributedTitleString:(id)arg1;
- (void)setSelectedButtonGlyphHighlightedImage:(id)arg1;
- (void)setSelectedButtonGlyphImage:(id)arg1;
- (void)setIndexOfSelectedButton:(long long)arg1;
- (id)_indexesOfSelectedButtons;
- (void)_toggleButtonSelectionAtIndex:(unsigned long long)arg1;
- (void)_setIndexesOfSelectedButtons:(id)arg1;
- (_Bool)useThreeColumnsButtonsLayout;
- (void)setUseThreeColumnsButtonsLayout:(_Bool)arg1;
- (void)setInPopover:(_Bool)arg1;
- (void)presentSheetInContentView:(id)arg1;
- (id)_relinquishPopoverController;
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(long long)arg5 animated:(_Bool)arg6;
- (void)presentFromBarButtonItem:(id)arg1 direction:(unsigned long long)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(long long)arg4 animated:(_Bool)arg5;
- (void)setDimsBackground:(_Bool)arg1;
- (int)numberOfLinesInTitle;
- (void)setTitleMaxLineCount:(int)arg1;
- (id)_titleLabel;
- (void)setDimView:(id)arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)presentSheetInView:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (id)bodyText;
- (void)setBodyText:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)_didPresent;
- (void)_setIsPresented:(_Bool)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_dismissForTappedIndex:(long long)arg1;
- (_Bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (void)_prepareAlertActions;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)showInView:(id)arg1;
- (void)_showFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)showFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)showFromTabBar:(id)arg1;
- (void)showFromToolbar:(id)arg1;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic) long long firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
@property(nonatomic) long long destructiveButtonIndex;
@property(nonatomic) long long cancelButtonIndex;
@property(readonly, nonatomic) long long numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)addButtonWithTitle:(id)arg1;
@property(nonatomic) long long actionSheetStyle;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) id <UIActionSheetDelegate> delegate;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


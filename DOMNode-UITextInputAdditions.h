//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DOMNode.h"

#import "UIKeyInput.h"
#import "UIKeyboardInput.h"
#import "UITextInputPrivate.h"
#import "UITextInputTokenizer.h"

@class NSDictionary, NSString, UIColor, UIImage, UITextInteractionAssistant, UITextPosition, UITextRange, UIView;

@interface DOMNode (UITextInputAdditions) <UIKeyboardInput, UITextInputPrivate, UIKeyInput, UITextInputTokenizer>
- (id)textDocument;
@property(nonatomic) long long selectionAffinity;
- (_Bool)editing;
- (_Bool)editable;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (struct CGRect)caretRectForPosition:(id)arg1;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (_Bool)hasText;
- (void)unmarkText;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (void)moveDown;
- (void)moveUp;
- (void)moveLeft;
- (void)moveRight;
- (struct CGRect)_lastRectForRange:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(_Bool)arg3;
- (id)rangeOfEnclosingWord:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textInRange:(id)arg1;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy) UITextRange *selectedTextRange;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;
- (id)_textSelectingContainer;
- (void)setBecomesEditableWithGestures:(_Bool)arg1;
- (_Bool)becomesEditableWithGestures;
- (_Bool)isEditing;
- (_Bool)isEditable;
- (id)content;
- (void)updateSelection;
- (id)selectionView;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (_Bool)isAutoFillMode;
- (void)acceptedAutoFillWord:(id)arg1;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (void)updateAutoscroll:(id)arg1;
- (id)automaticallySelectedOverlay;
- (void)setInitialSelectionBehavior:(int)arg1;
- (int)initialSelectionBehavior;
@property(nonatomic) long long returnKeyType;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(nonatomic) id textSuggestionDelegate;
- (_Bool)isShowingPlaceholder;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (struct CGRect)caretRect;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1 inset:(double)arg2;
- (id)text;
- (void)setText:(id)arg1;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1 withInset:(double)arg2;
- (int)selectionState;
- (void)selectAll;
- (_Bool)selectionAtWordStart;
- (_Bool)selectionAtDocumentStart;
- (_Bool)hasSelection;
- (void)extendCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (struct _NSRange)selectionRange;
- (int)wordOffsetInRange:(id)arg1;
- (id)textColorForCaretSelection;
- (id)fontForCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)clearMarkedText;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;
- (id)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)uiWebDocumentView;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (void)handleKeyWebEvent:(id)arg1;
- (_Bool)requiresKeyEvents;
- (id)delegate;
- (void)setSecure:(_Bool)arg1;
- (id)textInputTraits;
- (void)setupPlaceholderTextIfNeeded;
- (_Bool)hasContent;
- (void)takeTraitsFrom:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool forceEnableDictation;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isSingleLineDocument;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) long long selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@end


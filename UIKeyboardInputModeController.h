//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIKeyboardInputMode;

@interface UIKeyboardInputModeController : NSObject
{
    UIKeyboardInputMode *_currentInputMode;
    NSArray *_inputModesWithoutHardwareSupport;
    NSArray *_allExtensions;
    NSArray *_allowedExtensions;
    _Bool _skipExtensionInputModes;
    _Bool _cacheNeedsRefresh;
    _Bool _shouldRunContinuousDiscovery;
    NSArray *keyboardInputModes;
    NSArray *keyboardInputModeIdentifiers;
    NSArray *enabledInputModes;
    NSArray *normalizedInputModes;
    NSArray *defaultKeyboardInputModes;
    NSArray *defaultRawInputModes;
    NSArray *defaultInputModes;
    NSArray *defaultNormalizedInputModes;
    UIKeyboardInputMode *_lastUsedInputMode;
    NSString *_inputModeContextIdentifier;
    id <UIKeyboardInputModeControllerDelegate> _delegate;
    UIKeyboardInputMode *_nextInputModeToUse;
    UIKeyboardInputMode *_currentUsedInputMode;
    id _extensionMatchingContext;
}

+ (id)sharedInputModeController;
@property(retain, nonatomic) id extensionMatchingContext; // @synthesize extensionMatchingContext=_extensionMatchingContext;
@property(retain, nonatomic) UIKeyboardInputMode *currentUsedInputMode; // @synthesize currentUsedInputMode=_currentUsedInputMode;
@property(retain, nonatomic) UIKeyboardInputMode *nextInputModeToUse; // @synthesize nextInputModeToUse=_nextInputModeToUse;
@property(nonatomic) id <UIKeyboardInputModeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldRunContinuousDiscovery; // @synthesize shouldRunContinuousDiscovery=_shouldRunContinuousDiscovery;
@property(copy, nonatomic) NSString *inputModeContextIdentifier; // @synthesize inputModeContextIdentifier=_inputModeContextIdentifier;
@property(retain, nonatomic) UIKeyboardInputMode *lastUsedInputMode; // @synthesize lastUsedInputMode=_lastUsedInputMode;
@property(readonly, nonatomic) NSArray *allowedExtensions; // @synthesize allowedExtensions=_allowedExtensions;
@property(retain) NSArray *defaultNormalizedInputModes; // @synthesize defaultNormalizedInputModes;
@property(retain) NSArray *defaultInputModes; // @synthesize defaultInputModes;
@property(copy, nonatomic) NSArray *defaultRawInputModes; // @synthesize defaultRawInputModes;
@property(retain) NSArray *defaultKeyboardInputModes; // @synthesize defaultKeyboardInputModes;
@property(retain) NSArray *normalizedInputModes; // @synthesize normalizedInputModes;
@property(retain) NSArray *enabledInputModes; // @synthesize enabledInputModes;
@property(retain) NSArray *keyboardInputModeIdentifiers; // @synthesize keyboardInputModeIdentifiers;
@property(retain) NSArray *keyboardInputModes; // @synthesize keyboardInputModes;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)performWithForcedExtensionInputModes:(CDUnknownBlockType)arg1;
- (void)performWithoutExtensionInputModes:(CDUnknownBlockType)arg1;
- (void)switchToCurrentSystemInputMode;
- (void)updateCurrentAndNextInputModes;
- (void)updateLastUsedInputMode:(id)arg1;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1;
- (id)nextInputModeToUseForTraits:(id)arg1;
- (void)_setCurrentAndNextInputModePreference;
- (id)nextInputModeFromList:(id)arg1 withFilter:(unsigned long long)arg2 withTraits:(id)arg3;
- (id)extensionInputModes;
- (_Bool)verifyKeyboardExtensionsWithApp;
- (_Bool)deviceStateIsLocked;
- (id)_MCFilteredExtensionIdentifiers;
- (void)_removeExtensions:(id)arg1;
- (void)_beginContinuousDiscoveryIfNeeded;
- (void)_clearAllExtensionIfNeeded;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (id)suggestedInputModesForPreferredLanguages;
- (id)preferredLanguages;
- (id)suggestedInputModesForCurrentLocale;
- (id)suggestedInputModesForCurrentLocale:(_Bool)arg1 fallbackToDefaultInputModes:(_Bool)arg2;
- (id)defaultEnabledInputModesForCurrentLocale:(_Bool)arg1;
- (_Bool)currentLocaleRequiresExtendedSetup;
- (void)updateCurrentInputMode:(id)arg1;
- (void)_setCurrentInputMode:(id)arg1 force:(_Bool)arg2;
@property(retain) UIKeyboardInputMode *currentInputMode;
@property(readonly, nonatomic) _Bool containsDictationSupportedInputMode;
@property(readonly, nonatomic) UIKeyboardInputMode *currentPublicInputMode;
@property(readonly, nonatomic) UIKeyboardInputMode *currentSystemInputMode;
@property(readonly, nonatomic) UIKeyboardInputMode *hardwareInputMode;
- (id)_systemInputModePassingTest:(CDUnknownBlockType)arg1;
@property(nonatomic) UIKeyboardInputMode *currentInputModeInPreference;
@property(readonly) NSArray *activeInputModeIdentifiers;
- (id)activeInputModes;
- (id)inputModeWithIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;
- (_Bool)identifierIsValidSystemInputMode:(id)arg1;
- (id)identifiersFromInputModes:(id)arg1;
@property(readonly) NSArray *enabledInputModeLanguages;
@property(readonly) NSArray *normalizedEnabledInputModeIdentifiers;
@property(readonly) NSArray *enabledInputModeIdentifiers;
- (id)enabledInputModeIdentifiers:(_Bool)arg1;
@property(readonly) NSArray *inputModesWithoutHardwareSupport;
@property(readonly) NSArray *supportedInputModeIdentifiers;

@end


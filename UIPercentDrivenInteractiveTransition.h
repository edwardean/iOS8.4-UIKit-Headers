//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerInteractiveTransitioning.h"

@class NSString, NSUUID;

@interface UIPercentDrivenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning>
{
    double _duration;
    _Bool _didCommitAnimations;
    _Bool __transitionInterrupted;
    double _completionSpeed;
    long long _completionCurve;
    NSString *__originalFillMode;
    NSUUID *__uuid;
}

@property(nonatomic, getter=_isTransitionInterrupted, setter=_setTransitionInterrupted:) _Bool _transitionInterrupted; // @synthesize _transitionInterrupted=__transitionInterrupted;
@property(retain, nonatomic, setter=_setUuid:) NSUUID *_uuid; // @synthesize _uuid=__uuid;
@property(retain, nonatomic, setter=_setOriginalFillMode:) NSString *_originalFillMode; // @synthesize _originalFillMode=__originalFillMode;
@property(nonatomic) long long completionCurve; // @synthesize completionCurve=_completionCurve;
@property(nonatomic) double completionSpeed; // @synthesize completionSpeed=_completionSpeed;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransition:(id)arg1 containerViews:(id)arg2 animation:(CDUnknownBlockType)arg3;
- (void)startInteractiveTransition:(id)arg1;
- (void)_stopInteractiveTransition;
- (void)_stopInteractiveTransition:(id)arg1;
- (void)_updateInteractiveTransition:(id)arg1 percent:(double)arg2 isFinished:(_Bool)arg3 didComplete:(_Bool)arg4;
- (void)_setDuration:(double)arg1;
@property(readonly) double duration;
@property(readonly) double percentComplete;
- (void)_resetInteractionController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


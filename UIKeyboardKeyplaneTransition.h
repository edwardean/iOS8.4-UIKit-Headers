//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, UIKBTree, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeyplaneTransition : NSObject
{
    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    UIKBTree *_start;
    UIKBTree *_end;
    UIView *_startView;
    UIView *_endView;
    CDUnknownBlockType _completionBlock;
    id <UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
    _Bool _initiallyAtEnd;
}

@property(nonatomic) _Bool initiallyAtEnd; // @synthesize initiallyAtEnd=_initiallyAtEnd;
@property(nonatomic) id <UIKeyboardKeyplaneTransitionDelegate> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (_Bool)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)finishWithProgress:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)transitionToFinalState:(id)arg1;
- (void)finalizeTransition;
- (void)removeAllAnimations;
- (void)updateWithProgress:(double)arg1;
- (void)commitTransitionRebuild;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
@property(readonly, nonatomic) double endHeight;
@property(readonly, nonatomic) double startHeight;
- (void)dealloc;

@end


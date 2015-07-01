//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_UIRemoteViewFocusProxy.h"
#import "_UIScrollToTopView.h"

@class NSString, _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface _UISizeTrackingView : UIView <_UIScrollToTopView, _UIRemoteViewFocusProxy>
{
    _UIRemoteViewController *_remoteViewController;
    id _viewControllerOperatorProxy;
    id _textEffectsOperatorProxy;
    _Bool _hasIntrinsicContentSize;
    struct CGSize _intrinsicContentSize;
}

+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;
@property(readonly, nonatomic) _UIRemoteViewController *remoteViewController;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (_Bool)isScrollEnabled;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (void)_updateTextEffectsGeometries:(struct CGRect)arg1;
- (void)updateIntrinsicContentSize:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


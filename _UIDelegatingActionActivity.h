//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class UIDocumentInteractionController;

__attribute__((visibility("hidden")))
@interface _UIDelegatingActionActivity : UIActivity
{
    UIDocumentInteractionController *_documentInteractionController;
    SEL _action;
}

- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithDocumentInteractionController:(id)arg1 forAction:(SEL)arg2;

@end


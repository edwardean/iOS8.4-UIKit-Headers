//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIPickerViewTopFrame : UIView
{
    UIImage *_leftImage;
    UIImage *_middleImage;
    UIImage *_rightImage;
    double _inset;
    double _shift;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setShift:(double)arg1;
- (void)setInset:(double)arg1;
- (void)dealloc;
- (void)setLeftImage:(id)arg1 middleImage:(id)arg2 rightImage:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


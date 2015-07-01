//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSBundleProxy;

__attribute__((visibility("hidden")))
@interface _UIActivityBundleHelper : NSObject
{
    LSBundleProxy *_bundleProxy;
}

+ (id)activityBundleHelperForExtension:(id)arg1;
@property(retain, nonatomic) LSBundleProxy *bundleProxy; // @synthesize bundleProxy=_bundleProxy;
- (double)preferredImageScale;
- (id)activityImageForApplicationBundleURL:(id)arg1 applicationIconFormat:(int)arg2 activityCategory:(long long)arg3;
- (id)localizedName;
- (id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithBundleProxy:(id)arg1;

@end


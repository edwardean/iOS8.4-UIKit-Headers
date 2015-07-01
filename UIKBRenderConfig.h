//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface UIKBRenderConfig : NSObject <NSCopying>
{
    _Bool _useEmojiStyles;
    _Bool _lightKeyboard;
    double _blurRadius;
    double _blurSaturation;
    double _keycapOpacity;
    double _lightKeycapOpacity;
}

+ (long long)backdropStyleForStyle:(long long)arg1;
+ (id)configForAppearance:(long long)arg1 inputMode:(id)arg2;
+ (id)darkConfig;
+ (id)defaultEmojiConfig;
+ (id)defaultConfig;
@property(nonatomic) _Bool lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
@property(nonatomic) double lightKeycapOpacity; // @synthesize lightKeycapOpacity=_lightKeycapOpacity;
@property(nonatomic) double keycapOpacity; // @synthesize keycapOpacity=_keycapOpacity;
@property(nonatomic) double blurSaturation; // @synthesize blurSaturation=_blurSaturation;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(readonly, nonatomic) long long backdropStyle;
@property(readonly, nonatomic) _Bool whiteText;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBTree.h>

@class NSArray, NSMutableDictionary;

@interface UIKBTree_Compile : UIKBTree
{
    NSMutableDictionary *symbols;
    NSMutableDictionary *refs;
}

+ (int)typeForString:(id)arg1;
+ (id)stringEnumForType:(int)arg1;
+ (id)treeOfType:(int)arg1;
+ (id)uniqueNameWithType:(int)arg1;
@property(retain, nonatomic) NSMutableDictionary *refs; // @synthesize refs;
@property(retain, nonatomic) NSMutableDictionary *symbols; // @synthesize symbols;
- (_Bool)_needsScaling;
@property(nonatomic) _Bool variable;
@property(readonly, nonatomic) NSArray *refList;
- (void)setAttributeSet:(id)arg1;
- (id)attributeSet:(_Bool)arg1;
- (void)setGeometrySet:(id)arg1;
- (id)geometrySet:(_Bool)arg1;
- (int)subtreeHash;
- (int)shapeHash;
- (int)symbolHash:(id)arg1;
- (id)symbolValues:(id)arg1 withSymbols:(id)arg2;
- (_Bool)usesSymbols;
- (void)mergePropertiesWithSubtreeRange:(struct _NSRange)arg1 properties:(id)arg2;
- (void)mergePropertiesWithOthers:(id)arg1;
- (void)mergeSymbolsWithOthers:(id)arg1;
- (void)mergeSubtreesWithOthers:(id)arg1;
- (int)indexOfSubtreeWithName:(id)arg1 rows:(id)arg2;
- (int)indexOfSubtreeWithType:(int)arg1;
- (void)setTarget:(id)arg1 forReference:(id)arg2;
- (id)listAtIndex:(int)arg1;
- (_Bool)isSameAsTree:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1;
- (void)uniquifyName;
- (id)simpleName;

@end


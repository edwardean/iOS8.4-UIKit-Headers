//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UILazyMapTable : NSObject
{
    CDUnknownBlockType _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;
- (id)cachedObjectEnumerable;
- (id)keyEnumerable;
- (id)cachedObjects;
- (id)keys;
- (_Bool)hasCachedObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;
- (id)initWithMappingBlock:(CDUnknownBlockType)arg1;

@end


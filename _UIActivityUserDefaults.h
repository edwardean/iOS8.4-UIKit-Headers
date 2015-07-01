//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface _UIActivityUserDefaults : NSObject
{
    NSString *_identifier;
    NSUserDefaults *_userDefaults;
}

+ (id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)applicationExtensionForActivity:(id)arg1;
- (id)identifierForActivity:(id)arg1;
- (void)postActivityUserDefaultsDidChangeNotification;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2 activity:(id)arg3;
- (id)defaultsValueForKey:(id)arg1 activity:(id)arg2;
- (id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1;
- (void)setActivityIdentifiersInUserOrder:(id)arg1;
- (id)activityIdentifiersInUserOrder;
- (void)updateUserOrderWithSomeSortedActivities:(id)arg1;
- (id)activitiesSortedByUserOrderForActivities:(id)arg1;
- (id)activitiesSortedByActivityIdentifierOrder:(id)arg1 forActivities:(id)arg2;
- (void)setActivity:(id)arg1 asHidden:(_Bool)arg2;
- (_Bool)activityIsHidden:(id)arg1;
- (_Bool)canHideActivity:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 userDefaults:(id)arg2;

@end


/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction;

@interface UIKeyboardPreferencesController : NSObject {
    BOOL dontSynchronizePreferences;
    UIDelayedAction *m_synchronizePreferencesAction;
}

@property BOOL dontSynchronizePreferences;
@property(readonly) BOOL isInternalInstall;

+ (void)handleSpecificHardwareKeyboard;
+ (void)preferencesChangedCallback:(id)arg1;
+ (id)sharedPreferencesController;

- (BOOL)boolForKey:(int)arg1;
- (void)clearSynchronizePreferencesTimer;
- (BOOL)costlyCapture;
- (void)dealloc;
- (id)defaultForKey:(int)arg1;
- (struct { id x1; id x2; BOOL x3; BOOL x4; unsigned long long x5; int x6; }*)domainForType:(int)arg1;
- (struct { id x1; id x2; BOOL x3; BOOL x4; unsigned long long x5; int x6; }*)domains;
- (BOOL)dontSynchronizePreferences;
- (id)init;
- (BOOL)isInternalInstall;
- (struct { id x1; id x2; int x3; id x4; id x5; int x6; }*)preferences;
- (void)releaseDontSynchronizePreferences;
- (float)rivenSizeFactor:(float)arg1;
- (void)saveInputModes:(id)arg1;
- (void)setDontSynchronizePreferences:(BOOL)arg1;
- (void)setInputModeLastUsed:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (BOOL)spaceConfirmationEnabled;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (BOOL)typologyEnabled;
- (id)valueForKey:(int)arg1;

@end

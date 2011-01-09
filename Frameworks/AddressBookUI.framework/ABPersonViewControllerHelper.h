/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonViewBehaviorHandler, <ABPersonEditDelegate>, UITableView, <ABStyleProvider>, UIBarButtonItem, UIViewController, NSArray, ABPeoplePickerNavigationController, ABModel, ABDatePickerViewController, ABPersonTableViewDataSource, NSString, NSIndexPath;



@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPickerViewControllerDismissDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, ABPopoverRepresentDelegate, ABPersonEditDelegate, ABPersonViewControllerDelegate>
{
    UIViewController *_viewController;
    <ABPersonEditDelegate> *_editDelegate;
    id _imagePicker;
    ABDatePickerViewController *_datePickerViewController;
    BOOL _isPresentingDatePickerViewController;
    BOOL _willPresentDatePickerViewController;
    id _deletionDelegate;
    ABPersonViewBehaviorHandler *_behaviorHandler;
    id _actionSheetDelegate;
    BOOL _showsLinkedPeople;
    BOOL _shouldShowLinkingUI;
    BOOL _allowsSettingAsPreferredCardForName;
    BOOL _appearsInLinkingPeoplePicker;
    BOOL _animatedRight;
    BOOL _automaticallySetEditing;
    BOOL _allowsAddingToAddressBook;
    BOOL _showsPeoplePickerCancelButton;
    BOOL _savesNewContactOnSuspend;
    void *_addressBook;
    void *_displayedPerson;
    NSArray *_displayedPeople;
    struct __CFDictionary { } *_valueByProperty;
    ABModel *_model;
    <ABStyleProvider> *_styleProvider;
    ABPersonTableViewDataSource *_personTableViewDataSource;
    BOOL _isLocation;
    BOOL _shareMessageBodyIsHTML;
    NSString *_shareMessageBody;
    NSString *_shareMessageSubject;
    NSString *_addToPersonButtonTitle;
    UIBarButtonItem *_reusableCancelButton;
    BOOL _personHeaderViewScrolls;
    UITableView *_controllerTableView;
    NSUInteger _modelDatabaseChangeCancellationCount;
    BOOL _ignoresReloadData;
    NSIndexPath *_popoverCellIndexPath;
    NSIndexPath *_popoverViewInCellIndexPath;
    UIViewController *_savedPopoverContentViewController;
    ABPeoplePickerNavigationController *_peoplePickerForLinking;
    BOOL _disablePopoverUpdates;
    BOOL _isUnlinkingPerson;
}

@property(readonly) UIViewController *viewController;
@property void *addressBook;
@property void *displayedPerson;
@property(readonly) NSArray *displayedPeople;
@property(copy) NSString *alternateName;
@property(copy) NSString *message;
@property(retain) UIFont *messageFont;
@property(copy) NSString *messageDetail;
@property(retain) UIFont *messageDetailFont;
@property(retain) UIView *customMessageView;
@property BOOL shouldShowLinkedPeople;
@property BOOL shouldShowLinkingUI;
@property BOOL appearsInLinkingPeoplePicker;
@property(getter=isReadonly,readonly) BOOL readonly;
@property BOOL allowsCardEditing;
@property(readonly) UIBarButtonItem *reusableCancelButton;
@property BOOL allowsActions;
@property BOOL allowsAddToFavorites;
@property BOOL allowsSharing;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsSettingAsPreferredCardForName;
@property BOOL allowsDeletion;
@property BOOL allowsRingtone;
@property BOOL allowsConferencing;
@property(readonly) UIView *viewForActionSheet;
@property(readonly) BOOL canSave;
@property(readonly) BOOL hasChanges;
@property(readonly) BOOL hasNameChanges;
@property(readonly) ABPersonTableViewDataSource *personTableViewDataSource;
@property(readonly) UITableView *controllerTableView;
@property(readonly) BOOL hasPopoverController;
@property(retain) UIView *personHeaderView;
@property(readonly) <ABPersonViewControllerPrivateDelegate> *personViewDelegate;
@property(readonly) NSString *attribution;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property(copy) NSString *shareMessageSubject;
@property(copy) NSString *shareMessageBody;
@property BOOL shareMessageBodyIsHTML;
@property <ABPersonEditDelegate> *editDelegate;
@property BOOL personHeaderViewScrolls;
@property(retain) <ABStyleProvider> *styleProvider;
@property(retain) ABModel *model;
@property BOOL isLocation;
@property BOOL showsPeoplePickerCancelButton;
@property BOOL allowsAddingToAddressBook;
@property BOOL automaticallySetEditing;
@property BOOL savesNewContactOnSuspend;
@property(retain) NSIndexPath *popoverViewInCellIndexPath;
@property(retain) NSIndexPath *popoverCellIndexPath;
@property BOOL ignoresReloadData;
@property NSUInteger modelDatabaseChangeCancellationCount;
@property(retain) ABDatePickerViewController *datePickerViewController;
@property(copy) NSString *addToPersonButtonTitle;
@property(readonly) ABPersonViewBehaviorHandler *behaviorHandler;

+ (void*)_newFakePersonForMergedPeople:(id)arg1;

- (id)alternateName;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)setAllowsRingtone:(BOOL)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(NSInteger*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPerson:(void*)arg2;
- (void)setAddressBook:(void*)arg1;
- (id)messageFont;
- (void)setMessage:(id)arg1;
- (id)message;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)model;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)viewController;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)applicationWillSuspend;
- (void)applicationDidResume;
- (void)dealloc;
- (void)reloadData;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void*)addressBook;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(NSInteger)arg2 error:(id)arg3;
- (id)_existingViewControllerTableView;
- (void*)_personToUseForAddressBook;
- (void)setDisplayedPeople:(id)arg1;
- (void)_updateDisplayedPeople;
- (void)updateLinkBarButtonItem;
- (void)conference:(id)arg1 person:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)_conferencingAvailabilityChanged:(id)arg1;
- (void)updateAllowsSettingAsPreferredCardForName;
- (void)setAsPreferredCardForName:(id)arg1;
- (void)reloadLinkingUISection;
- (void)reloadPropertyGroups;
- (void)setDatePickerViewController:(id)arg1;
- (BOOL)isAttributionEnabled;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(NSInteger)arg4 target:(id)arg5 selector:(SEL)arg6 forProperty:(NSInteger)arg7 withActionGrouping:(NSInteger)arg8 ordering:(NSInteger)arg9;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(NSInteger)arg3 withActionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5 animate:(BOOL)arg6;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(NSInteger)arg4 actionGrouping:(NSInteger)arg5 ordering:(NSInteger)arg6;
- (void)getVCardData:(id*)arg1 exportMode:(NSInteger)arg2 fileName:(id*)arg3;
- (BOOL)loadFrameworkAtPath:(id)arg1 andStoreHandle:(void**)arg2 bundle:(id*)arg3;
- (BOOL)loadChatKitAndReturnBundle:(id*)arg1;
- (BOOL)loadMessageUIAndReturnBundle:(id*)arg1;
- (id)vCardFileName;
- (id)controllerToPresentShareContact;
- (void)shareContactByTextMessage:(id)arg1;
- (void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)shareContactFromButtonItem:(id)arg1 sender:(id)arg2;
- (void)shareContactFromButtonItem:(id)arg1;
- (void)shareContact:(id)arg1;
- (id)viewForActionSheet;
- (void)pushViewController:(id)arg1;
- (void)presentModalViewController:(id)arg1;
- (void)updateEditButton;
- (id)prepareViewWithDisplayedProperties:(struct __CFArray { }*)arg1 person:(void*)arg2 allowActions:(BOOL)arg3;
- (id)controllerTableView;
- (void)removeSelectedPersonFromBarButtonItem:(id)arg1;
- (void)removeSelectedPerson;
- (void)removeDisplayedPeople;
- (void)deleteDialog:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)showImageMenu;
- (id)viewControllerToPresentModal;
- (void)presentNewContactViewControllerForAddToContacts:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowCardForPerson:(void*)arg2;
- (BOOL)copyInsertValue:(id*)arg1 property:(NSInteger*)arg2 forPerson:(void*)arg3;
- (BOOL)shouldShowAddToExistingContact;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (void)performAction:(NSInteger)arg1 forPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3 withContext:(void*)arg4;
- (void)performAction:(NSInteger)arg1 forPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)performDefaultActionForPropertyAtIndex:(NSInteger)arg1 inPropertyGroup:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(BOOL)arg2;
- (BOOL)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(BOOL)arg5;
- (void)personTableViewDataSource:(id)arg1 selectedAddOptionalProperties:(struct __CFArray { }*)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3 entryType:(NSInteger)arg4;
- (void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;
- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
- (BOOL)hasPopoverController;
- (BOOL)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;
- (BOOL)shouldAnimateDatePicker;
- (void)_presentDatePickerViewController:(id)arg1 andScrollToIndexPath:(id)arg2;
- (void)_datePickerDismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_dismissDatePickerAnimated:(BOOL)arg1;
- (BOOL)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;
- (void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;
- (BOOL)personTableViewDataSourceShouldShowContactSources:(id)arg1;
- (BOOL)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 shouldPushCardForPerson:(void*)arg2 showingLinkedPeople:(BOOL)arg3;
- (void)personTableViewDataSourceAskedToPresentLinkingPeoplePicker:(id)arg1;
- (BOOL)personTableViewDataSource:(id)arg1 shouldUnlinkPerson:(void*)arg2;
- (void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;
- (BOOL)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(NSInteger)arg2;
- (void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(NSInteger)arg2;
- (void)_attemptSave;
- (void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(NSInteger)arg2;
- (void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 didSetupCell:(id)arg2 forRowAtIndexPath:(id)arg3 property:(NSInteger)arg4;
- (BOOL)personTableViewDataSourceIsLocation:(id)arg1;
- (void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(void*)arg3 property:(NSInteger)arg4 identifier:(NSInteger)arg5;
- (void)dismissPickerViewController:(id)arg1;
- (id)viewToRepresentPopover:(id)arg1;
- (BOOL)isLocation;
- (void)setIsLocation:(BOOL)arg1;
- (BOOL)automaticallySetEditing;
- (id)popoverViewInCellIndexPath;
- (void)setPopoverViewInCellIndexPath:(id)arg1;
- (id)popoverCellIndexPath;
- (void)setPopoverCellIndexPath:(id)arg1;
- (BOOL)ignoresReloadData;
- (id)datePickerViewController;
- (id)addToPersonButtonTitle;
- (void)setAddToPersonButtonTitle:(id)arg1;
- (id)behaviorHandler;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(NSInteger)arg5 withActionGrouping:(NSInteger)arg6 ordering:(NSInteger)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(NSInteger)arg3 withActionGrouping:(NSInteger)arg4 ordering:(NSInteger)arg5;
- (void)loadUnknownViewWithPerson:(void*)arg1 allowActions:(BOOL)arg2;
- (void)setAlternateName:(id)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (BOOL)allowsAddingToAddressBook;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (BOOL)allowsSendingTextMessage;
- (void)setStringValue:(id)arg1 forProperty:(NSInteger)arg2;
- (void)setPrimaryProperty:(NSInteger)arg1 countryCode:(id)arg2;
- (id)unknownPersonViewDelegate;
- (void)didDismissModalViewController;
- (id)displayedPeople;
- (id)personTableViewDataSource;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (NSUInteger)modelDatabaseChangeCancellationCount;
- (void)setModelDatabaseChangeCancellationCount:(NSUInteger)arg1;
- (BOOL)hasNameChanges;
- (void)reloadNameData;
- (void)ab_updatePopoverSize;
- (BOOL)shouldShowLinkedPeople;
- (BOOL)appearsInLinkingPeoplePicker;
- (BOOL)shouldShowLinkingUI;
- (BOOL)allowsDeletion;
- (BOOL)isReadonly;
- (BOOL)allowsSharing;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsRingtone;
- (void)setAllowsConferencing:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1;
- (BOOL)allowsSettingAsPreferredCardForName;
- (id)personViewDelegate;
- (void)setMessageFont:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (id)messageDetail;
- (id)messageDetailFont;
- (void)setMessageDetailFont:(id)arg1;
- (id)customMessageView;
- (void)setCustomMessageView:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (id)personHeaderView;
- (id)attribution;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (BOOL)shareMessageBodyIsHTML;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageSubject;
- (void)setShareMessageSubject:(id)arg1;
- (void)setHighlightedItemForProperty:(NSInteger)arg1 withIdentifier:(NSInteger)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (BOOL)personHeaderViewScrolls;
- (void)setPersonHeaderViewScrolls:(BOOL)arg1;
- (void)shareContactByEmail:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (void)setAutomaticallySetEditing:(BOOL)arg1;
- (BOOL)showsPeoplePickerCancelButton;
- (void)setShowsPeoplePickerCancelButton:(BOOL)arg1;
- (void)endEditingTransactions;
- (void)setIgnoresReloadData:(BOOL)arg1;
- (id)reusableCancelButton;
- (void)loadViewWithDisplayedProperties:(struct __CFArray { }*)arg1 person:(void*)arg2 allowDeletion:(BOOL)arg3 allowActions:(BOOL)arg4;
- (BOOL)savesNewContactOnSuspend;
- (float)ab_heightToFitForViewInPopoverView;
- (void)personWasDeleted;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)nameChangedForPerson:(void*)arg1;
- (void)linksUpdatedForPerson:(void*)arg1;
- (void)imageUpdatedForPerson:(void*)arg1;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (id)editDelegate;
- (void)setEditDelegate:(id)arg1;
- (void)setShouldShowLinkedPeople:(BOOL)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setAppearsInLinkingPeoplePicker:(BOOL)arg1;
- (void)setShouldShowLinkingUI:(BOOL)arg1;
- (void)peoplePickerNavigationController:(id)arg1 requestedLinkForPerson:(void*)arg2;
- (void)setAllowsCardEditing:(BOOL)arg1;
- (BOOL)allowsCardEditing;
- (BOOL)allowsActions;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
- (void)imagePickerWillBeRemoved:(id)arg1;
- (id)personImageView;
- (id)imagePickerControllerViewControllerToPresentModal:(id)arg1;
- (void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
- (void)removeImagePickerControllerFromUI;
- (void)finishTearingDownImagePickerController;
- (void)imagePickerWillBeShown:(id)arg1;
- (id)primarySourceNameForPerson:(void*)arg1;
- (id)secondarySourceNameForPerson:(void*)arg1;
- (id)imagePickerControllerViewForApplyImageAnimation:(id)arg1;
- (void*)displayedPerson;
- (void)updateRecord;
- (BOOL)canSave;
- (void)setDisplayedPerson:(void*)arg1;
- (void)reloadImageData;
- (void)setModel:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)selectedPeople;
- (BOOL)hasChanges;

@end
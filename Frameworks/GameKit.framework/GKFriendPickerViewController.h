/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKFriendPickerViewControllerDelegate>, GKFriendPickerDataSource, GKGameInviteComposeController, GKTableHeaderSearchController, GKUITheme, NSSet, NSString;

@interface GKFriendPickerViewController : GKTableViewControllerV2 <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate> {
    GKGameInviteComposeController *_composeMessageViewController;
    GKFriendPickerDataSource *_dataSource;
    <GKFriendPickerViewControllerDelegate> *_delegate;
    NSString *_inviteMessage;
    BOOL _loadingFriendsFailed;
    int _maxPlayers;
    int _numSelected;
    GKTableHeaderSearchController *_searchController;
    GKUITheme *_theme;
}

@property(retain) NSString * achievementID;
@property(retain) GKGameInviteComposeController * composeMessageViewController;
@property(retain) GKFriendPickerDataSource * dataSource;
@property <GKFriendPickerViewControllerDelegate> * delegate;
@property(retain) NSString * inviteMessage;
@property(retain) NSString * leaderboardID;
@property BOOL loadingFriendsFailed;
@property int maxPlayers;
@property int numSelected;
@property(retain) GKTableHeaderSearchController * searchController;
@property BOOL showsNearbyPlayers;
@property(retain) GKUITheme * theme;
@property(retain) NSSet * uninvitableFriends;

- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (id)achievementID;
- (id)composeMessageViewController;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)done;
- (void)donePickingPlayersWithMessage:(id)arg1;
- (void)friendPickerScopeSelectorTouched:(id)arg1;
- (void)friendPickerSelectionDidChangeNotification:(id)arg1;
- (id)initWithGame:(id)arg1;
- (id)inviteMessage;
- (id)leaderboardID;
- (void)loadView;
- (BOOL)loadingFriendsFailed;
- (int)maxPlayers;
- (int)numSelected;
- (id)predicateForSearchText:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchController;
- (id)selectedPlayers;
- (void)setAchievementID:(id)arg1;
- (void)setComposeMessageViewController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInviteMessage:(id)arg1;
- (void)setLeaderboardID:(id)arg1;
- (void)setLoadingFriendsFailed:(BOOL)arg1;
- (void)setMaxPlayers:(int)arg1;
- (void)setNumSelected:(int)arg1;
- (void)setPlayerRangeText;
- (void)setSearchController:(id)arg1;
- (void)setShowsNearbyPlayers:(BOOL)arg1;
- (void)setTheme:(id)arg1;
- (void)setUninvitableFriends:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showMessageViewController;
- (BOOL)showsNearbyPlayers;
- (id)theme;
- (id)uninvitableFriends;
- (void)updateEnabledStateForVisibleCells;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)visibleTableView;

@end

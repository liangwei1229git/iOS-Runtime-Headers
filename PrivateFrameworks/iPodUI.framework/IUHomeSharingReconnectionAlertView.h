/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString, UIActivityIndicatorView, UILabel;

@interface IUHomeSharingReconnectionAlertView : UIView {
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_titleLabel;
}

@property(copy) NSString * title;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)hideAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (id)title;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIBarButtonItem, UIPopoverController, UIView;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIBarButtonItem *_anchorBarButtonItem;
    } _anchorRect;
    UIView *_anchorView;
    NSArray *_passthroughViews;
    unsigned int _permittedArrowDirections;
    UIPopoverController *_popoverController;
}

@property(setter=_setAnchorBarButtonItem:,retain) UIBarButtonItem * _anchorBarButtonItem;
@property(setter=_setAnchorRect:) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _anchorRect;
@property(setter=_setAnchorView:,retain) UIView * _anchorView;
@property(setter=_setPassthroughViews:,copy) NSArray * _passthroughViews;
@property(setter=_setPermittedArrowDirections:) unsigned int _permittedArrowDirections;
@property(readonly) UIPopoverController * popoverController;

- (id)_anchorBarButtonItem;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_anchorRect;
- (id)_anchorView;
- (id)_passthroughViews;
- (unsigned int)_permittedArrowDirections;
- (void)_setAnchorBarButtonItem:(id)arg1;
- (void)_setAnchorRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setAnchorView:(id)arg1;
- (void)_setPassthroughViews:(id)arg1;
- (void)_setPermittedArrowDirections:(unsigned int)arg1;
- (void)dealloc;
- (void)perform;
- (id)popoverController;

@end

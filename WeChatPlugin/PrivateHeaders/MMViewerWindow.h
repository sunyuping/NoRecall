//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class MMPreviewTitleButton, MMViewerContentWindow, NSProgressIndicator, NSString, NSTrackingArea, NSView;

@interface MMViewerWindow : NSWindowController <NSWindowDelegate>
{
    NSTrackingArea *_mainTrackingArea;
    BOOL _isFullScreen;
    id <MMViewerWindowDelegate> _delegate;
    id _context;
    NSView *_containerView;
    NSView *_toolbar;
    NSProgressIndicator *_loadingIndicator;
    MMPreviewTitleButton *_addToFavoritesButton;
    MMPreviewTitleButton *_openWithButton;
}

@property(nonatomic) BOOL isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) MMPreviewTitleButton *openWithButton; // @synthesize openWithButton=_openWithButton;
@property(retain, nonatomic) MMPreviewTitleButton *addToFavoritesButton; // @synthesize addToFavoritesButton=_addToFavoritesButton;
@property(retain, nonatomic) NSProgressIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) NSView *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id <MMViewerWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)_updateTrackingAreas;
- (void)_updateToolbarVisibility;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)manualSetupMainMenuToSupportCopyAndPaste;
- (id)contentForSharing;
- (void)openWith:(id)arg1;
- (void)nextItem:(id)arg1;
- (void)previousItem:(id)arg1;
- (void)openInExternalBrowser:(id)arg1;
- (void)share:(id)arg1;
- (void)deleteItem:(id)arg1;
- (void)addToFavorites:(id)arg1;
- (void)forwardContent:(id)arg1;
- (void)exportContent:(id)arg1;
- (BOOL)showInWindowsMenu;
- (id)title;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (BOOL)windowShouldClose:(id)arg1;
- (id)supportedActions;
- (void)loadContent;
- (void)_configureButton:(id)arg1 forAction:(unsigned long long)arg2;
- (void)stopLoading;
- (void)startLoading;
- (BOOL)showLoadingIndicator;
- (void)updateOpenWithButton:(id)arg1;
- (void)_setupToolbar;
- (void)didFinishClosing:(BOOL)arg1;
- (void)willStartClosing:(BOOL)arg1;
- (void)didFinishOpening:(BOOL)arg1;
- (void)willStartOpening:(BOOL)arg1;
- (struct CGRect)toobarFrame;
- (struct CGRect)addToFavoritesButtonFrame;
- (void)refreshContent;
- (BOOL)useEscKeyForClose;
- (BOOL)useSpaceKeyForClose;
- (BOOL)toolbarAutohides;
- (struct CGSize)minimumSize;
- (struct CGSize)sizeForContent;
- (void)closeWindowAnimated:(BOOL)arg1;
- (void)showWindowAnimated:(BOOL)arg1;
- (void)windowDidLoad;
- (void)toggleFullScreen:(id)arg1;
- (void)_setupTrafficlightButtons;
- (void)loadWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) MMViewerContentWindow *window; // @dynamic window;

@end

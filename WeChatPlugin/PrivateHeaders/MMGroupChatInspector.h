//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

@class MMOutlineButton, MMTextField, NSString, NSVisualEffectView, NSWindow, RBLPopover, RBLPopoverBackgroundView, WCContactData;

@interface MMGroupChatInspector : MMViewController
{
    RBLPopover *_rblPopover;
    RBLPopoverBackgroundView *_backgroundView;
    int _inspectorType;
    NSWindow *_parentWindow;
    MMTextField *_actionNameTextField;
    MMTextField *_inputContentTextField;
    NSVisualEffectView *_visualEffectView;
    MMOutlineButton *_confirmButton;
    MMOutlineButton *_cancelButton;
    WCContactData *_contact;
    NSString *_groupChatUserName;
}

+ (id)sharedInspector;
@property(nonatomic) int inspectorType; // @synthesize inspectorType=_inspectorType;
@property(retain, nonatomic) NSString *groupChatUserName; // @synthesize groupChatUserName=_groupChatUserName;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) MMOutlineButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMOutlineButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) NSVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property __weak MMTextField *inputContentTextField; // @synthesize inputContentTextField=_inputContentTextField;
@property __weak MMTextField *actionNameTextField; // @synthesize actionNameTextField=_actionNameTextField;
@property(nonatomic) __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
- (void)keyUp:(id)arg1;
- (BOOL)isShown;
- (void)hide;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 contact:(id)arg3 inGroupChat:(id)arg4 preferredEdge:(unsigned long long)arg5 inspectorType:(int)arg6;
- (void)toggleInView:(id)arg1 contact:(id)arg2 inGroupChat:(id)arg3 preferredEdge:(unsigned long long)arg4 edgeInsets:(struct NSEdgeInsets)arg5 inspectorType:(int)arg6;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onConfirmButtonClicked:(id)arg1;
- (void)setUpControls;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


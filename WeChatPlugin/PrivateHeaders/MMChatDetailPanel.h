//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMView.h"

#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "MMTableViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MMChatDetailAnnounceView, MMChatDetailNameView, MMDivider, MMGroupChatAnnounceWindow, MMOutlineButton, MMSessionPickerWindow, MMTableView, NSArray, NSString, NSView, WCContactData;

@interface MMChatDetailPanel : MMView <NSTableViewDelegate, NSTableViewDataSource, MMTableViewDelegate, IGroupMgrExt, IContactMgrExt>
{
    BOOL _isShown;
    BOOL _isAnimating;
    BOOL _isGroupChatOwner;
    WCContactData *_contact;
    NSArray *_groupMemberList;
    MMSessionPickerWindow *_sessionPickerWindow;
    MMGroupChatAnnounceWindow *_announceWindow;
    NSView *_contentView;
    MMView *_backgroundView;
    MMDivider *_divider;
    MMView *_topSeperator;
    MMView *_bottomSeperator;
    MMChatDetailNameView *_chatNameView;
    MMChatDetailAnnounceView *_chatAnnounceView;
    MMOutlineButton *_quitGroupChatButton;
    MMTableView *_tableView;
}

@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMOutlineButton *quitGroupChatButton; // @synthesize quitGroupChatButton=_quitGroupChatButton;
@property(retain, nonatomic) MMChatDetailAnnounceView *chatAnnounceView; // @synthesize chatAnnounceView=_chatAnnounceView;
@property(retain, nonatomic) MMChatDetailNameView *chatNameView; // @synthesize chatNameView=_chatNameView;
@property(retain, nonatomic) MMView *bottomSeperator; // @synthesize bottomSeperator=_bottomSeperator;
@property(retain, nonatomic) MMView *topSeperator; // @synthesize topSeperator=_topSeperator;
@property(retain, nonatomic) MMDivider *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) MMView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak MMGroupChatAnnounceWindow *announceWindow; // @synthesize announceWindow=_announceWindow;
@property(retain, nonatomic) MMSessionPickerWindow *sessionPickerWindow; // @synthesize sessionPickerWindow=_sessionPickerWindow;
@property(nonatomic) BOOL isGroupChatOwner; // @synthesize isGroupChatOwner=_isGroupChatOwner;
@property(retain, nonatomic) NSArray *groupMemberList; // @synthesize groupMemberList=_groupMemberList;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) BOOL isShown; // @synthesize isShown=_isShown;
- (void).cxx_destruct;
- (void)resizeGroupChatInfoViews;
- (void)handleAppFontSize;
- (void)onRemoveMemberButtonClicked;
- (void)onAddMemberButtonClicked;
- (void)didClickOnMemberRowView:(id)arg1;
- (void)didClickOnButtonRowView:(id)arg1;
- (void)OnDeleteGroupMemberContact:(id)arg1;
- (void)delayHandleOnModifyGroupMemberContact;
- (void)OnModifyGroupMemberContact:(id)arg1;
- (void)OnChangeMemberVerifyStatus:(id)arg1;
- (void)OnChangeMemberShowDisplayName:(id)arg1;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3;
- (void)OnQuitGroup:(id)arg1;
- (void)OnChangeGroup:(id)arg1;
- (void)OnAddGroupMember:(id)arg1 withStatus:(unsigned int)arg2 memberList:(id)arg3 contactList:(id)arg4;
- (void)onModifyContacts:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)hideWithMouseEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)showSubviews:(BOOL)arg1;
- (BOOL)isSelfSession;
- (BOOL)isButtonRowView:(long long)arg1;
- (void)tableView:(id)arg1 rowGotDoubleClicked:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseUp:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)hideWithAnimated:(BOOL)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (void)toggle;
- (void)updateGroupMemberList;
- (void)setupWithContact:(id)arg1;
- (void)setupGroupChatInfoViews;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

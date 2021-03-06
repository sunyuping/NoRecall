//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@interface MMTextField : NSTextField
{
    BOOL _ignoreMouseEvent;
    int _vibrancyMode;
    CDUnknownBlockType _didBecomeFirstResponderBlock;
    CDUnknownBlockType _canBecomFirstResponderBlock;
    CDUnknownBlockType _rightMouseDownBlock;
    CDUnknownBlockType _rightMouseUpBlock;
    CDUnknownBlockType _mouseDownBlock;
    CDUnknownBlockType _mouseUpBlock;
}

@property(copy, nonatomic) CDUnknownBlockType mouseUpBlock; // @synthesize mouseUpBlock=_mouseUpBlock;
@property(copy, nonatomic) CDUnknownBlockType mouseDownBlock; // @synthesize mouseDownBlock=_mouseDownBlock;
@property(copy, nonatomic) CDUnknownBlockType rightMouseUpBlock; // @synthesize rightMouseUpBlock=_rightMouseUpBlock;
@property(copy, nonatomic) CDUnknownBlockType rightMouseDownBlock; // @synthesize rightMouseDownBlock=_rightMouseDownBlock;
@property(copy, nonatomic) CDUnknownBlockType canBecomFirstResponderBlock; // @synthesize canBecomFirstResponderBlock=_canBecomFirstResponderBlock;
@property(copy, nonatomic) CDUnknownBlockType didBecomeFirstResponderBlock; // @synthesize didBecomeFirstResponderBlock=_didBecomeFirstResponderBlock;
@property(nonatomic) BOOL ignoreMouseEvent; // @synthesize ignoreMouseEvent=_ignoreMouseEvent;
@property(nonatomic) int vibrancyMode; // @synthesize vibrancyMode=_vibrancyMode;
- (void).cxx_destruct;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (BOOL)becomeFirstResponder;

@end


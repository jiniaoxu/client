//
//  KBTwitterView.h
//  Keybase
//
//  Created by Gabriel on 1/13/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KBUIDefines.h"
#import "KBRPC.h"

typedef NS_ENUM (NSInteger, KBProveType) {
  KBProveTypeUnknown,
  KBProveTypeTwitter,
  KBProveTypeGithub,
};

@interface KBProveView : KBView

@property (nonatomic) KBProveType proveType;

NSString *KBServiceNameForProveType(KBProveType proveType);
KBProveType KBProveTypeForServiceName(NSString *serviceName);

@end

@interface KBProveInputView : KBView
@property (nonatomic) KBProveType proveType;
@property KBLabel *label;
@property KBTextField *inputField;
@property KBButton *button;
@property KBButton *skipButton;
@end

@interface KBProveInstructionsView : KBView
@property KBLabel *instructionsLabel;
@property KBLabel *proofLabel;
@property NSScrollView *scrollView;
@property KBButton *button;
@property KBButton *clipboardCopyButton;
- (void)setInstructions:(KBRText *)instructions proofText:(NSString *)proofText targetBlock:(KBButtonTargetBlock)targetBlock;
@end

@interface KBProveView ()
@property KBProveInputView *inputView;
@property KBProveInstructionsView *instructionsView;
@end

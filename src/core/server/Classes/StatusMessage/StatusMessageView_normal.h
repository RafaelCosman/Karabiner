// -*- Mode: objc -*-

#import "StatusMessageView.h"

@interface StatusMessageView_normal : StatusMessageView
{
  IBOutlet NSTextField* message_;
}

- (void) setMessage:(NSString*)message;

@end

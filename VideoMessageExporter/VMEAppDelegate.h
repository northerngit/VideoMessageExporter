//
//  VMEAppDelegate.h
//  VideoMessageExporter
//
//  Created by Alvaro Prieto on 12/7/13.
//  Copyright (c) 2013 Alvaro Prieto. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface VMEAppDelegate : NSObject <NSApplicationDelegate, NSTableViewDataSource, NSTableViewDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (weak) IBOutlet NSTableView *myTableView;

- (void)addVideoMessageWithURL: (NSURL *)url author:(NSString *)author timestamp:(NSString *)timestamp;

@end

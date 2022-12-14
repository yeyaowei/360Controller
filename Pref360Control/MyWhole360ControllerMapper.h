//
//  MyWhole360ControllerMapper.h
//
//  Created by Drew Mills on 1/30/15.
//

#import <Cocoa/Cocoa.h>
#import "MyWhole360Controller.h"
#import "Pref360ControlPref.h"

@interface MyWhole360ControllerMapper : MyWhole360Controller

@property BOOL isMapping;

- (void)runMapperWithButton:(NSButton *)button andOwner:(Pref360ControlPref *)pref;
- (void)cancelMappingWithButton:(NSButton *)button andOwner:(Pref360ControlPref *)pref;
- (void)resetWithOwner:(Pref360ControlPref *)pref;
- (void)buttonPressedAtIndex:(int)index;
+ (UInt8 *)mapping;

@end

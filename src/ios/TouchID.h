//
//  TouchID.h
//  Copyright (c) 2014 Lee Crossley - http://ilee.co.uk
//

#import <Cordova/CDVPlugin.h>

@import LocalAuthentication

@interface TouchID : CDVPlugin

- (void) authenticate:(CDVInvokedUrlCommand*)command;

@end

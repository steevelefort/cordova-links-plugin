#import <Cordova/CDV.h>
#import <AVFoundation/AVFoundation.h>

@interface LinksPlugin : CDVPlugin

- (void)openlink:(CDVInvokedUrlCommand*)command;

@end
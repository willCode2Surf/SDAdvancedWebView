//
//  SDAdvancedWebViewCommand.h
//  SDAdvancedWebView
//
//  Created by Olivier Poitrey on 10/06/10.
//  Copyright 2010 Dailymotion. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SDAdvancedWebViewCommand : NSObject
{
    @private
    NSString *command;
    Class pluginClass;
    SEL pluginSelector;
	NSArray* arguments;
	NSDictionary* options;
}

@property (nonatomic, retain) NSString *command;
@property (nonatomic, assign) Class pluginClass;
@property (nonatomic, assign) SEL pluginSelector;
@property (nonatomic, retain) NSArray *arguments;
@property (nonatomic, retain) NSDictionary *options;

- (id)initWithURL:(NSURL *)url;

@end

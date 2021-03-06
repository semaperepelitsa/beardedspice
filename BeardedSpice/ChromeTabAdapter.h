//
//  ChromeTabAdapter.h
//  BeardedSpice
//
//  Created by Jose Falcon on 12/10/13.
//  Copyright (c) 2013 Tyler Rhodes / Jose Falcon. All rights reserved.
//

#import "Tab.h"
#import "Chrome.h"

@class runningSBApplication;

@interface ChromeTabAdapter : NSObject <Tab> {
    
    BOOL _wasActivated;
    NSInteger _previousTabId;
    ChromeWindow *_previousTopWindow;
    BOOL _wasWindowActivated;
}

+(id) initWithApplication:(runningSBApplication *)application andWindow:(ChromeWindow *)window andTab:(ChromeTab *)tab;

@property runningSBApplication *application;
@property ChromeTab *tab;
@property ChromeWindow *window;

@end

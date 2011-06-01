//
//  iad_sampleAppDelegate.h
//  iad_sample
//
//  Created by Anurag Solanki on 01/02/11.
//  Copyright 2011 Vinsol. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iad_sampleAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end


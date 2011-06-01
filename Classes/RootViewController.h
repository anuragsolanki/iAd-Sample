//
//  RootViewController.h
//  iad_sample
//
//  Created by Anurag Solanki on 01/02/11.
//  Copyright 2011 Vinsol. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iAd/ADBannerView.h"
#import "TouchXML.h"

@interface RootViewController : UIViewController <ADBannerViewDelegate>  {
	
	UIView *_contentView;
	id _adBannerView;
	BOOL _adBannerViewIsVisible;
	
}

@property (nonatomic, retain) IBOutlet UIView *contentView;
@property (nonatomic, retain) id adBannerView;
@property (nonatomic) BOOL adBannerViewIsVisible;

@end

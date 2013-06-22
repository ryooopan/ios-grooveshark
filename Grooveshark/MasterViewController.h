//
//  MasterViewController.h
//  Grooveshark
//
//  Created by Ryo Suzuki on 6/21/13.
//  Copyright (c) 2013 Ryo Suzuki. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface MasterViewController : UITableViewController <AVAudioPlayerDelegate, AVAudioSessionDelegate>

@property (nonatomic, retain) IBOutlet UIBarButtonItem *playAllButton;

@end
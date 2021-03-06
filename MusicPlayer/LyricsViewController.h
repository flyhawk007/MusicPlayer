//
//  LyricsViewController.h
//  MusicPlayer
//
//  Created by Bill on 12-7-23.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "DFLyricsReader.h"
#import "DFLyricsMusicPlayer.h"
#import "DFQianQianLyricsDownloader.h"
#import "DFLyricsAlbumViewController.h"

@interface LyricsViewController : UIViewController<MPMediaPickerControllerDelegate,DFLyricsMusicPlayerDelegate>{
    IBOutlet UILabel *label;
    IBOutlet UISlider *slider;
    
    //IBOutlet UILabel *titleLabel;
    //IBOutlet UILabel *artistLabel;
    //IBOutlet UILabel *albumLabel;
    
    IBOutlet UILabel *goesTimeL;
    IBOutlet UILabel *readyTimeL;
    IBOutlet UINavigationBar *navigationBar;
    
    DFLyricsAlbumViewController *lyricsAlbumViewController;
}

-(IBAction)stopButtonClicked;
@end

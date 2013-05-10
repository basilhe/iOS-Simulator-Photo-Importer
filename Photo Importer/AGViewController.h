//
//  AGViewController.h
//  Photo Importer
//
//  Created by Artur Grigor on 2/13/12.
//  Copyright (c) 2012 Universitatea "Babes-Bolyai". All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AGViewController : UIViewController<UITextFieldDelegate>
{
    UILabel *pathLabel;
    UITextField *pathTextField;
    UIButton *importButton;
    UIButton *importVideoButton;
    
    NSMutableArray *filePaths;
    NSMutableArray *videoFilePaths;
    
    NSUInteger numberOfPhotos;
    NSUInteger numberOfPhotosProcessed;
    NSUInteger numberOfErrors;
    
    NSUInteger numberOfVideos;
    NSUInteger numberOfVideosProcessed;
    NSUInteger numberOfVideoErrors;
}

@property (nonatomic, readonly) UILabel *pathLabel;
@property (nonatomic, readonly) UITextField *pathTextField;
@property (nonatomic, readonly) UIButton *importButton;

@end

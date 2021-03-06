/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "_UISettingsKeyPathObserver.h"

@class NSString, PTIconSettings, UIImage, UIImageView;

@interface PTIcon : UIView <_UISettingsKeyPathObserver>
{
    UIImage *_image;
    NSString *_title;
    UIView *_appLabelView;
    UIImageView *_imageView;
    PTIconSettings *_iconSettings;
    struct __CFRunLoopObserver *_runLoopObserver;
    CDStruct_d4b298fb _imageStatistics;
}

+ (id)iconWithImageName:(id)arg1 title:(id)arg2;
+ (id)iconWithImage:(id)arg1 title:(id)arg2;
@property(nonatomic) struct __CFRunLoopObserver *runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(nonatomic) CDStruct_d4b298fb imageStatistics; // @synthesize imageStatistics=_imageStatistics;
@property(retain, nonatomic) PTIconSettings *iconSettings; // @synthesize iconSettings=_iconSettings;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *appLabelView; // @synthesize appLabelView=_appLabelView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)makeLabel;
- (struct CGRect)labelFrame;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)updateLabel;
- (void)updateLabelWithImageStatistics:(CDStruct_d4b298fb)arg1;
- (id)init;

@end


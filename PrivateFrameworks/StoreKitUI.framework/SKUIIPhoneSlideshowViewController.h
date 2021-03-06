/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, SKUIClientContext, SKUIGiftThemeCollectionView, SKUIScreenshotDataConsumer, UIPageControl;

@interface SKUIIPhoneSlideshowViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    SKUIClientContext *_clientContext;
    id <SKUISlideshowViewControllerDataSource> _dataSource;
    SKUIGiftThemeCollectionView *_collectionView;
    UIPageControl *_pageControl;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_placeholderQueue;
    NSMutableArray *_images;
    NSMutableDictionary *_placeholderImages;
    SKUIScreenshotDataConsumer *_screenshotConsumer;
    int _indexToScrollToOnLoadView;
    BOOL _respondsToCount;
    BOOL _respondsToURL;
    BOOL _respondsToImage;
}

@property(nonatomic) __weak id <SKUISlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_reloadPageControl;
- (void)_setLowResImage:(id)arg1 atIndex:(int)arg2;
- (void)_setImage:(id)arg1 atIndex:(int)arg2;
- (id)_placeholderImageAtIndex:(int)arg1;
- (id)_imageAtIndex:(int)arg1;
- (void)_doneAction:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) int currentIndex;
- (void)reloadData;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSOperationQueue;

@interface PLMomentGeneration : NSObject
{
    NSOperationQueue *__queue;
    NSMutableArray *__assets;
}

+ (id)_insertYearMomentListsForMoments:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)_insertMegaMomentListsForMoments:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)_insertMomentsForAssets:(id)arg1 inManagedObjectContext:(id)arg2;
+ (BOOL)_rebuildAllMomentListsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (BOOL)_rebuildAllMomentsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (BOOL)_deleteAllMomentDataInManagedObjectContext:(id)arg1 incremental:(BOOL)arg2 error:(id *)arg3;
+ (BOOL)rebuildAllMomentsForOfflineStore:(id)arg1 error:(id *)arg2;
+ (id)generator;
@property(readonly, nonatomic) NSMutableArray *_assets; // @synthesize _assets=__assets;
@property(readonly, nonatomic) NSOperationQueue *_queue; // @synthesize _queue=__queue;
- (id)_insertYearMomentListsForMoments:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_insertMegaMomentListsForMoments:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_insertMomentsForAssets:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)rebuildAllMomentLists:(id)arg1;
- (void)rebuildAllMomentsIncremental:(BOOL)arg1 completionHandler:(id)arg2;
- (void)generateWithAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2 completionHandler:(id)arg3;
- (id)affectedMomentsForDate:(id)arg1 inContext:(id)arg2;
- (id)momentPhotoLibrary;
- (void)dealloc;
- (id)init;

@end


/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class PUSectionedGridLayout;

@interface PULayoutSamplingHelper : NSObject
{
    PUSectionedGridLayout *_layout;
    int _visualSection;
}

@property(readonly, nonatomic) int visualSection; // @synthesize visualSection=_visualSection;
@property(readonly, nonatomic) PUSectionedGridLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (int)mainRealItemIndexForVisualItemIndex:(int)arg1;
- (int)visualItemIndexForRealItemIndex:(int)arg1;
- (id)initWithSectionedGridLayout:(id)arg1 visualSection:(int)arg2;

@end

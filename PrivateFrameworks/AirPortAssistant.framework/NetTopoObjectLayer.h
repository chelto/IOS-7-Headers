/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "CALayer.h"

@class BubbleTextLayer, NSMutableArray, NSString, NSTimer, TopoNumberBadge, TopoProgressBar, UIImage;

@interface NetTopoObjectLayer : CALayer
{
    id _associatedNode;
    id _owningView;
    float _layoutScale;
    BOOL _smallSize;
    int _topoStyle;
    struct CGSize _boundsSizeConstraint;
    UIImage *_statusBadgeImage;
    BOOL _selectable;
    struct CGColor *_selectionColor;
    struct CGColor *_labelUnselectedFillColor;
    struct CGColor *_labelSelectedFillColor;
    struct CGColor *_labelSelectedFillColor2;
    struct CGColor *_labelUnselectedTextColor;
    struct CGColor *_labelSelectedTextColor;
    struct CGColor *_secondaryLabelUnselectedTextColor;
    struct CGColor *_secondaryLabelSelectedTextColor;
    struct CGRect _imageFrame;
    struct CGRect _imageCoreFrame;
    struct CGRect _imageSelectionFrame;
    float _selectionCornerRadius;
    float _selectionRectOutset;
    NSString *_labelString;
    BubbleTextLayer *_labelLayer;
    float _labelPinnedHeight;
    NSString *_secondaryLabelString;
    BubbleTextLayer *_secondaryLabelLayer;
    UIImage *_statusLights[4];
    NSTimer *_statusLightTimer;
    float _statusLightInterval;
    unsigned int _statusLightState;
    unsigned int _statusLightMode;
    TopoNumberBadge *_topoNumberBadge;
    unsigned int _topoBadgeNumber;
    TopoProgressBar *_topoProgressBar;
    float _topoProgressValue;
    id _userObject;
    NSString *_saveLable;
    unsigned int _row;
    unsigned int _column;
    struct CGPoint _layoutOrigin;
    unsigned int _number;
    float _prelim;
    float _mod;
    float _change;
    float _shift;
    BOOL _isExpanded;
    NetTopoObjectLayer *_contourThread;
    NetTopoObjectLayer *_ancestor;
    BOOL _selected;
    BOOL _ghosted;
    NetTopoObjectLayer *_parent;
    NSMutableArray *_children;
    NSString *_saveLabel;
    struct CGImage *_objectImage;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property(retain, nonatomic) struct CGImage *objectImage; // @synthesize objectImage=_objectImage;
@property(retain, nonatomic) NSString *saveLabel; // @synthesize saveLabel=_saveLabel;
@property(retain, nonatomic) id userObject; // @synthesize userObject=_userObject;
@property(nonatomic) unsigned int topoBadgeNumber; // @synthesize topoBadgeNumber=_topoBadgeNumber;
@property(nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) NetTopoObjectLayer *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) id associatedNode; // @synthesize associatedNode=_associatedNode;
@property(nonatomic) NetTopoObjectLayer *ancestor; // @synthesize ancestor=_ancestor;
@property(nonatomic) NetTopoObjectLayer *contourThread; // @synthesize contourThread=_contourThread;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_isExpanded;
@property(nonatomic) unsigned int number; // @synthesize number=_number;
@property(nonatomic) float shift; // @synthesize shift=_shift;
@property(nonatomic) float change; // @synthesize change=_change;
@property(nonatomic) float mod; // @synthesize mod=_mod;
@property(nonatomic) float prelim; // @synthesize prelim=_prelim;
@property(nonatomic) struct CGPoint layoutOrigin; // @synthesize layoutOrigin=_layoutOrigin;
@property(nonatomic) unsigned int column; // @synthesize column=_column;
@property(nonatomic) unsigned int row; // @synthesize row=_row;
@property(nonatomic) BOOL smallSize; // @synthesize smallSize=_smallSize;
- (id)debugDescription;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned int)arg3;
- (struct CGRect)getFrameContainingAllSublayers;
- (struct CGRect)getUserInteractionBounds;
- (CDStruct_95077174)getConnectionAttachmentLocations;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
@property(nonatomic) float layoutScale; // @synthesize layoutScale=_layoutScale;
@property(nonatomic) unsigned int statusLightMode;
- (void)statusLightUpdateTimer:(id)arg1;
- (void)setStatusLightStateFromMode;
@property(retain, nonatomic) UIImage *statusBadgeImage;
- (void)setStatusBadgeImagePriv:(id)arg1;
- (void)deallocStatusImages;
- (void)loadStatusImagesForScale:(float)arg1;
@property(nonatomic) float topoProgressValue; // @synthesize topoProgressValue=_topoProgressValue;
@property(retain, nonatomic) NSString *secondaryLabel;
@property(nonatomic) float labelPinnedHeight;
@property(retain, nonatomic) NSString *label;
@property(nonatomic, getter=isGhosted) BOOL ghosted; // @synthesize ghosted=_ghosted;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) id owningView; // @synthesize owningView=_owningView;
@property(nonatomic) struct CGSize boundsSizeConstraint;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (id)lastChild;
- (id)firstChild;
- (id)childAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int numberOfChildren;
@property(readonly, nonatomic) NetTopoObjectLayer *parentDevice;
- (void)pickCorrectImagesForContentsScale:(float)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2;
- (void)initNetTopoObjectLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2;

@end

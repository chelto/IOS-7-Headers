/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKMove : SKAction
{
    struct SKCMove *_mycaction;
}

+ (id)moveByY:(float)arg1 duration:(double)arg2;
+ (id)moveToY:(float)arg1 duration:(double)arg2;
+ (id)moveByX:(float)arg1 duration:(double)arg2;
+ (id)moveToX:(float)arg1 duration:(double)arg2;
+ (id)moveToX:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)moveTo:(struct CGPoint)arg1 duration:(double)arg2;
+ (id)moveByX:(float)arg1 y:(float)arg2 duration:(double)arg3;
+ (id)moveBy:(struct CGPoint)arg1 duration:(double)arg2;
- (id)reversedAction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface _NSXPCInterfaceMethodInfo : NSObject
{
    char *_replySignature;
    int replyPosition;
    NSMutableArray *replyArguments;
    NSMutableArray *arguments;
}

- (const char *)replySignature;
- (void)setReplySignature:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end


/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "UITableViewDelegate.h"

@class ABModel, ABStarkGroupsDataSource;

@interface ABStarkGroupsViewController : UITableViewController <UITableViewDelegate>
{
    ABModel *_model;
    ABStarkGroupsDataSource *_dataSource;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

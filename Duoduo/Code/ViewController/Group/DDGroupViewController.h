//
//  DDGroupViewController.h
//  Duoduo
//
//  Created by 独嘉 on 14-4-29.
//  Copyright (c) 2014年 zuoye. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class DDGroupViewController;
@protocol DDGroupViewControllerDelegate <NSObject>

- (void)groupViewController:(DDGroupViewController*)groupVC selectGroup:(GroupEntity*)group;

@end

@class DDGroupVCModule;
@interface DDGroupViewController : NSViewController<NSTableViewDataSource,NSTableViewDelegate>

@property (nonatomic,retain)DDGroupVCModule* module;
@property (nonatomic,weak)IBOutlet NSTableView* tableView;
@property (nonatomic,assign)id<DDGroupViewControllerDelegate> delegate;
- (void)selectGroup:(NSString*)group;

- (void)initialData;
@end

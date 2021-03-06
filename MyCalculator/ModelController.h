//
//  ModelController.h
//  MyCalculator
//
//  Created by Ashwin Bhargava on 11/17/15.
//  Copyright © 2015 Ashwin Bhargava. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end


//
//  DemoPanel.h
//  MyCoreMLDemo
//
//  Created by 高明阳 on 2020/12/23.
//  Copyright © 2020 高明阳. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DemoPanel : UIView
@property (nonatomic, strong) NSString * text;
@property (nonatomic, strong, readonly) UISegmentedControl * segmentedControl;

@end

NS_ASSUME_NONNULL_END

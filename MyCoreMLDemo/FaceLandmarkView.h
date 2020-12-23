//
//  FaceLandmarkView.h
//  MyCoreMLDemo
//
//  Created by 高明阳 on 2020/12/23.
//  Copyright © 2020 高明阳. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Vision/Vision.h>

NS_ASSUME_NONNULL_BEGIN

@interface FaceLandmarkView : UIView
@property (nonatomic, strong) VNFaceObservation * observation;

@end

NS_ASSUME_NONNULL_END

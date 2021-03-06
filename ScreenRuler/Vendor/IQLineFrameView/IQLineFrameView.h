//
//  IQLineFrameView.h
//  Screen Ruler
//
//  Created by Mohd Iftekhar Qurashi
//  Copyright (c) 2016 InfoEum Software Systems. Licensed under the Apache License v2.0.
//  See COPYING or https://www.apache.org/licenses/LICENSE-2.0

#import <UIKit/UIKit.h>

@class IQLineFrameView;

@protocol IQLineFrameViewDelegate <NSObject>

-(void)lineFrameDidChangeStartingScalePoint:(IQLineFrameView*)lineView;

@end

@interface IQLineFrameView : UIView

@property(nonatomic, weak) id<IQLineFrameViewDelegate> delegate;

@property(nonatomic,assign) CGPoint startingScalePoint;
@property(nonatomic,assign) CGSize scaleMargin;

@property(nonatomic,assign) CGFloat deviceScale;

@property(nonatomic,assign) CGFloat zoomScale;
-(void)setZoomScale:(CGFloat)zoomScale animated:(BOOL)animated;

@property(nonatomic,weak) UIView *respectiveView;

@property(nonatomic, strong) UIColor *lineColor;
@property(nonatomic,strong) UIColor *rulerColor;

@property(nonatomic, assign) BOOL hideRuler;

-(void)updateUIAnimated:(BOOL)animated;

@end

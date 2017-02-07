//
//  LSRoundMenuButton.h
//
//  Created by ArthurShuai on 16/5/28.
//  Copyright © 2016年 ArthurShuai. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSInteger, LSIconType) {
    IconTypePlus = 0,
    IconTypeUserDraw
};

@interface LSRoundMenuButton : UIControl

@property (nonatomic, assign) CGSize centerButtonSize;
@property (nonatomic, assign) LSIconType centerIconType;
@property (nonatomic, assign) BOOL jumpOutButtonOnebyOne;
@property (nonatomic, strong) UIColor* mainColor;

@property (nonatomic, strong) void (^buttonClickBlock) (NSInteger idx);
@property (nonatomic, strong) void (^drawCenterButtonIconBlock)(CGRect rect , UIControlState state);

- (void)loadButtonWithIcons:(NSArray<UIImage*>*)icons startDegree:(CGFloat)degree layoutDegree:(CGFloat)layoutDegree andIsRight:(BOOL)isRight;

@end

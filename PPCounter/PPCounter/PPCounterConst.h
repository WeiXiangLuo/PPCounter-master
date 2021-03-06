//
//  PPCounterConst.h
//  PPCounter
//
//  Created by AndyPang on 16/10/17.
//  Copyright © 2016年 AndyPang. All rights reserved.
//

/*
 *********************************************************************************
 *
 * 如果您在使用 PPCounter 的过程中出现bug或有更好的建议,还请及时以下列方式联系我,我会及
 * 时修复bug,解决问题.
 *
 * Weibo : CoderPang
 * Email : jkpang@outlook.com
 * QQ    : 2406552315
 * GitHub: https://github.com/jkpang
 *
 * 如果 PPCounter 好用,希望您能Star支持,你的 ⭐️ 是我持续更新的动力!
 *
 *********************************************************************************
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

UIKIT_EXTERN NSString *const kPPCounterAnimationType;

typedef void(^PPCompletionBlock)(void);

typedef void(^PPCurrentNumberBlock)(CGFloat number);

typedef NSString *(^PPFormatBlock)(CGFloat number);

typedef NSAttributedString *(^PPAttributedFormatBlock)(CGFloat number);

typedef NS_ENUM(NSUInteger, PPCounterAnimationType) {
    /** 由快到慢*/
    PPCounterAnimationTypeEaseOut = 1,
    /** 由慢到快*/
    PPCounterAnimationTypeEaseIn,
    /** 由慢到快,再由快到慢*/
    PPCounterAnimationTypeEaseInOut,
    /** 匀速*/
    PPCounterAnimationTypeLinear
};

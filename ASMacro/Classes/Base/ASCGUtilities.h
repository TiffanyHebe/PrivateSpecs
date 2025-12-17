//
//  ASCGUtilities.h
//  ASMacros_Example
//
//  Created by 洛城 on 2025/12/16.
//  Copyright © 2025 quyunguang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

CGSize ASScreenSize(void);

#ifndef kScreenSize
#define kScreenSize ASScreenSize()
#endif

#ifndef kScreenWidth
#define kScreenWidth ASScreenSize().width
#endif

// main screen's height (portrait)
#ifndef kScreenHeight
#define kScreenHeight ASScreenSize().height
#endif



NS_ASSUME_NONNULL_END

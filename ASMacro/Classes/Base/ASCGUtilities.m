//
//  ASCGUtilities.m
//  ASMacros_Example
//
//  Created by 洛城 on 2025/12/16.
//  Copyright © 2025 quyunguang. All rights reserved.
//

#import "ASCGUtilities.h"


CGSize ASScreenSize(void) {
    static CGSize size;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        size = [UIScreen mainScreen].bounds.size;
        if (size.height < size.width) {
            CGFloat tmp = size.height;
            size.height = size.width;
            size.width = tmp;
            
            
        }
    });
    return size;
}




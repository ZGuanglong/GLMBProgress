//
//  MBProgressHUD+GL.h
//
//  Created by GL on 16-8-14.
//  Copyright (c) 2016年 . All rights reserved.
//

#import "MBProgressHUD.h"

@interface MBProgressHUD (GL)
+ (void)showSuccess:(NSString *)success toView:(UIView *)view;
+ (void)showError:(NSString *)error toView:(UIView *)view;
+ (MBProgressHUD *)showMessage:(NSString *)message toView:(UIView *)view;
+ (void)showSuccess:(NSString *)success;
+ (void)showError:(NSString *)error;

//+ (MBProgressHUD *)showMessage:(NSString *)message;

+ (void)hideHUDForView:(UIView *)view;
+ (void)hideHUD;
+ (void)showMessage:(NSString *)message;
+ (MBProgressHUD *)showProgress:(NSString *)message;
@end

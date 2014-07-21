//
//  LoginViewController.h
//  hunter-iOS
//
//  Created by Venkateswara Prasath Durairaj on 2014-07-20.
//  Copyright (c) 2014 Venkateswara Prasath Durairaj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *txtUsername;
@property (weak, nonatomic) IBOutlet UITextField *txtPassword;
- (IBAction)login_clicked:(id)sender;

@end

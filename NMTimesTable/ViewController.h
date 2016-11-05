//
//  ViewController.h
//  NMTimesTable
//
//  Created by Namrata on 05/11/16.
//  Copyright © 2016 Namrata Mahajan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate,UITextFieldDelegate,UITableViewDelegate,UITableViewDataSource>
{
    NSMutableArray *allValues;
}

@property (strong, nonatomic) IBOutlet UITextField *numberField;
@property (strong, nonatomic) IBOutlet UITableView *myTableView;
@property (strong, nonatomic) IBOutlet UIButton *calculateButton;
- (IBAction)ActionCalculate:(id)sender;
@property (strong, nonatomic) IBOutlet UITextField *limitField;

@end

